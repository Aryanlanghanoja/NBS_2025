#include <bits/stdc++.h>
using namespace std;

int no_of_bits(int n)
{

    if (n == 0)
    {
        return 1;
    }

    if (n < 0)
    {
        return 32;
    }

    // int counter = 0;

    // while (n)
    // {
    //     counter++;
    //     n = n >> 1;
    // }

    return floor(log2(n)) + 1;
}

int set_bits(int n)
{
    int set_bit = 0;

    while (n)
    {
        if (n & 1)
        {
            set_bit++;
        }

        n >>= 1;
    }

    return set_bit;
}

int unset_bits(int n)
{
    int no_of_bit = no_of_bits(n);
    int set_bit = set_bits(n);

    return no_of_bit - set_bit;
    // while (n)
    // {
    //     if (!(n & 1))
    //     {
    //         set_bit++;
    //     }

    //     n >>= 1;
    // }

    // return set_bit;
}

int main()
{

    int n;
    cin >> n;

    cout << no_of_bits(n) << endl;
    return 0;
}
