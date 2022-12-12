#include <stdio.h>
void power(float n,float p);
int main(){
    float n;
    float p;
    printf("ENTER THE NUMBER: ");
    scanf("%f",&n);
    printf("ENTER THE POWER: ");
    scanf("%f",&p);
    power(n,p);
    return 0;
}
void power(float n,float p){
    float number;
    number=1;
    for(int i=1;i<=p;i++){
        number=number*n;
    }
    printf("the number is %f",number);
}