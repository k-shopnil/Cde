#include <iostream>
using namespace std;
class Parent
{
private:
    int i;

public:
    void set_i(int n);
    int get_i();
};
class Child : public Parent
{
private:
    int j;

public:
    void set_j(int m);
    int mul();
};
void Parent::set_i(int n)
{
    i = n;
}
int Parent::get_i()
{
    return i;
}
void Child::set_j(int m)
{
    j = m;
}
int Child::mul()
{
    return get_i() * j; // access Parent class's method
}
int main()
{
    int n, m;
    Child ob;
    cin >> n >> m;
    ob.set_i(n); // inherits Parent class's method
    ob.set_j(m);
    cout << n << " multipled by " << m
         << endl
         << "="
         << ob.mul();
}