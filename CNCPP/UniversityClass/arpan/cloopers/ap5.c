#include <stdio.h>
int main()
{
    int n, i, m;
    printf("Enter number to print the multiplication table of: ");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++)
    {
        m = n * i;
        printf("%d * %d = %d", n, i, m);
        printf("\n");
    }
    return 0;
}