#include <stdio.h>
#include <ctype.h>
int main()
{
    char h;
    scanf("%c", &h);
    if (isxdigit(h))
    {
        printf("%c is a hexadecimal number.", h);
    }
    else
    {
        printf("%c is not a hexadecimal number.", h);
    }
    return 0;
}