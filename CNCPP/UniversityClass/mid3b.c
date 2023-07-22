#include <stdio.h>
int main()
{
    int n, m, i;
    int lowran, sum = 0;
    scanf("%d %d", &m, &n);
    lowran = (float)n * 0.4;
    for (i = lowran; i < n; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
        else
        {
            continue;
        }
    }
    int sum1 = (int)sum;
    printf("Sum= %d", sum1);
    return 0;
}