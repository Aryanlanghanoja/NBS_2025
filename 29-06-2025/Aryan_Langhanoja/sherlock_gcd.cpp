#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int GCD(int a, int b)
{
    if (b == 0)
    {
        return a;
    }

    return GCD(b, a % b);
}

/*
 * Complete the 'solve' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts INTEGER_ARRAY a as parameter.
 */

string solve(vector<int> a)
{

    int n = a.size();

    if (n == 1)
    {
        if (a[0] == 1)
        {
            return "YES";
        }

        else
        {
            return "NO";
        }
    }

    if (n == 2)
    {
        if (GCD(a[0], a[1]) == 1)
        {
            return "YES";
        }

        else
        {
            return "NO";
        }
    }

    int gcd = GCD(a[0], a[1]);

    for (int i = 2; i < n; i++)
    {
        gcd = GCD(a[i], gcd);
    }

    if (gcd == 1)
    {
        return "YES";
    }

    else
    {
        return "NO";
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++)
    {
        string a_count_temp;
        getline(cin, a_count_temp);

        int a_count = stoi(ltrim(rtrim(a_count_temp)));

        string a_temp_temp;
        getline(cin, a_temp_temp);

        vector<string> a_temp = split(rtrim(a_temp_temp));

        vector<int> a(a_count);

        for (int i = 0; i < a_count; i++)
        {
            int a_item = stoi(a_temp[i]);

            a[i] = a_item;
        }

        string result = solve(a);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string &str)
{
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));

    return s;
}

string rtrim(const string &str)
{
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end());

    return s;
}

vector<string> split(const string &str)
{
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos)
    {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
