#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'isValid' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string isValid(string s)
{

    map<char, long long int> m;

    for (long long int i = 0; i < s.length(); i++)
    {
        m[s[i]]++;
    }
    vector<long long int> v;
    for (auto it : m)
    {
        v.push_back(it.second);
    }
    sort(v.begin(), v.end());
    int n = v.size();
    if (n == 1 || n == 0)
    {
        return "YES";
    }
    if (n == 2)
    {
        if (abs(v[0] - v[1]) == 1 || abs(v[0] - v[1]) == 0)
        {
            return "YES";
        }
    }
    if ((v[0] == v[n - 1]))
    {
        return "YES";
    }
    if ((v[0] == v[n - 2]) && ((v[n - 1] - v[n - 2]) == 1))
    {
        return "YES";
    }
    if ((v[n - 1] == v[1]) && ((v[1] - v[0]) == 1))
    {
        return "YES";
    }
    return "NO";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = isValid(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
