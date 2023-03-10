#include <stdio.h>
int main(){
    int year ,leap=0;
    scanf("%d",&year);
    if(year%4){
        leap=1;
    }
    if(year%400){
        leap=0;
    }
    if(leap==0){
        printf("%d is not a leap year",year);
    }
    else if(leap==0){
        printf("%d is not a leap year",year);
    }
}