#include <stdio.h>
void printarr(int arr[],int n);
void reversearr(int arr[],int n);
int main(){
    int arr1[]={1,2,3,4};
    reversearr(arr1,4);
    printarr(arr1,4);
}
void printarr(int arr[],int n){
    for (int i = 0; i < n; i++){
        printf("%d \t",arr[i]);
    }
    printf("\n");
}
void reversearr(int arr[],int n){
    for (int i=0;i<n/2;i++){
        int firstval=arr[i];
        int secondval=arr[n-i-1];
        arr[i]=secondval;
        arr[n-i-1]=firstval;//
}}