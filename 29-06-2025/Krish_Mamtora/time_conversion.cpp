#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s)
{
    string sub = s.substr(0, 1);
    string sub2 = s.substr(1, 2);
    int f = stoi(sub);
    int k = stoi(sub2);
    int t = f * 10 + k;
    if (s[8] == 'P' && t != 12)
    {
        t += 12;
    }
    if (s[8] == 'A' && t == 12)
    {
        t = 0;
    }
    string as = "0";
    if (t <= 9)
    {
        as = as + to_string(t);
    }
    else if (t >= 10)
    {
        as = to_string(t);
    }
    return as + s.substr(2, 6);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
