// In this question we will see how to push back elements in a vector.
// We will be given a vector and we have to push back elements in the vector.

#include <bits/stdc++.h>
using namespace std;

vector<int> findElements(vector<int> arr)
{
    // Your code goes here
    int n = arr.size();

    sort(arr.begin(), arr.end());

    vector<int> result;

    for (int i = 0; i < n - 2; i++)
    {
        result.push_back(arr[i]);
    }

    return result;
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

    vector<int> result = findElements(arr);

    for (int num : result)
    {
        cout << num << " ";
    }

    cout << endl;

    return 0;
}