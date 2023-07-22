#include <stdio.h>

void tester(int *P)
{
    *P = *P + 2;
    printf("Formal Parameter: %d\n", *P);
}

int main()
{
    int A;
    printf("Enter test number: ");
    scanf("%d", &A);
    tester(&A);
    printf("Actual Parameter : %d\n", A);
    return 0;
}