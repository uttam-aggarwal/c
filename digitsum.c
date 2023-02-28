#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char n[10];
    int sum = 0;
    scanf("%s", n);
    for (int i = 0; i < 5; i++)
    {
        // const char *s = n[i];
        // int *x;
        // sscanf(s, "%d", x);
        // sum = sum + x;
        // int new;
        // sscanf(n[i],"%d",new);
        // // int new1=atoi(new);
        // sum+=new;
        // printf("%c",n[i]);
        int a=(int)(n[i]);
        sum+=a;


    }
    printf("%d", sum);
    return 0;
}