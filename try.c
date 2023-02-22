#include <stdio.h>
int main()
{
    /*
    5 5 5 5 5 5 5 5 5
    5 4 4 4 4 4 4 4 5
    5 4 3 3 3 3 3 4 5
    5 4 3 2 2 2 3 4 5
    5 4 3 2 1 2 3 4 5
    5 4 3 2 2 2 3 4 5
    5 4 3 3 3 3 3 4 5
    5 4 4 4 4 4 4 4 5
    5 5 5 5 5 5 5 5 5
    */
   int n,a=-1;
   scanf("%d",&n);
   for(int i =0;i<n;i++){
    a=a+2;
   }
   printf("%d\n",a);
   
   for(int i=1;i<=a;i++){
    for(int j=1;j<=a;j++){
        for(int k=0;k<n;k++){
            if(i==n-k||i==n+k){
                printf("%d ",n+k-1);
                break;
            }
            else if(j==n-k||j==n+k){
                printf("%d ",n+k-1);
                break;
            }}
        }
    }
    printf("\n");//
   }
}
