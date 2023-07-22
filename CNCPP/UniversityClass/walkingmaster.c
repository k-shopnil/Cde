#include <stdio.h>
int main()
{
    int a, b, c, d, t, moves;
    scanf("%d", &t);
    while (t > 0)
    {
        moves = 0;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        while (b != d)
        {
            a++;
            b++;
            moves++;
        }
        if (c > a)
        {
            moves = -1;
        }
        else
        {
            while (a != c)
            {
                a--;
                moves++;
            }
        }
        t--;
        printf("%d\n", moves);
    }
}