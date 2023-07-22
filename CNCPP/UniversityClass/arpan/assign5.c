#include <stdio.h>
#include <math.h>
int main()
{
    int a, r;
    printf("Enter the radius: \n");
    scanf("%d", &r);
    printf("Enter the side: \n");
    scanf("%d", &a);
    float hypo = a * sqrt(2);
    if (hypo <= 2 * r)
    {
        printf("It would fit.");
    }
    else
    {
        printf("It would not fit.");
    }
    return 0;
}