#include <bits/stdc++.h>
using namespace std;

int main()
{

    list<int> l1 = {1, 2, 3, 4, 5};
    // list<int>::iterator itr;

    // auto itr = l1.begin();
    // cout << *itr << endl;

    for (auto itr = l1.begin(); itr != l1.end(); ++itr)
    {
        cout << *itr << " ";
    }
    cout << endl;

    for (auto itr = l1.rbegin(); itr != l1.rend(); ++itr)
    {
        cout << *itr << " ";
    }
    cout << endl;
    return 0;
}