#include <stdio.h>
int main()
{
    int i, min, max, sum = 0;
    printf("Enter minimum: ");
    scanf("%d", &min);
    printf("Enter maximum: ");
    scanf("%d", &max);
    for (i = min; i <= max; i += 2)
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
    printf("=%d", sum);
    return 0;
}