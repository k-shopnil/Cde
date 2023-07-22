#include <stdio.h>
int main()
{
    int i, b, p;
    long long int res = 1;
    printf("Enter base: ");
    scanf("%d", &b);
    printf("Enter power: ");
    scanf("%d", &p);
    for (i = 1; i <= p; i++)
    {
        res *= b;
    }
    printf("%d to the power %d = %lld", b, p, res);
}