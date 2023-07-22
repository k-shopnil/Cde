#include <iostream>
using namespace std;
int Min(int a, int b)
{
    return a < b ? a : b;
}
int main()
{
    int a, b;
    cout << "Enter two values: " << endl;
    cin >> a >> b;
    cout << "The miniumum value: " << Min(a, b);
    // Min(a, b);
}