#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

string sumDigit(string &s)
{
    unsigned long long int sum = 0;

    for (char &ch : s)
    {
        sum = sum + (ch - '0');
    }

    return to_string(sum);
}

string firstSum(string &s, int k)
{
    unsigned long long int sum = 0;

    for (char &ch : s)
    {
        sum = sum + (ch - '0');
    }

    string n = to_string(sum * k);

    return sumDigit(n);
}

/*
 * Complete the 'superDigit' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. STRING n
 *  2. INTEGER k
 */

int superDigit(string n, int k)
{
    // string s = "" ;

    // for(int i = 0 ; i < k ; i++) {
    //     s += n ;
    // }

    n = firstSum(n, k);

    while (n.size() > 1)
    {
        n = sumDigit(n);
        cout << n << endl;
    }
    int ans = n[0] - '0';
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    string n = first_multiple_input[0];

    int k = stoi(first_multiple_input[1]);

    int result = superDigit(n, k);

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
