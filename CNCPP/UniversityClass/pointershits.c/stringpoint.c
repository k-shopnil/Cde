#include <stdio.h>
int main()
{
    char str[100] = "Hello";
    char *ptr = str;
    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        *ptr++;
    }
}