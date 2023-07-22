#include <stdio.h>
int main()
{

    char name[20][20];
    int roll[20];
    float mark[20];
    int position[100];
    int n, i, j;
    printf("Enter total student\n ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {

        printf("Name: ");
        scanf("%s", &name[i]);
        printf("Roll :");
        scanf("%d", &roll[i]);
        printf("Enter mark:");
        scanf("%f", &mark[i]);
        printf("Enter Student Position ");
        scanf("%d", &position[i]);
    }
    for (i = 1; i <= n; i++)
    {
        printf("Name: ");
        printf("%s", name[i]);
        printf("\n Roll : %d\n", roll[i]);
        printf("Enter mark : %f\n", mark[i]);
        printf("Enter Student Position : %d\n", position[i]);
    }

    return 0;
}