#include <stdio.h>
#define MAXLOAD 100
int main()
{
    int n, i, j, count = 1;
    int arrb[MAXLOAD];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arrb[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (arrb[i] == arrb[i - 1])
        {
            count += 1;
        }
    }
    printf("%d", count);
}