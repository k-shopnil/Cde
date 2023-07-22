#include <stdio.h>
int main()
{
    int m, n, i;
    printf("Enter m: ");
    scanf("%d", &m);
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = n; i >= m; i--)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
        else
        {
            continue;
        }
    }

    return 0;
}