#include <iostream>
#include <vector>
using namespace std;

class Solution
{

private:
    void DFS_Helper(vector<vector<int>> &adj, int v, vector<bool> &visited, vector<int> &dfsTraversal, int curr)
    {
        dfsTraversal.push_back(curr);
        visited[curr] = true;

        for (int i = 0; i < adj[curr].size(); i++)
        {
            if (!adj[curr][i])
            {
                DFS_Helper(adj, v, visited, dfsTraversal, adj[curr][i]);
            }
        }

        return;
    }

public:
    vector<int> dfs(vector<vector<int>> &adj)
    {
        // Code here
        int v = adj.size();
        vector<bool> visited(v, false);
        vector<int> dfsTraversal;

        DFS_Helper(adj, v, visited, dfsTraversal, 0);

        for (int i = 0; i < v; i++)
        {
            if (!visited[i])
            {
                DFS_Helper(adj, v, visited, dfsTraversal, i);
            }
        }

        return dfsTraversal;
    }
};

int main()
{
    Solution sol;
    vector<vector<int>> adj = {
        {2, 3, 1},
        {0},
        {0, 4},
        {0},
        {2}};

    vector<int> result = sol.dfs(adj);

    cout << "DFS Traversal: ";
    for (int node : result)
    {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}