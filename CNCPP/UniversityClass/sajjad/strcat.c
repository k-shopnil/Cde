#include <stdio.h>
#include <string.h>
int main()
{
    char S[100], T[100], C[200];
    scanf("%s %s", S, T);
    strcat(T, S);
    printf("%s", T);
}