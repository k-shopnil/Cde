#include <iostream>
using namespace std;

#define SIZE 10
class stack
{
    int n;
    char s[SIZE];

public:
    void init();
    void push(char ch);
    char pop();
};

void stack::init()
{
    n = 0;
}

void stack::push(char ch)
{
    if (n == SIZE)
    {
        cout << "Stack is full";
        return;
    }
    s[n] = ch;
    n++;
}

char stack::pop()
{
    if (n == 0)
    {
        cout << "Stack is empty";
        return 0;
    }
    n--;
    return s[n];
}

int main()
{
    stack v;
    v.init();
    v.push('s');
    v.push('t');
    v.push('u');
    v.push('v');
    v.push('w');
    v.push('x');
    for (int i = 0; i < 6; i++)
    {
        cout << v.pop() << endl;
    }
    return 0;
}