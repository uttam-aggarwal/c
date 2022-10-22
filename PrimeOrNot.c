//wap to check if a number is prime or not
#include <stdio.h>
int main(){
    int n,a=0;
    scanf("%d",&n);
    for(int i=2;i<n;i++){
        if(n%i==0){
            printf("%d is not a prime number",n);
            a=1;
            break;
            }}
        if(a==0){
            printf("%d is a prime number",n);
        }}