#include <stdio.h>
int main(){
    int a, b, c;
    printf("Enter 3 numbers: ");
    scanf("%d,%d,%d,", &a, &b, &c);
    if (a<b && a<c){
        printf("%d", a);
        if (b<c){
            printf(" %d %d", b, c);
        }
        else if (b>c){
            printf(" %d %d", c, b);
        }
        else{
            printf(" %d %d", b, c);
        }
    }
    if (b<a && b<c){
        printf("%d", b);
        if (a<c){
            printf(" %d %d", a, c);
        }
        else if (a>c){
            printf(" %d %d", c, a);
        }
        else{
            printf(" %d %d", a, c);
        }
    }
    if (c<b && c<a){
        printf("%d", c);
        if (b<a){
            printf(" %d %d", b, a);
        }
        else if (b>a){
            printf(" %d %d", a, b);
        }
        else{
            printf(" %d %d", b, a);
        }
    }    
    return 0;

}