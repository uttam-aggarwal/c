// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() {

//     // char s[100];
//     // fgets(s,100,stdin);
//     // for(int i=0;s[i]!='\0';i++){
//     //     s[i+1]==' '?printf("%c",s[i]):printf("%c",s[i]);
//     // }
//     // return 0;
//     // printf("hi");
//     // printf("\n");
//     // printf("hi");
//     int sum=2+4/2+6*2;
//     printf("%d",sum);
// }
#include <stdio.h>
void solve() 
{
    int ch = 2;
    switch(ch) 
  {
        case 1: printf("1 ");
        case 2: printf("2 ");
        case 3: printf("3 ");
        default: printf(" None");
    }
} // end of solve() function
int main() {
    solve();
	return 0;
}