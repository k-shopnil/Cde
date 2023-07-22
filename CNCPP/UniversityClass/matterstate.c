#include <stdio.h>
int main()
{
    int temp;
    printf("Enter temperature: ");
    scanf("%d", &temp);
    if (temp < 0)
    {
        printf("ICE");
    }
    else if (temp > 0 && temp < 100)
    {
        printf("WATER");
    }
    else if (temp == 0 || temp == 100)
    {
        if (temp == 0)
        {
            printf("ICE or WATER");
        }
        else
        {
            printf("WATER or STEAM");
        }
    }
    else
    {
        printf("STEAM");
    }
    return 0;
}