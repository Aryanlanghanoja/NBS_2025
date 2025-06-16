#include<bits/stdc++.h>
using namespace std;

int migratoryBirds(vector<int> arr) {
    unordered_map<int, int> counter ;
    
    for(int &a: arr) {
        counter[a]++;
    }
    
    vector<pair<int,int>> map (counter.begin() , counter.end());
    sort(map.begin() , map.end() , [](const pair<int , int> &a , const pair<int,int> &b) {
        if(a.second == b.second) {
            return a.first < b.first;
        }
        
        return a.second > b.second ;
    });
    
    return map[0].first ;
}

int main() {

   return 0;
}