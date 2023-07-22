#include <stdio.h>
// #include <math.h>
int main()
{
    int n, term = 2;
    scanf("%d", &n);
    while (term <= n)
    {
        // p = pow(term, 3);
        if (term != n)
        {
            printf("%d^3+", term);
        }
        else
        {
            printf("%d^3", term);
        }
        term += 3;
    }
}