#include <stdio.h>
int main()
{
    int n1, n2, d1, d2, flag = 0;
    scanf("%d %d", &n1, &n2);
    while (n1 != 0 || n2 != 0)
    {
        d1 = n1 % 10;
        d2 = n2 % 10;
        if (d1 + d2 > 9)
        {
            flag = 1;
            break;
        }
        n1 /= 10;
        n2 /= 10;
    }
    if (flag)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}