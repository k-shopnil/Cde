#include <stdio.h>
int main()
{
    int i = 1, j, scale;
    printf("Enter the scale for pyramid: ");
    scanf("%d", &scale);
    while (i <= scale)
    {
        j = 1;
        while (j <= i)
        {
            printf("* ");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}