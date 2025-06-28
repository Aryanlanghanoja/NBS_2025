#include <bits/stdc++.h>
using namespace std;

void Calculate()
{
    const int N = 1e6;
    map<long long, vector<pair<int, int>>> cubeSums;

    for (int i = 1; i <= N; ++i)
    {
        for (int j = i; j <= N; ++j)
        {
            long long sum = 1LL * i * i * i + 1LL * j * j * j;
            cubeSums[sum].push_back({i, j});
        }
    }

    for (const auto &entry : cubeSums)
    {
        if (entry.second.size() == 2)
        {
            cout << entry.first << " = "
                 << entry.second[0].first << "^3 + " << entry.second[0].second << "^3 and "
                 << entry.second[1].first << "^3 + " << entry.second[1].second << "^3\n";
        }
    }

    return;
}

int main()
{

    int n;
    cin >> n;

    cout << n << endl;
    // Calculate()

    return 0;
}
