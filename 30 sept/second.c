#include<stdio.h>

int main(){
    int inp,h,sh,n;
    h=0;
    sh=0;
    printf("Enter no . of inputs:");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&inp);
        if(inp>h && inp>sh){
            sh=h;
            h=inp;

        }
        if(inp<h && inp>sh){
            sh=inp;
        }
        if(inp<h && inp<sh){

        }
        

    }

    printf("The second largest number is %d",sh);
    return 0;

}