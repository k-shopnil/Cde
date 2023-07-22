#include <stdio.h>
int main()
{
    int X, Y;
    scanf("%d\n%d", &X, &Y);
    int min = (X > Y) ? Y : X;
    int max = (X > Y) ? X : Y;
    for (int i = min + 1; i < max; i++)
    {
        if (i % 5 == 3 || i % 5 == 2)
        {
            printf("%d\n", i);
        }
        else
            continue;
    }
}