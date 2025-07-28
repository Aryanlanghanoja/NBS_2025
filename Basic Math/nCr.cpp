#include <bits/stdc++.h>
using namespace std;

long long nCr_math(int n, int r)
{
    long long res = 1;

    if (r > n)
        return 0;

    if (r == 0 || r == n)
        return 1;

    r = min(r, n - r);

    for (int i = 1; i <= r; ++i)
    {
        res *= (n - r + i);
        res /= (i);
    }

    return res;
}

long long nCr_recursion(int n, int r)
{
    r = min(r, n - r);

    if (r < 0) // (r > n) is redundant
        return 0;
    if (r == 0) // r == n || n == 0 is redundant
        return 1;

    long long n_1_c_r = nCr_recursion(n - 1, r);
    long long n_1_c_r_1 = nCr_recursion(n - 1, r - 1);

    return n_1_c_r + n_1_c_r_1;
}

int main()
{
    int n, r;
    cout << "Enter n and r: ";
    cin >> n >> r;

    cout << "Recursion :- nCr(" << n << ", " << r << ") = " << nCr_recursion(n, r) << endl;
    cout << "Math :- nCr(" << n << ", " << r << ") = " << nCr_math(n, r) << endl;

    return 0;
}