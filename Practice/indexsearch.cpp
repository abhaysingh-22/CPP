#include <bits/stdc++.h>
using namespace std;

vector<int> findIndex(vector<int> &arr, int key)
{

    int n = arr.size();
    int firstIndex = -1;
    int lastIndex = -1;


    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            if (firstIndex == -1)
            {
                firstIndex = i;
            }
            lastIndex = i;
        }
    }


    return {firstIndex, lastIndex};

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

    int key;
    cin >> key;

    vector<int> result = findIndex(arr, key);

    cout << result[0] << " " << result[1] << endl;

    return 0;
    
}
