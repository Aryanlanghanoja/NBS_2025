#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 1;
    int fact_1 = 1;
    int fact_2 = 1;

    while (true)
    {
        fact_1 *= n;
        fact_2 *= (n + 1);

        if (fact_1 % 1000 == fact_2 % 1000)
        {
            cout << n << endl;
            break;
        }

        n++;
    }

    return 0;
}