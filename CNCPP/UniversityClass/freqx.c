#include <stdio.h>
int main()
{
    int arr[10], n, store[10], count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        count = 1;
        if (arr[i] != -1)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                    store[j] = -1;
                }
            }
            if (store[i] != -1)
            {
                store[i] = count;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (store[i] != -1)
        {
            printf("%d occures %d times.\n", arr[i], store[i]);
        }
    }
}