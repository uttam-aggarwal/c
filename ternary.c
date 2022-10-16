/*ternary
syntax-
(condition) ? statement if true:statement if false;*/
# include <stdio.h>
int main()
{
    int age;
   printf("enter the age ");
     scanf("%d",&age);
     age>18 ? printf("adult"):printf("child");
    return 0;
}