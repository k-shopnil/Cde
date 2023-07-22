#include <iostream>
using namespace std;
#define sp " "
class Person
{
private:
    int nid, age, salary;

public:
    void setNid(int n);
    void setAge(int a);
    void setSalary(int s);
    void printDetails();
};
void Person::setNid(int n)
{
    nid = n;
}
void Person::setAge(int a)
{
    age = a;
}
void Person::setSalary(int s)
{
    salary = s;
}
void Person::printDetails()
{
    cout << "Nid:" << nid << sp << "Age:" << age << sp << "Salary:" << salary;
}
int main()
{
    int n, a, s;
    cout << "Enter NID,Age and Salary in order:";
    cin >> n >> a >> s;
    Person shopnil;
    shopnil.setNid(n);
    shopnil.setAge(a);
    shopnil.setSalary(s);
    shopnil.printDetails();
}
