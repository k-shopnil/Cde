#include <stdio.h>
#include <string.h>
int main()
{
    char A[100];
    scanf("%s", A);
    for (int i = 0; A[i] != '\0'; i++)
    {
        if (i == 0)
        {
            printf("%c", A[i] - 32);
        }
        else if (A[i] == 's')
        {
            printf("$");
        }
        else if (A[i] == 'i')
        {
            printf("!");
        }
        else if (A[i] == 'o')
        {
            printf("()");
        }
        else
        {
            printf("%c", A[i]);
        }
    }
    printf(".");
}