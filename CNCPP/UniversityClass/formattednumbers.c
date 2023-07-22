#include <stdio.h>
#include <string.h>
char converter(int x);
int main()
{
    int A, r = 0, p, x, counter = 0;
    char digi[10];
    scanf("%d", &A);
    if (A == 0)
    {
        printf("%d", A);
    }
    else
    {
        while (A)
        {
            x = A % 10;
            A = A / 10;
            digi[r] = converter(x);
            r++;
            counter++;
            if (counter == 3 && A > 0)
            {
                digi[r] = ',';
                counter = 0;
                r++;
            }
        }
    }
    digi[r] = '\0';
    for (p = r - 1; p >= 0; p--)
    {
        printf("%c", digi[p]);
    }
    return 0;
}

char converter(int x)
{
    if (x == 1)
        return '1';
    else if (x == 2)
        return '2';
    else if (x == 3)
        return '3';
    else if (x == 4)
        return '4';
    else if (x == 5)
        return '5';
    else if (x == 6)
        return '6';
    else if (x == 7)
        return '7';
    else if (x == 8)
        return '8';
    else if (x == 9)
        return '9';
    else
        return '0';
}
