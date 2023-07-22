// Online C compiler to run C program online
#include <stdio.h>
int value();

int main()
{
    int a;
    printf("Enter your number: ");
    scanf("%d", &a);
    if (value(a))
        printf("%d is an odd number", a);
    else
        printf("%d is an even number", a);

    return 0;
}

int value(int a)
{
    printf("%d\n", a & 1);
    return (a & 1);
}
