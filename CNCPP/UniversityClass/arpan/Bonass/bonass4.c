#include <stdio.h>
int main()
{
    char direction;
    int x, y, unit, nx, ny;
    printf("Enter current coordinate(x and y position): ");
    scanf("%d %d", &x, &y);
    printf("Enter No. units towards direction: ");
    scanf("%d", &unit);
    printf("Enter Direction: ");
    scanf(" %c", &direction);
    if (direction == 'N')
    {
        nx = x;
        ny = y + unit;
        printf("New coordinate: (%d,%d)", nx, ny);
    }
    else if (direction == 'S')
    {
        nx = x;
        ny = y - unit;
        printf("New coordinate: (%d,%d)", nx, ny);
    }
    else if (direction == 'E')
    {
        nx = x + unit;
        ny = y;
        printf("New coordinate: (%d,%d)", nx, ny);
    }
    else if (direction == 'W')
    {
        nx = x - unit;
        ny = y;
        printf("New coordinate: (%d,%d)", nx, ny);
    }
    else
    {
        printf("Invalid direction.The coordinates remains unchanged.");
        return 1;
    }
    return 0;
}