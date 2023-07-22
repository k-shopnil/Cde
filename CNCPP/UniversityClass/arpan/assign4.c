#include <stdio.h>
int main()
{
    float n, frac;
    printf("Enter the number: ");
    scanf("%f", &n);
    frac = n - (int)n;
    if (frac > 0)
    {
        printf("%.1f is not an integer.", n);
    }
    else
    {
        int b = (int)n;
        printf("%d is an integer.", b);
    }
    return 0;
}