#include <stdio.h>
#define MAXSEM 1000
int main()
{
    int sem;
    printf("Enter semester No. : ");
    scanf("%d", &sem);
    switch (sem)
    {
    case 1 ... 3:
        printf("Freshman");
        break;
    case 4 ... 6:
        printf("Sophomore");
        break;
    case 7 ... 9:
        printf("Junior");
        break;
    case 10 ... 12:
        printf("Senior");
        break;
    case 13 ... MAXSEM:
        printf("You must graduate soon");
        break;

    default:
        printf("Invalid Semester");
        break;
    }
}