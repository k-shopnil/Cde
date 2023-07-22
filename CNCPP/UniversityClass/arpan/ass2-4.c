#include <stdio.h>
int main()
{
    int len;
    printf("Enter the lenght in meters: ");
    scanf("%d", &len);
    float res = len * 39.37;
    printf("The length in inches: %.2f", res);
    return 0;
}