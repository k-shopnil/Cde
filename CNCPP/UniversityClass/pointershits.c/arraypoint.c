#include <stdio.h>
int main()
{
    int *ptr;
    int arr[5] = {1, 2, 3, 4, 5};
    ptr = &arr[0];
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *ptr + i);
    }
}