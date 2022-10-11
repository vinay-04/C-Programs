#include <stdio.h>
int main() 
{
    float a,b,c;
    int o;
    printf("Enter numbers: ");
    scanf("%f%f", &a, &b);
    do{
        printf("Enter choice: \n1.Read Numbers\n2.Addition\n3.Subtraction\n4.Multiplication\n5.Division\n6.Exit");
        scanf("%d", &o);
        if(o==1){
            printf("The numbers are %.2f, %.2f\n", a, b);
            continue;
        }
        else if(o==2){
            c=a+b;
            printf("Sum is %.2f\n", c);
            continue;
        }
        else if(o==3){
            c=a-b;
            printf("Difference is %.2f\n", c);
            continue;
        }
        else if(o==4){
            c=a*b;
            printf("Product is %.2f\n", c);
            continue;
        }
        else if(o==5){
            c=a/b;
            printf("Quotient is %.2f\n", c);
            continue;
        }
        else if(o==6){
            break;
        }
        else{
            printf("Choice not in options\n");
            continue;
        }
        
    }while(o!=6);
    return 0;
    
}