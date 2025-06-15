// sliding window problem 

#include <iostream>
#include <string>
using namespace std;

int maxConsecutiveOnes(string s, int k) {
    int left = 0, maxLen = 0, zeroCount = 0;

    for (int right = 0; right < s.length(); ++right) {
        if (s[right] == '0') {
            zeroCount++;
        }

        while (zeroCount > k) {
            if (s[left] == '0') {
                zeroCount--;
            }
            left++;
        }

        maxLen = max(maxLen, right - left + 1);
    }

    return maxLen;
}

int main() {
    string s = "0001101011";
    int k = 2;

    cout << maxConsecutiveOnes(s, k) << endl; // Output: 6
    return 0;
}




// brute force code 

int maxConsecutiveOnesBrute(string s, int k) {
    int n = s.length();
    int maxLen = 0;

    for (int i = 0; i < n; ++i) {
        int zeroCount = 0;
        for (int j = i; j < n; ++j) {
            if (s[j] == '0') zeroCount++;
            
            if (zeroCount > k)
                break;

            maxLen = max(maxLen, j - i + 1);
        }
    }

    return maxLen;
}
