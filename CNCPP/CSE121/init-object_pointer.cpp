#include <iostream>
using namespace std;
class myclass
{
private:
    int a;

public:
    myclass(int x);
    int get();
};
myclass::myclass(int x)
{ // constructor
    a = x;
}
int myclass::get()
{
    return a;
}
int main()
{
    int g = 10;
    int *ptrg = &g; // referencing the pointer of a variable
    myclass ob(120);
    myclass *p; // declaring object pointer *p;
    p = &ob;    //
    cout << "Value  directly using object: "
         << ob.get()
         << endl;
    cout << "Value using pointer to the object: "
         << p->get() << endl; // correct way to dereference to a object pointer
    cout << "Address of the object: "
         << p << endl;
    cout << "Address where address of object is stored: "
         << &p;
    cout << endl
         << *ptrg; // dereferencing the pointer of a variable
    /*cout << "Address of the object: "
         << *p;incorrect way to dereference to a object pointer*/
}