// Write a C program to perform addition, subtraction, multiplication and division of two numbers.

#include <stdio.h>

int main(){
    int a,b, sum,  multi, sub;
    float divi;
    printf("Enter 2 numbers: ");
    scanf("%d,%d", &a, &b);
    printf("\nsum: %d",a + b);
    printf("\nmultiplication: %d",a*b);
    printf("\nsubtraction: %d",a-b);
    divi = b/a;
    printf("\ndivision: %f",divi);
}