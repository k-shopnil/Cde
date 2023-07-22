#include <stdio.h>
float convert(float days);
float convertx(float weeks);
float convertz(float day);
int main()
{
    float days;
    printf("Enter number of days: ");
    scanf("%f", &days);
    float y, w, d;
    y = convert(days);
    int y1 = (int)y;
    float frac = y - (int)y;
    w = convertx(frac);
    int w1 = (int)w;
    float frac2 = w - (int)w;
    d = convertz(frac2);
    int d1 = (int)d;
    printf("%d Years %d Weeks %d Days", y1, w1, d1);
    return 0;
}
float convert(float days)
{
    float years = days / 365;
    return years;
}
float convertx(float weeks)
{
    float weekz = weeks * 52;
    return weekz;
}
float convertz(float day)
{
    float days = day * 7;
    return days;
}