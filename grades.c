//wap to give grades to students
#include <stdio.h>
int main(){
    int marks;
    printf("enter marks(1-100) ");
    scanf("%d",&marks);
    if (marks>0 && marks<30){
        printf("your grade is C\n");}
        else if(marks>=30 && marks<70){
            printf("your grade is B\n");}
                else if(marks>=70 && marks<90){
                printf("your grade is A\n");}
                    else if(marks>=90 && marks<100){
                    printf("your grade is A+\n");}
                         else{
                         printf("wrong number entered");}
                         
                         
                         }
