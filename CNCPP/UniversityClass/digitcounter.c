#include <stdio.h>
#include <string.h>
int main()
{
    char number[100];
    scanf("%s", number);
    int count = strlen(number);
    printf("%d", count);
    return 0;
}