#include <stdio.h>
#include <string.h>
int main()
{
    char S[] = "abcde";

    int i, len, temp;
    len = strlen(S);
    for (i = 0; i < len / 2; i++)
    {
        // printf("%s\n", S);
        temp = S[i];
        S[i] = S[len - 1 - i];
        S[len - 1 - i] = temp;
    }
    printf("%s", S);
}