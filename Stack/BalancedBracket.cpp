#include <bits/stdc++.h>
using namespace std;

bool isValid(string s)
{

    stack<char> st;

    for (int i = 0; i < s.size(); i++)
    {
        char ch = s[i];

        if (ch == '[' || ch == '(' || ch == '{')
        {
            st.push(ch);
        }
        else
        {
            if (ch == ')' && !st.empty() && st.top() == '(')
            {
                st.pop();
            }
            else if (ch == ']' && !st.empty() && st.top() == '[')
            {
                st.pop();
            }
            else if (ch == '}' && !st.empty() && st.top() == '{')
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
    }
    return st.empty();
}

int main()
{

    string s;
    cout << "Enter a string of brackets: ";
    cin >> s;

    if (isValid(s))
    {
        cout << "The string is balanced." << endl;
    }
    else
    {
        cout << "The string is not balanced." << endl;
    }

    return 0;
}
