#include <stdio.h>
float day(int sec, float *dx, int *dy)
{
    float d = sec / (86400);
    float dx = d - (int)d;
    float *dx = (float *)dx;
    *dy = (int)d;
}

float hour(int sec, float *hx, int *hy)
{
    float dx;
    int dy;
    day(sec, &dx, &dy);
    float hx = dx * 24;
    float *hx = (float *)hx;
    *hy = (int)hx;
}
int min(int sec)
{
    float hx;
    int hy;
    hour(sec, &hx, &hy);
    int m = hy * 60;
    return m;
}
int main()
{
    int s, dx, dy, hx, hy;
    day(s, &dx, &dy);
    hour(s, &hx, &hy);
    scanf("%d", &s);
    int days = dy;
    int hours = hy;
    int minutes = min(s);
    printf("D: %d H: %d M: %d", days, hours, minutes);
    return 0;
}