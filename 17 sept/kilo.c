// Write a C program that converts kilometers per hour to miles per hour.

#include <stdio.h>

int main(){
    float kilometers, miles;
    printf("Enter kilometers: ");
    scanf("%f", &kilometers);
    miles = kilometers/1.609;
    printf("Miles: %f", miles);
    return 0;
}