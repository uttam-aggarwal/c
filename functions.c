#include <stdio.h>
//declaration/prototype
void printhello();
void printgoodbye();
int sum(int a,int b);
int main(){
    //calling a function
    printhello();/
    printgoodbye();
    printf("%d",sum(8,9));
    return 0;
}
//defining a function
void printhello(){
    printf("Hello\n");
}
void printgoodbye(){
    printf("good Bye!\n");
}
int sum(int a,int b){
    return (a+b);
}
