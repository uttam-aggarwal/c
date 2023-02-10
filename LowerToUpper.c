#include <stdio.h>
int main(){
    char str[]="hello world";
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='a'&& str[i]<='z'){//checking where it lies
            str[i]=str[i]-32;//aiscc difference
        }
    }

    printf("%s",str);

}