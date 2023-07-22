#include <stdio.h>
int main()
{
    char abc;
    for (abc = 97; abc <= 122; abc++)
    {
        printf("%c ", abc);
    }
    printf("\n");
    for (abc = 65; abc <= 90; abc++)
    {
        printf("%c ", abc);
    }
    return 0;
}