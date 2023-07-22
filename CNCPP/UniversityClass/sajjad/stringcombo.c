#include <stdio.h>
int main()
{
    int N, r;
    scanf("%d", &N);
    r = 2 * N;
    char S[100], T[100], ST[100];
    scanf("%s %s", S, T);
    for (int i = 0, j = 0; i < r; i += 2, j++)
    {
        ST[i] = S[j];
        ST[i + 1] = T[j];
    }
    ST[r] = '\0'; // terminates the string instream ;
    printf("\n%s", ST);
}