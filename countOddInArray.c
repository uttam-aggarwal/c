#include <stdio.h>
int main(){
    int arr[]={2,4,97,77,56,96,56,88,96,56,48,7,63,36,3,6};
    int count=0;
    for(int i=0;i<16;i++){
        if(arr[i]%2 != 0){
            count++;
        }
    }
    printf("%d",count);
}