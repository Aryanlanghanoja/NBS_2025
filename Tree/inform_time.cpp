#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <unordered_set>
using namespace std;

class Solution
{

private:
    int DFS(int node, vector<int> &informTime, unordered_map<int, vector<int>> &adj_list)
    {
        if (adj_list.find(node) == adj_list.end())
            return informTime[node]; // No subordinates, return informTime[node]
        int max_time = 0;
        for (int neighbor : adj_list[node])
        {
            max_time = max(max_time, DFS(neighbor, informTime, adj_list));
        }
        return max_time + informTime[node];
    }

public:
    int numOfMinutes(int n, int headID, vector<int> &manager, vector<int> &informTime)
    {
        unordered_map<int, vector<int>> adj_list;
        for (int i = 0; i < n; i++)
        {
            if (manager[i] != -1)
            {
                adj_list[manager[i]].push_back(i);
            }
        }
        return DFS(headID, informTime, adj_list);
    }
};

int main()
{
    Solution solution;
    int n = 15;
    int headID = 0;
    vector<int> manager = {-1, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6};
    vector<int> informTime = {1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0};

    int total_time = solution.numOfMinutes(n, headID, manager, informTime);
    cout << "Total time to inform all employees: " << total_time << " minutes" << endl;

    return 0;
}