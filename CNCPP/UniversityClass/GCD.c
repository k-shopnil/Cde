#include <stdio.h>
int gcd(int a, int b)
{
    int temp;
    if (a == 0 || b == 0)
    {
        return 0;
    }
    while (b != 0)
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}
int main()
{
    int n1, n2, GCD;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    GCD = gcd(n1, n2);
    printf("The greatest common divisor of %d and %d is: %d", n1, n2, GCD);
    return 0;
}