#include <stdio.h>
int main()
{
    int n, vd = 2, term = 5;
    scanf("%d", &n);
    while (term <= n)
    {
        if (term == 5)
        {
            printf("%d^2", term);
        }
        else
        {
            printf("+%d^2", term);
        }
        vd += 2;
        term += vd;
    }
}