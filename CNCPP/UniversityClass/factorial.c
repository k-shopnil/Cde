#include <stdio.h>
int main()
{
    int n, i, res = 1;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (i = n; i > 1; i--)
    {
        res *= i;
    }
    printf("%d! factorial equals to %d", n, res);
    return 0;
}