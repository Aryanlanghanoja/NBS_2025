#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> ramanujan(int n)
{
    vector<int> cubes(217);

    for (int i = 0; i < 217; i++)
    {
        cubes[i] = i * i * i;
    }

    vector<pair<int, int>> numwithindex;

    for (int i = 0; i < 217; i++)
    {
        numwithindex.push_back({cubes[i], i});
    }

    sort(numwithindex.begin(), numwithindex.end());

    int left = 1;
    int right = 216;

    vector<pair<int, int>> answers;

    while (left < right)
    {
        int sum = numwithindex[left].first + numwithindex[right].first;

        if (sum == n)
        {
            answers.push_back({numwithindex[left].second, numwithindex[right].second});
            left++;
            right--;
        }

        else if (sum < n)
        {
            left++;
        }

        else
        {
            right--;
        }
    }

    return answers;
}

int main()
{

    for (int i = 0; i <= 1e7; i++)
    {
        vector<pair<int, int>> ans = ramanujan(i);

        if (!ans.empty())
        {

            cout << i << " :- " << endl;

            for (pair<int, int> &p : ans)
            {
                cout << p.first << " " << p.second << endl;
            }

            cout << "-----------------------------------------------------------------------------" << endl;
        }
    }

    return 0;
}