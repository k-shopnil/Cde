#include <stdio.h>
int main()
{
    int n, term = 5, r = 4, count = 0;
    scanf("%d", &n);
    while (term <= n)
    {
        if (count > 0)
        {
            r += 2;
        }
        if (term != n)
        {
            printf("%d^2+", term);
        }
        else
        {
            printf("%d^2", term);
        }
        term += r;
        count++;
    }
    return 0;
}