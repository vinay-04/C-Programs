#include <stdio.h>

int main(){
    int a;
    printf("Please enter maximum limit value ");
    scanf("%i", &a);
    printf("Odd numbers between 0 to %i are ", a);

    if (a%2==0){
        int i;
        while (i<a)
        {
            printf("%i ", i);
            i+=2;
        }
        
    }
    else{
        int i = 1;
        do {
            printf("%i ", i);
            i+=2;
        }
        while (i<a);
        
    }
    

    return 0;
}
