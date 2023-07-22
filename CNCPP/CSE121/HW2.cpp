#include <iostream>
using namespace std;
#define sp " "
class Bank
{
    string name, branch;

public:
    void setDetails(string n, string b);
    void displayDetails();
};
void Bank::setDetails(string n, string b)
{
    name = n;
    branch = b;
}
void Bank::displayDetails()
{
    cout << "Name:" << name << sp << "Branch:" << branch;
}
int main()
{
    string n, b;
    Bank bangladeshi;
    cout << "Enter name and branch in the sequence below:";
    cin >> n >> b;
    bangladeshi.setDetails(n, b);
    bangladeshi.displayDetails();
}