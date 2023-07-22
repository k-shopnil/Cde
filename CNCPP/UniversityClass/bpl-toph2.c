#include <stdio.h>
int main()
{
    int i, T;
    char S[105];
    scanf("%d", &T);
    for (i = 1; i <= T;)
    {
        scanf("%s", S);
        int j, ball, over, count = 0;
        for (j = 0; S[j] != '\0'; j++)
        {
            if (S[j] != 'W' && S[j] != 'N' && S[j] != 'D')
            {
                count++;
            }
            continue;
        }
        over = count / 6;
        ball = count % 6;
        if (ball != 0 && over == 0)
        {
            printf("%d %s\n", ball, (ball > 1) ? "BALLS" : "BALL");
        }
        else if (ball == 0 && over != 0)
        {
            printf("%d %s\n", over, (over > 1) ? "OVERS" : "OVER");
        }
        else
        {
            printf("%d %s %d %s\n", over, (over > 1) ? "OVERS" : "OVER", ball, (ball > 1) ? "BALLS" : "BALL");
        }
    }
    return 0;
}