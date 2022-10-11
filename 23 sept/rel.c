#include <stdio.h>

int main(){
    int a,b;
    printf("Enter 2 numbers ");
    scanf("%i\n%i", &a, &b);
    if (a<b){
        printf("%i<%i", a, b);
    }
    else if (a>b){
        printf("%i>%i", a, b);
    }

    else{
        printf("%i=%i",a, b);
    }
    return 0;
}
