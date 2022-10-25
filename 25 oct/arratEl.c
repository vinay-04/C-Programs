#include <stdio.h>

int main(){
    int e, n, i=0 , t;
    printf("enter number of elements: ");
    scanf("%d", &n);
    int a[n];
    while (i<n){
        printf("enter numbers: ");
        scanf("%d", &e);
        a[i] = e;
        i++;
    }
    for(int q=0; q<n; q++){
    for (int j=0; j<n-1; j++){

        if(a[j]>a[j+1]){
            t = a[j];
            a[j] = a[j+1];
            a[j+1] = t;
        }
    }}
    printf("\n");
    printf("The Second largest number is %d and the smallest element is %d.", a[n-2], a[0]);
    return 0;

}