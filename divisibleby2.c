//Q) to check whether a number is divisible by 2 or not
#include <stdio.h>
int main(){//
    int a;
    printf("enter a number to check ");
    scanf("%d",&a);
    printf("if 1 then divisible and if 0 then not divisible by 2\n");
    printf("%d",a %2 == 0);
    return 0;
}