#include <bits/stdc++.h>
using namespace std;

int main()
{

    int count = 0;
    long long unsigned five_n = 5;
    long long unsigned eight_n = 64;
    long long unsigned thirtenn_n = 2197;
    long long unsigned sum;

    for (int i = 1; i <= 100; i++)
    {
        sum = five_n + eight_n + thirtenn_n;
        sum %= 6;

        if (sum % 6 == 0)
        {
            cout << "i :- " << i << endl;
            cout << "5^i :- " << five_n << endl;
            cout << "8^(i+1) :- " << eight_n << endl;
            cout << "13^(i+2) :- " << thirtenn_n << endl;
            cout << "Sum :- " << sum << endl;
            cout << "___________________________________________________________________" << endl;
            count++;
        }

        five_n = (five_n % 6) * 5;
        eight_n = (eight_n % 6) * 8;
        thirtenn_n = (thirtenn_n % 6) * 13;
    }

    cout << "Count :- " << count << endl;
    return 0;
}