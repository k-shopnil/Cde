#include <stdio.h>
int main()
{
    int i, min, max, sum = 0, r;
    printf("Enter minimum: ");
    scanf("%d", &min);
    printf("Enter maximum: ");
    scanf("%d", &max);
    printf("Enter common ratio: ");
    scanf("%d", &r);
    for (i = min; i <= max; i *= r)
    {
        sum += i;
        if (i != max)
        {
            printf("%d + ", i);
        }
        else
        {
            printf("%d ", i);
        }
    }
    printf("= %d", sum);
    return 0;
}