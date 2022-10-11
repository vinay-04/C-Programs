#include <stdio.h>

int main(){
    int a,b;
    printf("Enter two integer values: ");
    scanf("%d %d", &a, &b);
    if (a<36 && a>24){
        printf("Within range");
    }
    else if(b<36 && b>24){
        printf("Within range");
    }
    else{printf("Out of Range");}
    return 0;
}