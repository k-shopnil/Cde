#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n % 2 == 0 || n % 5 == 0)
    {
        if (n % 2 == 0 && n % 5 == 0)
        {
            printf("Invalid.");
        }
        else
        {
            printf("Valid.");
        }
    }
    else
    {
        printf("Invalid.");
    }
    return 0;
}