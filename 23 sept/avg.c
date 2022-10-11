#include <stdio.h>

int main(){
    int n,i; 
    float num[100], sum = 0.0, avg;
    printf("Enter the number of elements ");;
    scanf("%i", &n);
    for (i = 0; i<n; ++i){
        printf("%i Enter number: ", i + 1 );
        scanf("f", &num[i]);
        sum+=num[i];
    }
    avg = sum/n;
    printf("Averge: %.2f", avg);
    printf("\nSum: %.2f", sum);
    return 0;
}