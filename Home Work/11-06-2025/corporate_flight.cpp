#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    void  Print_Array(vector<int> &Array) {
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

    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> ans(n , 0) ;

        for(vector<int> &booking : bookings) {
            int first = booking[0] - 1 ;
            int last = booking[1] ;
            int seats = booking[2] ;

            ans[first] += seats ;

            if(last < n) {
                ans[last] -= seats ;
            }
        }

        for(int i = 1 ; i < n ; i++) {
            ans[i] += ans[i-1] ;
        }

        return ans ;
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

    vector<int> reserved = sol.corpFlightBookings(queries , n);

    cout << "\nThe maximum value in the result array is .\n";
    sol.Print_Array(reserved);

    return 0;
}