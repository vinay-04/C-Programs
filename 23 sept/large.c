#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter 3 numbers ");
    scanf("%i\n%i\n%i", &a,&b,&c);
    if (a>b && a>c){
        printf("The largest number is %i", a);
    }
    else if (b>a && b>c){
        printf("The largest number is %i", b);
    }
    else if (c>a && c>b){
        printf("The largest number is %i", c);
    }
    else if (c==a && c==b){
        printf("All are equal");
    }

    return 0;

}