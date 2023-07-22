#include <stdio.h>
int main()
{
    int N, X, cnt;
    scanf("%d", &N);
    while (N > 0)
    {
        scanf("%d", &X);
        cnt = 0;
        for (int i = 1; i <= X; i++)
        {
            if (X % i == 0)
            {
                cnt++;
            }
            else
            {
                continue;
            }
        }
        if (cnt <= 2)
        {
            printf("%d eh primo\n", X);
        }
        else
            printf("%d nao eh primo\n", X);
    }
}