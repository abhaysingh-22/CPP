// gfg question amazon and google;

#include <bits/stdc++.h>
using namespace std;

string stringFilter(string str)
{
    // code here.
    string result = "";
    for (int i = 0; i < str.length(); i++)
    {

        if (str[i] == 'b')
        {
            continue;
        }

        if (i < str.length() - 1 && str[i] == 'a' && str[i + 1] == 'c')
        {
            i++;
            continue;
        }

        result += str[i];
    }

    return result;
}

int main()
{

    string str;

    getline(cin, str);

    cout << stringFilter(str) << endl;

    return 0;
}
