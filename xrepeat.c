#include <stdio.h>
int main()
{
    int arr[4] = {1, 2, 6, 1};
    int x, count=0;
    printf("enter x: ");
    scanf("%d", &x);
    for (int i = 0; i < 4; i++)
    {
        if (arr[i] == x)
        {
            count++;
        }
    }
    printf("x occurs %d time in the array", count);
    return 0;
}