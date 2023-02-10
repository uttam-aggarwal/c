#include <stdio.h>
#include <string.h>
int main(){
    char str[]="hEllo woRlD";
    char newstr[200]="";
    int i=0;
    for(i;str[i]!='\0';i++){
        if(str[i]!=' '){
            newstr[strlen(newstr)]=str[i];
        }}

    printf("%s",newstr);

}