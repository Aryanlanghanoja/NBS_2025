#include <bits/stdc++.h>
using namespace std;

void print(vector<int> &v)
{
    for (int &i : v)
    {
        cout << i << " ";
    }
    cout << endl;
}

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

int main()
{
    int n;
    cin >> n;

    vector<int> prime_no = prime_till_n(n);
    print(prime_no);

    return 0;
}