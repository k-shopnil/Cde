#include <stdio.h>
int main()
{
    char carr, strwws[100], strwws2[100];
    scanf("%c", &carr);
    scanf(" %[^\n]%*c", strwws);
    // scanf(" %[^\n]%s", strwws); || alternative method 1
    gets(strwws2); // alternative method 2
    printf("\nOutput:\n");
    printf("%c\n%s\n%s", carr, strwws, strwws2);
}