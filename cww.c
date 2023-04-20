#include<stdio.h>
#include<stdlib.h>
struct date{
    int day,month,year;
};
void main(){
    int n;
    struct date temp;
    FILE* fptr;
    if((fptr=fopen("welcome.txt","w"))==NULL){
        printf("\n File is not created");
        exit(1);
    }
}