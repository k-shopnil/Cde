#include <bits/stdc++.h>
#include <vector>
#include <iterator>
using namespace std;
int main()
{
    vector<int> v{4, 2, 7, 8, 8, 3, 0};
    vector<int>::iterator it;
    v.push_back(9);           // push in a passed value at the last element in the vector
    v.pop_back();             // pops out the last element/value
    sort(v.begin(), v.end()); // sorting in ascending ord
    cout << "The elements in the ascending order: ";
    for (it = v.begin(); it < v.end(); it++) //
    {
        cout
            << *it << " ";
    }
    advance(it, -3); // using advance() func. to iterate
    cout << endl
         << "Advancing backwards by 3: " << *it;
}