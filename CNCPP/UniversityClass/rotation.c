#include <stdio.h>
void Rotation(int arr[], int n, int d)
{
    int i, k = 0;
    int temp[n];
    for (int i = d; i < n; i++)
    {
        temp[k] = arr[i];
        k++;
    }
    for (int i = 0; i < d; i++)
    {
        temp[k] = arr[i];
        k++;
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
}

void Printer(int arr[], int n)
{
    printf("Rotated array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int N = sizeof(arr) / sizeof(arr[0]), d;
    printf("Enter rotation move count: ");
    scanf("%d", &d);
    Rotation(arr, N, d);
    Printer(arr, N);
}