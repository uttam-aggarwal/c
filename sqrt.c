#include <stdio.h>
#include <math.h>
void sqrt1(float n);
int main(){
    float n;
    scanf("%f",&n);
    sqrt1(n);
    return 0;
}
void sqrt1(float n){
    float number;
    number=pow(n,0.5);
    printf("sqrt of number is %f",number);
}