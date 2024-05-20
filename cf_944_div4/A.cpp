#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; // number of testcases
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int a; // input 1
        int b; // input 2

        cin >> a >> b;

        if (a > b)
        { // 1st comparison, if true "a" is max
            cout << b << " " << a << endl;
        }

        else
        { // if true "b" is max
            cout << a << " " << b << endl;
        }
    }
}