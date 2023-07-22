#include <stdio.h>
int main()
{
    int i = 0;
    do
    {
        printf("Only values above %d would be printed.\n", i);
        i--;
    } while (i > 0);
    return 0;
}