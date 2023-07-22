#include <stdio.h>
#include <math.h>
int main()
{
    float a;
    int b;
    scanf("%f", &a);
    float frac = a - (int)a;
    if (frac > 0)
        printf("%.1f is not an integer", a);
    else
    {
        b = (int)a;
        printf("%d is an Integer", b);
    }

    return 0;
}