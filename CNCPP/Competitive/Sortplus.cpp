#include <bits/stdc++.h>
using namespace std;
#define spc " "
int main()
{
    int arr[100], N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    // sort(begin(arr), end(arr)); // for vectors only
    sort(arr, arr + N);
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << spc;
    }
}