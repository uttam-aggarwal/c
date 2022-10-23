//wap to print prime numbers in a range
#include <stdio.h>
int main(){
    int n,a=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=2;j<i;j++){
            if(i%j==0){
                a=1;}}
        if(a==0){
            printf("%d\n",i);
        }
        a=0;
        

    }        
}