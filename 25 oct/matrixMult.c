#include <stdio.h>
int main(){
    int ra, rb, ca, cb, e;
    printf("Enter the rows and columns for a&b: ");
    scanf("%d,%d,%d,%d", &ra, &rb, &ca, &cb);
    if(rb!=ca){
        printf("\nThe matrix cannot be multiplied.");
    }
    else{
    int a[ra][ca], b[rb][cb];
    printf("Enter the row for a:");
    for(int i=0; i<ra; i++){
        for(int j=0; j<ca; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the row for b:");
    for(int i=0; i<rb; i++){
        for(int j=0; j<cb; j++){
            scanf("%d", &b[i][j]);
        }
    }
    int c[ra][cb];
    for (int i = 0; i < ra; i++) {
        for (int j = 0; j < cb; j++) {
            c[i][j] = 0;
 
            for (int k = 0; k < rb; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
 
            printf("%d\t", c[i][j]);
        }
    }
    }



    return 0;

}