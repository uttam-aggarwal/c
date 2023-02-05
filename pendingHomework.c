// a. In an array of numbers, find how many times does a number 'x' occurs.

// b. Write a program to print the largest number in an array.

// c. Write a program to insert an element at the end of an array.
#include <stdio.h>
int main(){
    int arr[10]={1,2,6,3,8,9,5,8,5,4};
    int x,count;
    printf("enter x: ");
    scanf("%d\n",&x);
    for(int i=0;i<10;i++){
        if(arr[i]==x){
            count++;
        }
    }
    printf("x occurs %d time in the array",count);
}