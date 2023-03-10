#include <stdio.h>
void pattern1();
int main(){
    pattern1();
}
void pattern1(){
    int n,a;
    scanf("%d",&n);
    for(int i=1;i<=n
    ;i++){
        a=1;
        for(int j=0;j<i;j++){
            printf("%d  ",a);
            a++;
        }
        printf("\n");
    }
}