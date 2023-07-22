#include <stdio.h>
// this code avoids negative numbers
int main()
{
    int i, sum = 0, n;
    for (i = 1; i <= 5; i++)
    {
        printf("Enter n%d: ", i);
        scanf("%d", &n);
        if (n < 0)
        {
            continue;
        }
        sum += n;
        printf("%d\n", sum);
    }
    return 0;
}