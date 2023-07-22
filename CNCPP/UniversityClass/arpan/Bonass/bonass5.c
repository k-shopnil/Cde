#include <stdio.h>
#include <stdbool.h>
int main()
{
    char direction;
    int x, y, unit;
    bool crash = true;
    printf("Enter current coordinate(x and y position): ");
    scanf("%d %d", &x, &y);
    printf("Enter No. units towards direction: ");
    scanf("%d", &unit);
    printf("Enter Direction: ");
    scanf(" %c", &direction);
    switch (direction)
    {
    case 'N':
        y += unit;
        break;
    case 'S':
        y -= unit;
        break;
    case 'E':
        x += unit;
        break;
    case 'W':
        x -= unit;
        break;
    default:
        printf("Invalid direction\n");
        crash = false;
        break;
    }
    if (crash)
    {
        printf("New coordinate: (%d,%d)", x, y);
    }
    else
    {
        printf("The coordinates remains unchanged.");
    }
    return 0;
}