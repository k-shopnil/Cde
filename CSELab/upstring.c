#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Enter a lowercase string: ");
    scanf("%s", str);
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 97 && str[i] <= 122) //character decays into pointers and access ascii from the mem-loc
        {
            str[i] = str[i] - 32;
        }
        else
        {
            continue;
        }
    }
    printf("%s", str);
}