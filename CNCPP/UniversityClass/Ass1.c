#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 25

char num[MAX_LEN];
int target;
int len;
char expr[MAX_LEN * 2];

void dfs(int cur, long long sum, long long mul, int pos)
{
    if (pos == len)
    {
        if (sum == target)
        {
            expr[cur] = '\0';
            printf("%s\n", expr);
        }
        return;
    }

    long long n = 0;
    int j = pos;
    while (j < len)
    {
        n = n * 10 + num[j] - '0';
        if (num[pos] == '0' && j > pos)
            break;

        expr[cur + j - pos] = num[j];
        dfs(cur + j - pos + 1, sum + mul * n, 1, j + 1);
        if (pos > 0)
        {
            expr[cur + j - pos + 1] = '+';
            dfs(cur + j - pos + 2, sum + mul * n, 1, j + 1);
            expr[cur + j - pos + 1] = '-';
            dfs(cur + j - pos + 2, sum - mul * n, -1, j + 1);
            expr[cur + j - pos + 1] = '*';
            dfs(cur + j - pos + 2, sum, mul * n, j + 1);
        }
        j++;
    }
}

int main()
{
    scanf("%s%d", num, &target);
    len = strlen(num);
    dfs(0, 0, 1, 0);
    return 0;
}