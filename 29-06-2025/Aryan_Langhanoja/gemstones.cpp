#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'gemstones' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING_ARRAY arr as parameter.
 */

int gemstones(vector<string> arr)
{
    unordered_map<char, int> minerals;

    for (int i = 0; i < arr.size(); i++)
    {
        unordered_set<char> unique;
        for (char &c : arr[i])
        {
            unique.insert(c);
        }

        unordered_set<char>::iterator itr;

        for (itr = unique.begin(); itr != unique.end(); itr++)
        {
            minerals[*itr]++;
        }
    }

    int n = arr.size();
    int counter = 0;

    for (unordered_map<char, int>::iterator itr = minerals.begin(); itr != minerals.end(); itr++)
    {
        if (itr->second == n)
        {
            counter++;
        }
    }

    return counter;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    vector<string> arr(n);

    for (int i = 0; i < n; i++)
    {
        string arr_item;
        getline(cin, arr_item);

        arr[i] = arr_item;
    }

    int result = gemstones(arr);

    fout << result << "\n";

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
