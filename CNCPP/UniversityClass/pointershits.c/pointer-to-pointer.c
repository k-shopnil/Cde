#include <stdio.h>
int main()
{
    int a = 5;
    int *b;
    b = &a;
    int **p = &b;

    printf("Value of a: %d\n", *b);
    printf("Value of b / Address of a:%x\n", b);
    printf("Address of b:%x\n", &b);
    printf("Value of p:%x\n", *p);
    printf("Address of p:%x\n", p);

    return 0;
}