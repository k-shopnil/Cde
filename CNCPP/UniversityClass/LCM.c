#include <stdio.h>
int lcm(int a, int b)
{
    a, b;
    int max;
    max = (a > b) ? a : b;
    while (1)
    {
        if (max % a == 0 && max % b == 0)
        {
            break;
        }
        ++max;
    }
    return max;
}
int main()
{
    int LCM, n1, n2;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    LCM = lcm(n1, n2);
    printf("The least common multiple of of %d and %d is: %d", n1, n2, LCM);
    return 0;
}