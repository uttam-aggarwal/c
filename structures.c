#include <stdio.h>
#include <string.h>
struct student{
    int roll;
    float marks,none;
    char name[100];//
};//don't forget this semi-colon here
// -----------------------------------------
//you can create alias of a struct name (short form for it like the following code)
// typedef struct collegeEnginneringStudent{
//     int roll;
//     float marks;
//     char name[100];
// }COE;//
int main(){
    // struct student ECE[100];
    // ECE[0].roll=1994;
    // ECE[0].marks=98.9;

    // strcpy(ECE[0].name,"uttam");
    // printf("name is %s",ECE[0].name);
    // -------------------------------------
    // struct student s1={1994,100,"uttam"};
    // printf("student roll no is %d\n",s1.roll); 
    // struct student *ptr=&s1;
    // printf("student roll no is %d\n",(*ptr).roll); 
    // printf("student roll no is %d\n",ptr->roll);//another way to print using arrow key
    // ----------------------------------------------
    // COE s1;
    // s1.roll=199;
    // s1.marks=9.8;


}