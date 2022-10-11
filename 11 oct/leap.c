#include <stdio.h>

int main(){

    int a;
    printf("Enter a year: ");
    scanf("%i", &a);
    if (a%4==0){
        printf("%i is a leap year.", a);
    }
    else{
        printf("%i is not a leap year", a);
    }
    return 0;
}