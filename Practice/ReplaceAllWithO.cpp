// Source: GeeksforGeeks
#include <bits/stdc++.h>
using namespace std;

// // Method 1
// int convertFive(int n)
// {
//     // Your code here
//     int place = 1;
//     int result = 0;

//     while (n > 0)
//     {
//         int digit = n % 10;

//         if (digit == 0)
//         {
//             digit = 5;
//         }

//         result += digit * place;
//         place *= 10;
//         n /= 10;
//     }

//     return result;
// }

// int main()
// {

//     int n;
//     cin >> n;

//     cout << convertFive(n) << endl;

//     return 0;
// }

// // Method 2

// int convertFive(int n)
// {
//     // Your code here
//     string s = to_string(n);

//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s[i] == '0')
//         {
//             s[i] = '5';
//         }
//     }

//     return stoi(s);
// }

// int main()
// {

//     int n;
//     cin >> n;

//     cout << convertFive(n) << endl;

//     return 0;
// }



// Method 3

// int convertFive(int n)
// {
//     // Your code here
//     string s = to_string(n);         // to_string() function is used to convert a integer into a string.

//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s[i] == '0')
//         {
//             s[i] = '5';
//         }
//     }

//     return stoi(s);      // stoi() function is used to convert a string into a integer.
// }

// int main()
// {

//     int n;
//     cin >> n;

//     cout << convertFive(n) << endl;

//     return 0;
// }


