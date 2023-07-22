#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, res;
    scanf("%d %d", &a, &b);
    res = pow(a, 2) + 2 * a * b + pow(b, 2);
    printf("%d", res);
    return 0;
}