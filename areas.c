#include<stdio.h>
#include<math.h>
void areaofcircle(float r);
void areaofsquare(float s);
void areaofrectangle(float l,float b);
int main(){
    float r,s,l,b;
    printf("enter the radius of circle: ");
    scanf("%f",&r);
    areaofcircle(r);
    printf("enter the side of square: ");
    scanf("%f",&s);
    areaofsquare(s);
    printf("enter the length of rectangle: ");
    scanf("%f",&l);
    printf("enter the breath of rectangle: ");
    scanf("%f",&b);
    areaofrectangle(l,b);
}
void areaofcircle(float r){
    float area;
    area = 3.14*pow(r,2);
    printf("area of circle is %f\n",area);
}
void areaofsquare(float s){
    float area;
    area = pow(s,2);
    printf("area of square is %f\n",area);
}
void areaofrectangle(float l,float b){
    float area;
    area = l*b;
    printf("area of rectangle is %f\n",area);
}