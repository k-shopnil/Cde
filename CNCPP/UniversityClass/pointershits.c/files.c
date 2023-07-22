#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fxplore;
    fxplore = fopen("C:\\Users\\Shopnil\\Cde\\gen.txt", "w");
    int num = 5;
    fprintf(fxplore, "%d", num);
    fclose(fxplore);
    return 0;
}