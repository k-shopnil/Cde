#include <stdio.h>
#include <string.h>
void sortingAlgo(char X[100], char Y[100], int len1, int len2);
char output(char A[100], char B[100]);
int main()
{
    char A[100], B[100];
    scanf("%s", A);
    scanf("%s", B);
    int len1 = strlen(A);
    int len2 = strlen(B);
    sortingAlgo(A, B, len1, len2);
    return 0;
}
void sortingAlgo(char X[100], char Y[100], int len1, int len2)
{
    char temp;
    int i, j;
    for (i = 0; i < len2 - 1; i++)
    {
        for (j = i + 1; j < len2; j++)
        {
            if (Y[i] > Y[j])
            {
                temp = Y[i];
                Y[i] = Y[j];
                Y[j] = temp;
            }
        }
    }
    for (i = 0; i < len1 - 1; i++)
    {
        for (j = i + 1; j < len1; j++)
        {
            if (X[i] > X[j])
            {
                temp = X[i];
                X[i] = X[j];
                X[j] = temp;
            }
        }
    }
    output(X, Y);
}
char output(char A[100], char B[100])
{
    if (strcmp(A, B) == 0)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
}