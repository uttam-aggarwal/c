#include <stdio.h>
int main(){
    char chr;
    scanf("%c",&chr);
    if('a'<=chr && chr<='z'){
        printf("Lowercase");
    }
    else if('A'<=chr && chr<='Z'){
        printf("Uppercase");
    }
    else if('0'<=chr && chr<='9'){
        printf("NUMBER");

    }
}