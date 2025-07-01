#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    bitset<32> num(n);
    cout << num << endl;

    for (int i = 0; i <= 16; i++)
    {
        num[i] = num[31 - i];
    }

    cout << num << endl;
    return 0;
}