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
    
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int min_price = INT_MAX ;
        int max_profit = INT_MIN;

        for(int i = 0  ; i < n ; i++) {
            if(prices[i] < min_price) {
                min_price = prices[i];
            }

            if(prices[i] - min_price > max_profit) {
                max_profit = prices[i] - min_price ;
            }
        }

        return max_profit;
    }
};

int main() {

    Solution sol;

    cout << "Enter the Prices :- " << endl;
    vector<int> prices = sol.Input_Array();

    cout << "\nPrices are :- " << endl;
    sol.Print_Array(prices);

    int max_profit = sol.maxProfit(prices);

    cout << "\nThe Maximum Profit  is Rs. " << max_profit << " /- .";
}