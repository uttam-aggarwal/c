#include <stdio.h>
int temp(float n);
int main(){
    float n;
    printf("ENTER THE TEMP in celsius: ");
    scanf("%f",&n);
    temp(n);
    return 0;
}
int temp(float n){
    if (n>20){
        printf("it's HOT");
    }
    else if(n<12){
        printf("it's COLD");
    }
    else{
        printf("it's NORMAL");
    }
}