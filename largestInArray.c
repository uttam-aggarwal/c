#include <stdio.h>
int main(){
    int arr[10]={30,2,1,4,6,10,3,4,5,3};
    int largest=arr[0];
    for(int i=1;i<10;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    printf("%d",largest);
}