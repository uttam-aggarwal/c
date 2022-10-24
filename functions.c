#include <stdio.h>
//declaration/prototype
void printhello();
void printgoodbye();
int main(){
    //calling a function
    printhello();
    printgoodbye();
}
//defining a function
void printhello(){
    printf("Hello\n");
}
void printgoodbye(){
    printf("good Bye!\n");
}
