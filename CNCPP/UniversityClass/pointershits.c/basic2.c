#include <stdio.h>
int main()
{
    int p = 10;
    int *a;
    a = &p;
    printf("Memory Address of 'a': %x", a);
    printf("Memory Address of 'a': %u", a);
    printf("\nValue of 'a': %d", *a);
}