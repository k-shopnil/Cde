#include <stdio.h>
#include <string.h>
int main()
{
    char dir_set[100] = "NSEW";
    char direction[2];
    int x, y, unit, nx, ny;
    printf("Enter current coordinate(x and y position): ");
    scanf("%d %d", &x, &y);
    printf("Enter No. units towards direction: ");
    scanf("%d", &unit);
    printf("Enter Direction: ");
    scanf("%c", direction);
    if (strcmp(direction[0], dir_set[0]) == 0)
    {
        nx = x;
        ny = y + unit;
        printf("New coordinate: (%d, %d)", nx, ny);
    }
    else if (strcmp(direction[0], dir_set[1]) == 0)
    {
        nx = x;
        ny = y - unit;
        printf("New coordinate: (%d, %d)", nx, ny);
    }
    else if (strcmp(direction[0], dir_set[2]) == 0)
    {
        nx = x + unit;
        ny = y;
        printf("New coordinate: (%d, %d)", nx, ny);
    }
    else if (strcmp(direction[0], dir_set[3]) == 0)
    {
        nx = x - unit;
        ny = y;
        printf("New coordinate: (%d, %d)", nx, ny);
    }
    return 0;
}