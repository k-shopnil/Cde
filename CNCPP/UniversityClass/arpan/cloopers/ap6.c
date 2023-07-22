#include <stdio.h>
int main()
{
    int i, n, r, p = 1;
    scanf("%d %d", &n, &r);
    for (i = 0; i < r; i++)
    {
        p *= (n - i);
    }
    printf("%d", p);
    return 0;
}