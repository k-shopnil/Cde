#include <stdio.h>
int main()
{
    char a[25][25];
    int row, col, i, j, count = 0;
    scanf("%d %d", &row, &col);
    for (i = 0; i < row; i++)
    {
        scanf("%s", a[i]);
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (a[i][j] == '.')
            {
                if (a[i + 1][j] != '*' && a[i - 1][j] != '*' && a[i][j + 1] != '*' && a[i][j - 1] != '*')
                {
                    count++;
                }
            }
        }
    }
    printf("%d\n", count);
    return 0;
}