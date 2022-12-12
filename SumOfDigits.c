#include <stdio.h>
float sod(int n);
float main()
{
    float n;
    scanf("%f", &n);
    sod(n);
    return 0;
}
float sod(int n)
{
    float m;
    float sum;
    while (n > 0)
    {
        m = n % 10;
        sum = sum + m;
        n = n / 10;
    }
    printf("%f", sum);
}