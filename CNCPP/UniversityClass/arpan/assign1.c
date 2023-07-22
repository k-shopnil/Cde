#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three sides: ");
    scanf("%d %d %d", &a, &b, &c);
    int sum = a + b;
    if (sum > c)
    {
        printf("Valid.");
    }
    else
    {
        printf("Invalid.");
    }
    return 0;
}