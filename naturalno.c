//wap to check if a naumber is a natura; number or not
#include <stdio.h>
int main(){
    int a;
    printf("enter the number ");
    scanf("%d",&a);
    if(a>=1){
        printf("it's is a natural number\n");
    }else{
        printf("it's not a natural number\n");
    }
    //by ternary method
    (a>=1) ? printf("it's is a natural number\n"):printf("it's not a natural number\n");
}