#include <stdio.h>
#include <string.h>
typedef struct address{
    int houseno;
    int block;
    char city[100];
    char state[100];
}addr;
void printadd(struct address addr);
int main(){
    addr adds[5];
    adds[0].houseno=01;
    adds[0].block=101;
    strcpy(adds[0].city,"ROHINI");
    strcpy(adds[0].state,"DELHI");
    adds[1].houseno=02;
    adds[1].block=201;
    strcpy(adds[1].city,"ROHINI");
    strcpy(adds[1].state,"DELHI");
    adds[2].houseno=03;
    adds[2].block=301;
    strcpy(adds[2].city,"ROHINI");
    strcpy(adds[2].state,"DELHI");
    adds[3].houseno=04;
    adds[3].block=401;
    strcpy(adds[3].city,"ROHINI");
    strcpy(adds[3].state,"DELHI");
    adds[4].houseno=05;
    adds[4].block=501;
    strcpy(adds[4].city,"ROHINI");
    strcpy(adds[4].state,"DELHI");
    for(int i=0;i<5;i++){
        printadd(adds[i]);
    }

}
void printadd(struct address addr){
    printf("address is %d %d %s %s\n",addr.houseno,addr.block,addr.city,addr.state);
}
