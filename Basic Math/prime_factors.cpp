#include <bits/stdc++.h>
using namespace std;

vector<int> prime_till_n(int n)
{
    vector<bool> prime(n + 1, true);

    for (int i = 2; i <= n / i; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                prime[j] = false;
            }
        }
    }

    vector<int> prime_no;

    for (int i = 2; i <= n; i++)
    {
        if (prime[i])
        {
            prime_no.push_back(i);
        }
    }

    return prime_no;
}

void print_map(unordered_map<int, int> &factors)
{
    unordered_map<int, int>::iterator itr;

    for (itr = factors.begin(); itr != factors.end(); itr++)
    {
        cout << itr->first << " " << itr->second << endl;
    }
    return;
}

// unordered_map<int, int> prime_factors_list_optimized(int n)
// {
//     vector<int> prime = prime_till_n(n); // (n * log(log(n)))
//     unordered_map<int, int> factors;
//     int idx = 0;

//     while (n)
//     {
//         for (int &i : prime)
//         {
//             if (n % i == 0)
//             {
//                 factors[i]++;
//                 n /= i;
//             }
//         }
//     }
// }

// TC = O(sqrt(n) * log(n))
// TC = O(n * log(log(n)) + log(n) * log(n))
unordered_map<int, int> prime_factors_list(int n)
{
    unordered_map<int, int> factors;
    int counter = 0;

    while (n % 2 == 0)
    {
        factors[2]++;
        counter++;
        n /= 2;
    }

    while (n % 3 == 0)
    {
        factors[3]++;
        counter++;
        n /= 3;
    }

    for (int i = 5; i <= (n / i); i += 6)
    {
        if (n % i == 0)
        {
            factors[i]++;
            counter++;
            n /= i;

            while (n % i == 0)
            {
                factors[i]++;
                counter++;
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
        counter++;
    }

    cout << "Iterations :- " << counter << endl;

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