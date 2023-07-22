#include <stdio.h>
int main()
{
    int a, level, dot, prcntx;
    double prcnt;
    scanf("%lf", &prcnt);
    prcntx = (int)prcnt;
    level = prcntx / 10;
    printf("[");
    for (int i = 1; i <= level; i++)
    {
        printf("+");
    }
    dot = 10 - level;
    for (int i = 1; i <= dot; i++)
    {
        printf(".");
    }
    printf("]");
    printf(" %d%c", prcntx, 37);
}