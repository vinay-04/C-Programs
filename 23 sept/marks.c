#include <stdio.h>

int main(){
    int n;
    printf("Enter your marks ");
    scanf("%i", &n);

    if (n>90){
        printf("Congrats !! You scored A");
    }
    else if (n>70){
        printf("You scored grade B");
    }
    else if (n>50){
        printf("You scored grade C");
    }
    else if (n<50){
        printf("Sorry you failed");
    }
    return 0;
}