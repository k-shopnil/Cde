#include <stdio.h>
int main()
{
    char C;
    scanf("%c", &C);
    if (C >= 48 && C <= 57)
    {
        printf("%c is a number.", C);
    }
    else if (C >= 65 && C <= 90)
    {
        printf("%c is an uppercase alphabet.", C);
    }
    else if (C >= 97 && C <= 122)
    {
        printf("%c is an lowercase alphabet.", C);
    }
    else
    {
        printf("Invalid Input.");
    }
}