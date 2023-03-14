#include <stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("add-(%d)\nsub-(%d)\nmultiplication-(%d)\n",a+b,a-b,a*b);//
    b==0?printf("divison is not possible"):printf("division-(%d)\nmodulous-(%d)",a/b,a%b);
}