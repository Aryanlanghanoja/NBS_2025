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

    int h = stoi(s.substr(0, 2));   // Extract hours
    string minute = s.substr(3, 2); // Extract minutes
    string second = s.substr(6, 2); // Extract seconds
    string am_pm = s.substr(8, 2);  // Extract AM/PM

    if (am_pm == "PM" && h != 12)
    {
        h += 12;
    }
    else if (am_pm == "AM" && h == 12)
    {
        h = 0;
    }

    string hour;

    int unit = h % 10;
    h = h / 10;
    int decimals = h % 10;

    if (decimals == 0)
    {
        hour = "0" + to_string(unit);
    }

    else
    {
        hour = to_string(decimals) + to_string(unit);
    }

    string Time_24 = hour + ":" + minute + ":" + second;

    return Time_24;
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
