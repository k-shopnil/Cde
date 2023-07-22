#include <stdio.h>
int main()
{
    int mx = 10000, mn = 8, i;
    for (i = mx; i >= mn; i /= 5)
    {
        printf("%d+", i);
    }
    return 0;
}