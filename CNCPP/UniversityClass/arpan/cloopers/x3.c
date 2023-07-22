#include <stdio.h>
int main()
{
    int n, term = 4, sum = 0;
    scanf("%d", &n);
    while (term <= n)
    {
        sum += term;
        if (term != n)
        {
            printf("%d+", term);
        }
        else
        {
            printf("%d", term);
        }
        term += 7;
    }
    // printf("=%d", sum);
    return 0;
}