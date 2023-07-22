#include <stdio.h>
int minimumInteger(int N, int A[N]);
int main()
{
    int N;
    scanf("%d", &N);
    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    int mn = minimumInteger(N, A);
    printf("%d", mn);
}
int minimumInteger(int N, int A[N])
{
    int min = A[0];
    for (int i = 0; i < N; i++)
    {
        if (A[i] < min)
        {
            min = A[i];
        }
    }
    return min;
}