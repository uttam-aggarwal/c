#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int prime=0,n,flag=1,sum=0;
    scanf("%d",&n);
    int temp=n;
    for(int i=2;i<n;i++){
        if (n%i==0){
            flag=0;
            break;
        }
    }
    
    while(n>0){
        int lastnum=n%10;
        sum=(sum*10)+lastnum;
        n=n/10;
        
    }
    (flag==1 && temp==sum)?printf("YES"):printf("NO");
    
    return 0;
}