#include <stdio.h>
#include <ctype.h>

int main(){
    char a, res;
    printf("Enter Upper case Letter: ");
    scanf("%c", &a);
    res = tolower(a);
    printf("The lower case is: %c", res);
    return 0;
}