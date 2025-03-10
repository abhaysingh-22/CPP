#include <bits/stdc++.h>
using namespace std;

int leftElement(vector<int> &arr)
{
    // Your code goes here
    int n = arr.size();

    sort(arr.begin(), arr.end());

    return arr[(n - 1) / 2];
}

int main()
{

    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << leftElement(arr) << endl;

    return 0;
}
