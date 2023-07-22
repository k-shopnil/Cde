#include <stdio.h>
int main()
{
    float a, b, c, d, e, avg;
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
    avg = (a + b + c + d + e) / 5;
    printf("Average: %f", avg);
    return 0;
}