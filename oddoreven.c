//Q) to check whether a number is odd or even
#include <stdio.h>
int main(){
    int a;
    printf("enter a number to check ");
    scanf("%d",&a);
    printf("if 1 then even and if 0 then odd by 2\n");
    printf("%d",a %2 == 0);
    return 0;
}