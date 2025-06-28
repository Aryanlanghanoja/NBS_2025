#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long A(long long i)
{
    if (i % 4 == 0)
    {
        return i;
    }

    if (i % 4 == 1)
    {
        return 1;
    }

    if (i % 4 == 2)
    {
        return i + 1;
    }

    return 0;
}

long long processQuery(long long l, long long r)
{

    long long multiple;
    if (l % 4 == 0)
    {
        multiple = l / 4;
    }

    else
    {
        multiple = floor(l / 4) + 1;
    }

    long long start = 4 * multiple;
    long long end = r - (r % 4) - 1;
    long long range = end - start + 1;
    long long ans = 0;

    if (range < 4)
    {
        for (long long i = l; i <= r; i++)
        {
            ans ^= A(i);
        }

        return ans;
    }

    long long cycle = range / 4;

    if (cycle % 4 != 0)
    {
        ans ^= 2;
    }

    for (long long i = l; i < start; i++)
    {
        ans ^= A(i);
    }

    for (long long i = end; i <= r; i++)
    {
        ans ^= A(i);
    }

    return ans;
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;

    while (n--)
    {
        long long l;
        long long r;

        cin >> l >> r;

        long long ans = processQuery(l, r);

        cout << ans << endl;
    }

    return 0;
}
