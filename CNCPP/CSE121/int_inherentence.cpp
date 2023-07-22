#include <iostream>
using namespace std;
#define int long long
class Faculty
{
private:
    int id, age, number, unic;
    string name;

public:
    void prjctName(string s);
    void prjctN(int I, int A, int N, int U);
    int setUnic1();
};
class Student : public Faculty
{
private:
    int u;

public:
    void setUnic2(int n);
    void unicer();
};
void Faculty ::prjctName(string S)
{
    name = S;
    cout << S << "\t" << endl;
}
void Faculty::prjctN(int I, int A, int N, int U)
{
    cout << "ID: " << I << "\t"
         << "AGE: " << A << "\t"
         << "NUMBER: " << N << endl;
    unic = U;
}
int Faculty::setUnic1()
{
    return unic;
}
void Student::setUnic2(int n)
{
    u = n;
}
void Student::unicer()
{
    cout << "Unique Code: " << setUnic1() << "@" << u;
}
signed main()
{
    string name;
    int ID, AGE, NUMBER, UNIC1, UNIC2;
    Student s1;
    cout << "Enter Name,ID,Age,Number,U1,U2: ";
    cin >> name >> ID >> AGE >> NUMBER >> UNIC1 >> UNIC2;
    s1.prjctName(name);
    s1.prjctN(ID, AGE, NUMBER, UNIC1);
    s1.setUnic2(UNIC2);
    s1.unicer();
    return 0;
}