//basic example of recursion to print hello world
#include<stdio.h>
void printHW();
int main(){
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    printHW(n);
    return 0;
}
void printHW(int a){
    if (a==0){
        return;
    }
    printf("Hello world\n");
    printHW(a-1);
}