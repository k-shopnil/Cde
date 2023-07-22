#include <stdio.h>
int min(int a, int b);
int main()
{
    int n, k, l, nl, c, d, p, np;
    scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);
    int drinks = k * l;
    drinks = drinks / nl;
    int lime = c * d;
    int salt = p / np;
    int ans = min(min(drinks, lime), salt) / n;
    printf("%d", ans);
}
int min(int a, int b)
{
    return (a > b) ? b : a;
}