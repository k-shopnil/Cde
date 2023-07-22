#include <iostream>
using namespace std;
int Fact(int n)
{
    if (n < 1)
    {
        return 1;
    }
    else
        return n * Fact(n - 1);
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << Fact(min(a, b));
}