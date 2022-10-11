#include <stdio.h>

int main(){
    int n;
    printf("Enter a number");
    scanf("%i", &n);
    if (n<0){
        printf("You entered %i\n", n);
    }
    printf("The if statement is easy.");

    return 0;

}