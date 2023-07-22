#include <stdio.h>
#include <string.h>
int main()
{
    char S[100], Si[100];
    scanf("%s", S);
    int i, j, len = strlen(S);
    for (i = len - 1, j = 0; i >= 0; i--, j++)
    {
        Si[j] = S[i];
    }
    Si[j] = '\0';
    if (strcmp(S, Si) == 0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}