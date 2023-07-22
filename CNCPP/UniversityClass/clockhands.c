#include <stdio.h>

int main()
{
    int H, M;
    double angle;
    scanf("%d %d", &H, &M);
    angle = (double)((60 * H) - (11 * M)) / 2;
    if (angle > 180 && angle <= 360)
    {
        printf("%lf", 360 - angle);
    }
    else
    {
        printf("%lf", angle);
    }
    return 0;
}