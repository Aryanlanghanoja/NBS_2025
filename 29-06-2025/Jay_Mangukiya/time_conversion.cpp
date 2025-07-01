#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    if(s[s.size()-2] == 'P'){
    int hr = stoi(s.substr(0,2));
    if(hr==12){
        s.erase(s.size()-2);
        return s;
            }
            int exhr = (hr+12);
            s.replace(0,2,to_string(exhr));
            s.erase(s.size()-2);
    }else{
            string hr = s.substr(0,2);
            if(hr == "12"){
                    hr = "00";
                    s.replace(0,2,hr);
            }
            s.erase(s.size()-2,2);

}
return s;
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
