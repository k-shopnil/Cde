#include <stdio.h>
int main()
{
    int A[100], n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int spoiler = 0;
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                if (A[i] == A[j])
                {
                    spoiler++;
                }
                else
                    continue;
            }
        }
        if (spoiler == 0)
        {
            printf("%d ", A[i]);
        }
        else
            continue;
    }
}