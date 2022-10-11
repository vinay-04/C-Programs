// Write a program in C to calculate the sum of three numbers with getting input in one line separated by a comma.

#include <stdio.h>

int main(){
    int arr[3], i;
    int sum = 0;
    printf("Enter 3 number seperated by comma: ");
    for(i=0;i<3;i++){
        scanf("%d,",&arr[i]);
    }
    for(i=0;i<3;i++){
        sum = arr[i] + sum;
    }

    printf("The sum is: %i",sum);
    return 0;

}