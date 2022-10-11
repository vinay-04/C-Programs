#include <stdio.h>

int main(){
    int a;
    printf("Enter your age ");
    scanf("%i", &a);
    if (a>18){
        printf("You are eligible to vote...");
    }
    else if (a<18){
        printf("Sorry... you can't vote");
    }
    return 0;
}