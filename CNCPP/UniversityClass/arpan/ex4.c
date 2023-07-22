#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n % 5 == 0 && n % 11 == 0)
    {
        printf("Multiple of both 5 & 11.");
    }
    else if (n % 5 == 0)
    {
        printf("Multiple of 5.");
    }
    else if (n % 11 == 0)
    {
        printf("Multiple of 11.");
    }
    else
    {
        printf("Neither of them.");
    }
    return 0;
}