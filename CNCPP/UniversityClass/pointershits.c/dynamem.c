#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *mem, *memx;
    mem = (int *)malloc(20);
    memx = (int *)calloc(5, sizeof(int));
    if (mem == NULL || memx == NULL)
    {
        printf("Memory not allocated.\n");
    }
    else
        printf("20 bytes allocated.\n");
    realloc(memx, 40);
    // printf("%d", sizeof(memx) * 10);
    if (sizeof(memx) * 10 == 40)
    {
        printf("Reallocation succesfull.New capacity is 40.\n");
    }
    free(mem);
    printf("Memory 1 freed.");
}