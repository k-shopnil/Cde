#include <stdio.h>
int main()
{
    int n, a = 0, b = 0, c = 0, ax = 0, bx = 0, cx = 0;
    int arr[100];
    int x[100], y[100], z[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            x[a] = arr[i];
            a++;
            ax++;
        }
        else if (arr[i] > 0)
        {
            y[b] = arr[i];
            b++;
            bx++;
        }
        else
        {
            z[c] = arr[i];
            c++;
            cx++;
        }
    }
    for (int i = 0; i < ax; i++)
    {
        printf("%d ", x[i]);
    }
    printf("\n");
    for (int i = 0; i < bx; i++)
    {
        printf("%d ", y[i]);
    }
    printf("\n");
    for (int i = 0; i < cx; i++)
    {
        printf("%d ", z[i]);
    }
}