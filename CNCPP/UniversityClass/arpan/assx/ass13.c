#include <stdio.h>
int main()
{
    int n, i;
    float sum = 0, term;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        term = (float)i / (float)(i + 1);
        if (i % 2 == 0) // i&1--using bitwise operator
        {
            sum -= term;
        }
        else
        {
            sum += term;
        }
    }
    printf("%f", sum);
}