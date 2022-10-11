#include <stdio.h>
int main()
{
    int i, n, a, b, c=0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter %d numbers: ", n);

    for(i=0; i<n; i++){
        scanf("%d", &a);
        b=a+1;
        c=b-a;
        if(b>a){
            b=a;
        }
        if (c<b && c>a){
            c=a;
        }


        
    }
    printf("\nThe largest number is %d, the second largest number is %d", b, c);
    return 0;
}