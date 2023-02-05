#include <stdio.h>
int main(){
    int arr[3][10];
    for(int i=0;i<3;i++){
        for (int j=0;j<10;j++){
            arr[i][j]=(i+2)*(j+1);
        }
    }
    for(int i=0;i<3;i++){
        for (int j=0;j<10;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}

