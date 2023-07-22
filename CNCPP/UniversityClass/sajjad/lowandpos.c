#include <stdio.h>
int main()
{
    int i, N, low, p;
    scanf("%d", &N);
    int X[N];
    for (i = 0; i < N; i++)
    {
        scanf("%d", &X[i]);
    }
    low = X[0];
    p = 0;
    for (i = 0; i < N; i++)
    {
        if (X[i] < low)
        {
            low = X[i];
            p = i;
        }
    }
    printf("Menor valor: %d\n", low);
    printf("Posicao: %d\n", p);
}