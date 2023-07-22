#include <stdio.h>
int main()
{
    int i, j, R, C, count = 0;
    scanf("%d %d", &R, &C);
    char ch[R + 5][C + 5];
    int ar[R + 5][C + 5];
    for (i = 0; i < R; i++)
    {
        for (j = 0; j < C; j++)
        {
            scanf("%c", &ch[i][j]);
            ar[i][j] = 1;
        }
    }
    for (i = 0; i < R; i++)
    {
        for (j = 0; j < C; j++)
        {
            if (ch[i][j] == '*')
            {
                ar[i][j] = 0;
                ar[i][j + 1] = 0;
                ar[i][j - 1] = 0;
                ar[i + 1][j] = 0;
                ar[i - 1][j] = 0;
            }
        }
    }
    for (i = 0; i < R; i++)
    {
        for (j = 0; j < C; j++)
        {
            if (ar[i][j] == 1)
                count++;
            printf("%d", ar[i][j]);
        }
        printf("\n");
    }
    printf("\n%d", count);
    return 0;
}