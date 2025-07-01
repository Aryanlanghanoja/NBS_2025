#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'biggerIsGreater' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING w as parameter.
 */

string biggerIsGreater(string s)
{
    int n = s.size();

    if (n == 1)
    {
        return "no answer";
    }

    if (n == 2)
    {
        if (s[0] >= s[1])
        {
            return "no answer";
        }

        else
        {
            swap(s[0], s[1]);
            return s;
        }
    }

    bool isSorted = true;
    for (int i = n - 2; i >= 0; i--)
    {
        if (s[i] < s[i + 1])
        {
            isSorted = false;
        }
    }

    if (isSorted)
    {
        return "no answer";
    }

    else
    {
        next_permutation(s.begin(), s.end());
        return s;
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string T_temp;
    getline(cin, T_temp);

    int T = stoi(ltrim(rtrim(T_temp)));

    for (int T_itr = 0; T_itr < T; T_itr++)
    {
        string w;
        getline(cin, w);

        string result = biggerIsGreater(w);

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
