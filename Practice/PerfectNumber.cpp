#include <iostream>
#include <cmath>
using namespace std;

bool isPerfectNumber(int n)
{

    if (n <= 1)
    {
        return false;
    }

    int sum = 1;
    int sqrtN = static_cast<int>(sqrt(n));

    for (int i = 2; i <= sqrtN; i++)
    {
        if (n % i == 0)
        {
            sum += i;
            if (i != n / i)
            {
                sum += n / i;
            }
        }
    }

    return sum == n;
}

int main()
{
    int n;
    cin >> n;

    cout << isPerfectNumber(n) << endl;

    return 0;
}
