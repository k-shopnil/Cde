#include <stdio.h>
int main()
{
    unsigned long long int facto = 1;
    long long i, N;
    scanf("%llu", &N);
    for (i = N; i > 0; i--)
    {
        facto *= i;
    }
    printf("%llu", facto % 10000);
}