
#include <stdio.h>
int main()
{
    int *ap;
    int a[4] = {1, 2, 3};
    ap = a + 1; //(a+1)=Memory location ; *(a+1)=value in that location || similary respectively &(a[0]) ; a[0]
    printf("%d", *ap);
    return 0;
}