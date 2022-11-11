#include <stdio.h>
int factorial(int n);
int main(){
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    printf("factorial is: %d",factorial(n));
}
int factorial(int n){
    if(n==1){
        return 1;}
    int factNm1=factorial(n-1);
    int factNm= factNm1*n;
    return factNm;
}