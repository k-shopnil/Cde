#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *access;
    int num;
    access = fopen("C:\\Users\\Shopnil\\Cde\\gen.txt", "r");
    if (access == NULL)
    {
        printf("Error reading the file.");
        exit(1);
    }
    fscanf(access, "%d", &num);
    printf("The retrieved data : %d", num);
    fclose(access);
}