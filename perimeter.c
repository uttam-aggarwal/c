#include <stdio.h>
//to clculate the area of perimeter
int main(){
    int a,b;
    printf("enter the length ");
    //to take the value of length from user
    scanf("%d",&a);
    printf("enter the breath ");
    //to take the value of breath from user
    scanf("%d",&b);
    //perimeter store value of perimeter
    int perimeter= 2*(a+b);
    printf("the perimeter pf rectangle is %d",perimeter);
    return 0 ;

}
