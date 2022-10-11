#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter value of a ");
    scanf("%i", &a);
    printf("Enter value of b ");
    scanf("%i", &b);
    c = a;
    a = b;
    b = c;
    printf("After swaping a = %i, b = %i", a,b);
    return 0 ;
}