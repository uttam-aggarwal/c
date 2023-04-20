#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void admin();
// void user();
void inserter();
void deleter();
void alterer();
void searcher();
struct properties{
    char p_address[200],p_size[20];
    float p_price;

};
int main(){
    int a,num_properties=0;
    printf("ENTER 1 to login as ADMIN and 2 for USER- ");
    scanf("%d",&a);
    if (a==1){
        admin();
    }
    else if (a==2)
    {
    //    user();
    }
    
}
void admin(){
    char a_id[100],pass[100];
    printf("\nEnter admin id- ");
    scanf("%s",&a_id);
    printf("\nEnter password- ");
    scanf("%s",&pass);
    if(strcmp(a_id,"uttam123")!=0 || strcmp(pass,"uttam123")!=0){
        printf("----------------WRONG INPUT------------\n------Exiting the programme-------");
        exit(0);
    }
    else if(strcmp(a_id,"uttam123")==0 && strcmp(pass,"uttam123")==0){
        printf("---------------WELCOME----------------");
    }
    int select;
    printf("\nENTER 1 for insertion of new property data\n 2 for deletion of existing data \n 3 to alter data \n 4 to search through existing directory ");
    scanf("%d",&select);
    // switch(select){
    //     case 1: inserter();
    // }

}
void inserter(struct properties *properties, int *num_properties) {
    printf("\nEnter property address: ");
    scanf("%s", properties[*num_properties].p_address);
    printf("Enter property price: ");
    scanf("%f", &properties[*num_properties].p_price);
    printf("Enter number of bedrooms: ");
    scanf("%s", &properties[*num_properties].p_size);
    (*num_properties)++;
}