#include <stdio.h>
int countlength(char arr[]);
int main(){
    char name[100];
    fgets(name,100,stdin);
    printf("the length of entered string is %d",countlength(name));
}
int countlength(char arr[]){
    int count=0;
    for(int i=0;arr[i]!='\0';i++){
        count++;
    }
    return count-1;
}