#include <stdio.h>
#include <math.h>
int main()
{
    float x, y, z;
    scanf("%f", &x);
    y = 3 * pow(x, 5) + 2 * x + 4;
    z = sqrt(x + 4) - sqrt(4 * x + 5);
    printf("Y: %.2f Z: %.2f", y, z);
    return 0;
}