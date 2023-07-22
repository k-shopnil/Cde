#include <iostream>
using namespace std;
#define CAPACITY 5
#define msg1 "Clearing from Stack 1:"
#define msg2 "Clearing from Stack 2:"
class stack
{
private:
    char stck[CAPACITY];
    int tos;

public:
    void init();
    void push(char ch);
    char pop();
};
void stack::init()
{
    tos = 0;
}
void stack::push(char ch)
{
    if (tos == CAPACITY) //?
    {
        cout << "The stack is full";
        return;
    }
    stck[tos] = ch;
    tos++;
}
char stack::pop()
{
    if (tos == 0)
    {
        cout << "The stack is empty";
        return 0; //?
    }
    tos--;
    return stck[tos];
}
int main()
{
    stack s1, s2;
    char cx, cy;
    s1.init();
    s2.init();
    for (int i = 0; i < CAPACITY; i++)
    {
        cin >> cx >> cy;
        s1.push(cx);
        s2.push(cy);
    }
    for (int i = 0; i <= CAPACITY; i++)
    {
        cout << msg1 << s1.pop() << endl;
        cout << msg2 << s2.pop() << endl;
    }
    return 0;
}