#include <bits/stdc++.h>
using namespace std;

void Print_Array(vector<int> &array)
{
    for (int i = 0; i < array.size(); i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void Print_Array_2(vector<int> array)
{
    for (int i = 0; i < array.size(); i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void Print_Array_3(vector<int> *array)
{
    for (int i = 0; i < array->size(); i++)
    {
        cout << *(*array + i) << " ";
    }
    cout << endl;
}

int main()
{

    return 0;
}