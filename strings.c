#include <stdio.h>
int main(){
    //there are two ways to initate a string
    // char name[]={'u','t','t','a','m','\0'};
    // char name1[]="uttam";
    // char name2[]={'u','t','t','a','m',' ','a','g','g','\0'};
    // char name3[]="uttam aggarwal";
    // printf(name2);
    // -----------------------------------------
    // char name[20];
    // scanf("%s",name);
    // printf(name);
    // //scanf cannot enter mutli-word string , input uttam aggarwal will give output- uttam
    // char name[20];
    // gets(name);//to take input(can take full string as input even with spaces
    // puts(name);//to give output
    // //gets is unsafe and is not useable now because it is easy to hack or something
    // //so instead we use fgets(str,n,file) here it stops when n-1 characters are inout or new line is input and... file is not explained yet but for now we aree using stdin(standard input) instead of it
    // fgets(name,20,stdin);
    // puts(name);
    // --------------------------------------
    //using char name[] doesn't let us reinitialise the string but if we do , char *name we can reinitialise the string
    // char *name="hello world";
    // puts(name);
    // name="hello";
    // puts(name);
    // //but if we do
    // char name[]="hello world";
    // puts(name);
    // //name="hello";//it will give error
    // puts(name);
    
}