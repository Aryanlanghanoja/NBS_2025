#include<bits/stdc++.h>
using namespace std;

void  Print_Array(vector<int> &Array) {
    for (int i = 0; i < Array.size() ; i++) {
        cout << Array[i] << " ";
    }
    cout << endl;
}

int Input_Integer() {
    int n;

    cout << "\nEnter the Key to search in the array :- " ;
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

int Binary_Search_Recursive(vector<int> &nums , int left , int right , int key) {
    if(right >= left) {
        int mid = left + (right - left) / 2;

        if(nums[mid] == key) {
            return mid;
        }
    
        else if (key > nums[mid]) {
            return Binary_Search_Recursive(nums, mid + 1, right, key);
        }
    
        else {
            return Binary_Search_Recursive(nums, left, mid - 1, key);
        }
    }

    else {
        return -1;
    }
}

int main() {

    cout << "Enter the Values for the Array :- ";
    vector<int> nums = Input_Array();
    int key = Input_Integer();

    cout << "Original Input Array :- " << endl;
    Print_Array(nums);

    sort(nums.begin(), nums.end());

    int left = 0;
    int right = nums.size() - 1;
    int index = Binary_Search_Recursive(nums, left, right, key);

    if(index != -1) {
        cout << "The " << key << " Found at Index - " << index << "  In the array." << endl;
    }

    else {
        cout << "The " << key << " Is Not Founded In the Array" << endl;
    }

    return 0;
}