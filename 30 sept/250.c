#include <stdio.h>

int main(){
    int a, b;
    printf("Enter the values of a,b ");
    scanf("%d, %d", &a, &b);
    if (a==250 || b==250 || a+b == 250){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;
}