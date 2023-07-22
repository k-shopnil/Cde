#include <stdio.h>
int main()
{
    int n, i, cntr = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (n == 0)
        {
            cntr = 0;
            break;
        }
        else if (n % i == 0)
        {
            cntr++;
        }
    }
    if (cntr == 0)
    {
        printf("0 is neither prime nor a composite number.");
    }
    else if (cntr <= 2)
    {
        printf("%d is a prime number.", n);
    }
    else
    {
        printf("%d is not a prime number.", n);
    }
    return 0;
}