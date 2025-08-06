#include <bits/stdc++.h>
using namespace std;

int modularExponentiation(int base, int exponent, int mod)
{
    int result = 1;
    base = base % mod;

    while (exponent > 0)
    {
        if (exponent % 2 == 1)
            result = (1LL * result * base) % mod;

        base = (1LL * base * base) % mod;
        exponent /= 2;
    }

    return result;
}

int main()
{
    int base, exponent, mod;
    cin >> base >> exponent >> mod;

    cout << modularExponentiation(base, exponent, mod) << endl;
    return 0;
}
