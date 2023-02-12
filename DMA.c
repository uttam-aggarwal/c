// dynamic memory allocation
// types- malloc(),calloc(),realloc(),free()

#include <stdio.h>
#include <stdlib.h>
int main(){
    // // malloc()-memory allocation,allocates memory at runtime.
    // int *ptr;
    // ptr=(int*)malloc(5*sizeof(int));//size of return the size of datatype inside the parenthesis.. here 4 bytes then malloc allocates that size to the variable but is of te type void so we write (int*) to convert its datatype.
    // ptr[0]=11;
    // ptr[1]=12;
    // ptr[2]=32;
    // ptr[3]=10;
    // ptr[4]=133;
    // for(int i=0;i<5;i++){
    //     printf("%d\n",ptr[i]);
    // }
    // -------------------------------------------------------------------------
    // calloc()-continous allocation ,initialise with 0, if left none then default 0 wil be printed
    // int *ptr;
    // ptr=(int*)calloc(5,sizeof(int));//here we use , not * as these are two differnt parameters for calloc
    // for(int i=0;i<5;i++){
    //     printf("%d\n",ptr[i]);}
    //     ptr[0]=11;
    // ptr[1]=12;
    // ptr[2]=32;
    // ptr[3]=10;
    // ptr[4]=133;
    // for(int i=0;i<5;i++){
    //     printf("%d\n",ptr[i]);}
    // ----------------------------------------------------------------------------
    // free()-it is used to free memory allocated by malloc and calloc
    // int *ptr;
    // ptr=(int*)calloc(5,sizeof(int));
    // for(int i=0;i<5;i++){
    //     printf("%d\n",ptr[i]);}
    // free(ptr);
    // for(int i=0;i<5;i++){
    //     printf("%d\n",ptr[i]);}
    // ------------------------------------------------------------------------------
    // realloc()- reallocates(increase or decrease) memory using the same pointer and size
    int *ptr;
    ptr=(int*)calloc(5,sizeof(int));
    printf("enter the numbers(5)- ");
    for(int i=0;i<5;i++){
        scanf("%d",&ptr[i]);
    } 
    for(int i=0;i<5;i++){
        printf("%d\n",ptr[i]);
    }
    ptr=realloc(ptr,8);
    printf("enter the numbers(8)- ");
    for(int i=0;i<8;i++){
        scanf("%d",&ptr[i]);
    } 
    for(int i=0;i<8;i++){
        printf("%d\n",ptr[i]);
    }





}