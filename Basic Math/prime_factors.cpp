#include <bits/stdc++.h>
using namespace std;

void print_map(unordered_map<int, int> &factors)
{
    unordered_map<int, int>::iterator itr;

    for (itr = factors.begin(); itr != factors.end(); itr++)
    {
        cout << itr->first << " " << itr->second << endl;
    }
    return;
}

// TC = O(sqrt(n) * log(n))
unordered_map<int, int> prime_factors_list(int n)
{
    unordered_map<int, int> factors;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            factors[i]++;
            n /= i;

            while (n % i == 0)
            {
                factors[i]++;
                n /= i;
            }

            if (n == 1)
            {
                break;
            }
        }
    }

    if (n != 1)
    {
        factors[n]++;
    }

    return factors;
}

int main()
{
    int n;
    cin >> n;

    unordered_map<int, int> factors = prime_factors_list(n);
    print_map(factors);

    return 0;
}