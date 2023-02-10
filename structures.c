#include <stdio.h>
#include <string.h>
struct student{
    int roll;
    float marks;
    char name[100];
};//don't forget this semi-colon here
int main(){
    struct student ECE[100];
    ECE[0].roll=1994;
    ECE[0].marks=98.9;
    
    strcpy(ECE[0].name,"uttam");
    printf("name is %S",ECE[0].name);
    // struct student s1={1994,100,"uttam"};
    // printf("student roll no is %d\n",s1.roll); 
    // struct student *ptr=&s1;
    // printf("student roll no is %d\n",s1.roll); 

}