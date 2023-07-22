#include <stdio.h>
int minimumInteger(int a, int def);
int main()
{
    int N, mn;
    scanf("%d", &N);
    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    for (int i = 0; i < N; i++)
    {
        int mn = minimumInteger(A[i], A[0]);
    }
    printf("%d", mn);
}
int minimumInteger(int a, int def)
{
    int min = def;
    if (a < min)
    {
        min = a;
    }
    return min;
}