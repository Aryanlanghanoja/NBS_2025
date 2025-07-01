#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'isValid' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

// bool checksame(vector<int> &arr){
//     for(int i = 0; i<arr.size()-2; i++){
//         if(arr[i]==arr[i+1]){
//             return true;
//         }
//     }return false;
// }

string isValid(string s) {
    // map<char, int> freq;
    // vector<int> arr(s.size());
    // for(char i:s){
    //     freq[i]++;
    // }
    // // int maximum = INT_MIN, minimum = INT_MAX;
    // for(auto i: freq){
    //     arr.push_back(i.second);
    // }
    
    // if(all_of(arr.begin(), arr.end(), [&](int x) { return x == arr.front(); })) return "YES";
    
    // sort(arr.begin(), arr.end());
    // arr[0] +=1;
    // if(all_of(arr.begin(), arr.end(), [&](int x) { return x == arr.front(); })) return "YES";
    // else arr[0]-=1;
    
    // arr[arr.size()-1]-=1;
    // if(all_of(arr.begin(), arr.end(), [&](int x) { return x == arr.front(); })) return "YES";
    // else return "NO";
    
       map<char, int> freq;
    vector<int> arr;
    for(char i : s){
        freq[i]++;
    }

    for(auto i : freq){
        arr.push_back(i.second);
    }

    sort(arr.begin(), arr.end());
    if(all_of(arr.begin(), arr.end(), [&](int x) { return x == arr[0]; }))
        return "YES";

    if(arr[0] == 1 && all_of(arr.begin() + 1, arr.end(), [&](int x){ return x == arr[1]; }))
        return "YES";

    if(arr[arr.size() - 1] - 1 == arr[arr.size() - 2] && 
       all_of(arr.begin(), arr.end() - 1, [&](int x){ return x == arr[0]; }))
        return "YES";

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
