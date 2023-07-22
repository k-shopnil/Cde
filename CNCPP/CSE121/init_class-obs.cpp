#include <iostream>
using namespace std;
#define nl "\n"
class myclass
{
private:
    int a;

public:
    myclass(int x);
    ~myclass();
    void display();
};
myclass::myclass(int x)
{
    cout << "Constructing" << nl;
    a = x;
}
myclass::~myclass()
{
    cout << "Destructing" << nl;
}
void myclass::display()
{
    cout << a << nl;
}
int main()
{
    int x;
    cout << "Enter the number:";
    cin >> x;
    myclass ob(x);
    ob.display();
}