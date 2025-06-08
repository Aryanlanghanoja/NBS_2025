#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    void  Print_Array(vector<long> &Array) {
        for (int i = 0; i < Array.size() ; i++) {
            cout << Array[i] << " ";
        }
        cout << endl;
    }

    void  Print_Query(vector<vector<int>> &Queries) {
        for (int i = 0; i < Queries.size() ; i++) {
            for (int j = 0; j < Queries[i].size(); j++) {
                cout << Queries[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    int Input_Integer(string val) {
        int n;

        cout << "\nEnter the Integer Value for " << val << " :- " ;
        cin >> n;

        return n;
    }

    vector<int> Input_Array() {
        vector<int> Array;

        cout << "Enter -1 to Stop." << endl;
        int input;

        while (true) {
            cin >> input;
            if (input == -1)
                break;
            Array.push_back(input);
        }

        return Array;

    }

    long arrayManipulation(int n, vector<vector<int>> &queries) {

        vector<long> answer(n , 0) ;

        cout << "\nInitial array is :- " << endl;
        Print_Array(answer);
        
        for(vector<int> &query : queries) {
            int start = query[0] - 1 ;
            int end = query[1];
            int value = query[2];
            
            answer[start] += value ;
            
            if(end < n ) {
                answer[end] += -1 * value ;
            }
        }

        long max = answer[0];

        for(int i = 1 ; i < n ; i++) {
            answer[i] += answer[i-1] ;
            
            if(answer[i] > max) {
                max = answer[i];
            }
        }

        cout << "\nAfter Executing all the queries the array is :- " << endl;
        Print_Array(answer);
        
        return max;
    }
    
};

int main()
{
    Solution sol;

    int n = sol.Input_Integer("n");
    int q = sol.Input_Integer("q");
    vector<vector<int>> queries;

    for (int i = 0; i < q ; i++) {
        int a = sol.Input_Integer("a");
        int b = sol.Input_Integer("b");
        int k = sol.Input_Integer("k");

        queries.push_back({a, b, k});
    }

    cout << endl;

    cout << "n = " << n << endl;
    cout << "q = " << q << endl;
    cout << endl;

    cout << "queries = " << endl;
    sol.Print_Query(queries);

    long ans = sol.arrayManipulation(n, queries);

    cout << "\nThe maximum value in the result array is :- " << ans << " .\n";

    return 0;
}