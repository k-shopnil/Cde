#include <stdio.h>
#include <string.h>
int main()
{
    char S[100];
    int N, counter = 0, T, i;
    scanf("%d", &T);
    while (T > 0)
    {
        counter = 0;
        scanf("%s", S);
        for (i = 0; i < strlen(S); i++)
        {
            if (S[i] != 'W' && S[i] != 'N' && S[i] != 'D')
            {
                counter++;
            }
            else
            {
                continue;
            }
        }
        if (counter < 6 && counter > 1)
        {
            printf("%d BALLS", counter);
        }
        else if (counter == 1)
        {
            printf("%d BALL", counter);
        }
        else if (counter % 6 != 0)
        {
            if (counter / 6 >= 2)
            {
                if (counter % 6 > 1)
                {
                    printf("%d OVERS %d BALLS", counter / 6, counter % 6);
                }
                else
                {
                    printf("%d OVERS %d BALL", counter / 6, counter % 6);
                }
            }
            else
            {
                if (counter % 6 > 1)
                {
                    printf("%d OVER %d BALLS", counter / 6, counter % 6);
                }
                else
                {
                    printf("%d OVER %d BALL", counter / 6, counter % 6);
                }
            }
        }
        else if (counter % 6 == 0)
        {
            if (counter / 6 == 1)
            {
                printf("%d OVER", counter / 6);
            }
            else
            {
                printf("%d OVERS", counter / 6);
            }
        }
        T--;
    }
}