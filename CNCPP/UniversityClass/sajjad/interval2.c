#include <stdio.h>
int main()
{
    int N, i, X, in = 0, out = 0;
    scanf("%d", &N);
    while (N > 0)
    {
        scanf("%d", &X);
        if (X >= 10 && X <= 20)
        {
            in++;
        }
        else
            out++;
        N--;
    }
    printf("%d in\n", in);
    printf("%d out\n", out);
}