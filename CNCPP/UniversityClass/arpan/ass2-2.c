#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = a + b;
    int dif = a - b;
    int product = a * b;
    float quotient = a / b;
    int remainder = a % b;
    printf("Sum: %d \nDifference: %d \nProduct: %d \nQuotient: %.2f \nRemainder: %d \n", sum, dif, product, quotient, remainder);
    return 0;
}