#include <bits/stdc++.h>
using namespace std;

int main()
{

    list<int> l1 = {1, 2, 3, 4, 5};

    auto itr = l1.begin();
    advance(itr, 2); // Move iterator to the 3rd element
    auto l = l1.begin();
    auto r = l1.begin();
    advance(r, 3); // Move iterator to the 4th element

    l1.insert(itr, l, r);

    for (auto itr = l1.begin(); itr != l1.end(); ++itr)
    {
        cout << *itr << " ";
    }
    cout << endl;

    return 0;
}