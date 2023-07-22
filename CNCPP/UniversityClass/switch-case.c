#include <stdio.h>
#include <stdbool.h>
void main()
{
    int boolv;
    printf("Enter boolean value: ");
    scanf("%d", &boolv);
    switch (boolv)
    {
    case true:
        printf("%d represents True", boolv);
        break;
    case false:
        printf("%d represents False", boolv);
        break;
    default:
        printf("Error! Please Enter 1 or 0 only.");
    }
}