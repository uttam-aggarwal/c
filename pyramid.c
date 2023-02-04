#include <stdio.h>
// int main(){
//     for (int i=0;i<8;i++){
//         for(int j=0;j<i;j++){
//             printf("*");
//         }
//     printf("\n");
//     }
// }
int main(){
    int n=10;
    int t=1;
    for(int i=1;i<7;i++){
        for(int k=0;k<(n/2);k++){
            printf(" ");
        }
        for(int j=0;j<t;j++){
            printf("*");
        }
        for(int l=0;l<(n/2);l++){
            printf(" ");
        }
        n=n-2;
        t=t+2;
        printf("\n");
    }
}