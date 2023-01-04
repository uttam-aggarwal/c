#include <stdio.h>
void namaste();
void bonjour();
void main(){
    printf("I for indian and F for french: ");
    char ch;
    scanf("%c", &ch);
    if(ch == "I"){
        namaste();
    }else{
        bonjour();
    }
    // return 0;
}
void namaste(){
    printf("namaste\n");
}
void bonjour(){
    printf("bonjour\n");
}