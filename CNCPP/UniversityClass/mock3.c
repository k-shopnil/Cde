#include <stdio.h>
void main()
{
    int p, a, b, c, T, N, i, flag = 0;
    scanf("%d", &T);
    while (T > 0)
    {
        flag = 0;
        scanf("%d", &N);
        for (i = 1; i <= N; i++)
        {
            scanf("%d %d %d %d", &p, &a, &b, &c);
            int total = a + b + c;
            if (total < p)
            {
                flag = 1;
            }
            else
            {
                continue;
            }
        }
        if (flag == 1)
        {
            printf("FAIL\n");
        }
        else
        {
            printf("PASS\n");
        }
        T--;
    }
}