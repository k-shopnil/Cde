#include <stdio.h>
void main()
{
    int n, i, t, k;
    scanf("%d", &t);
    scanf("%d", &n);
    int arr[n];
    for (k = 0; k <= n - 1; k++)
    {
        scanf("%d", &arr[k]);
    }
    printf("Array: [");
    for (k = 0; k <= n - 1; k++)
    {
        printf("%d", arr[k]);
    }
    printf("]");
    printf("\n");
    printf("Default: %d\n", arr);
}