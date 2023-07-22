#include <stdio.h>
int main()
{
    int x, y, z, pay, T;
    scanf("%d", &T);
    while (T > 0)
    {
        scanf("%d %d %d", &x, &y, &z);
        T--;
    }
    pay = z * (2 * x - y) / (x + y);
    printf("%d", pay);
}