// Write a program that converts Centigrade to Fahrenheit.

#include <stdio.h>
int main(){
    float c, f;
    printf("Enter temperature in centigrade: ");
    scanf("%f", &c);
    f = c*1.8 + 32;
    printf("The temperature in fahrenheit is %f", f);
    return 0;
}