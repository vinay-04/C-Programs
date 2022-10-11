#include <stdio.h>

int main(){
    int i, n, a=0;
    printf("Enter a number: ");
    scanf("%i", &n);
    for(i=2; i<n; i++){
        if(n%i==0){
            a=1;
            break;
        }
    }
    if (a==1){
        printf("%i is a Composite number", n);
    }
    else{
        printf("%i is a Prime number", n);
    }
    return 0;
}