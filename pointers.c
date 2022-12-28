#include <stdio.h>
//------code 1 starts------
/*int main(){
//  int a = 1.89700000;
//  printf("%d",a);
//  return 0;
int age=33;
//*ptr means the value at ptr i.e at that address , * is for value 
int *ptr=&age;//pointer=address of s variable... using int here because that is the type of variable  
int _age=*ptr; //the thing stored at that address , here 33
printf("%d\n",_age);
printf("%p\n",&age);//%p use to print address
printf("%u\n",&age);//%u use to convert that into a more readable integer
printf("%u\n",ptr);
printf("%u\n",&ptr);
printf("%u\n",&_age);
}*///-----code 1 ends-----
//----code 2 starts----
/*//code demonstrates how a function can change the original value put in it at its location
void square(int n);
void _square(int* n);//func that changes the original value permanently too
int main(){
    int number;
    printf("enter number = ");
    scanf("%d",&number);
    square(number);
    printf("number = %d\n",number);
    _square(&number);//entering address of the number where the changes gonna happen
    printf("number = %d\n",number);
    return 0;
}
void square(int n){
    n= n * n;
    printf("square = %d\n",n);
}
void _square(int* n){
    *n=(*n) * (*n);
    printf("square= %d\n",*n);
}*///----code2 ends----
//----code 3 starts----
//trying to swap the number by values and by refernce method
void swap(int a,int b);
void _swap(int* a,int* b);
int main(){
    int x =3, y= 7;
    swap(x,y);
    printf("x= %d and y= %d\n",x,y);
    _swap(&x,&y);
    printf("x= %d and y= %d\n",x,y);
    return 0;
}
//trying by value method
void swap(int a,int b){
    int t =a;
    a=b;
    b=t;
    printf("a= %d and b= %d\n",a,b);
}
//trying by reference method
void _swap(int* a,int* b){
    int t =*a;
    *a=*b;
    *b=t;
    printf("a= %d and b= %d\n",*a,*b);
}