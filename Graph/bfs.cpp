#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Solution
{
public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfs(vector<vector<int>> &adj)
    {
        // Code here
        int v = adj.size();
        vector<int> ans;
        vector<bool> visited(v, false);
        queue<int> q;
        q.push(0);
        visited[0] = true;

        while (!q.empty())
        {
            int curr = q.front();
            ans.push_back(curr);

            for (int i = 0; i < adj[curr].size(); i++)
            {

                if (!visited[adj[curr][i]])
                {
                    q.push(adj[curr][i]);
                    visited[adj[curr][i]] = true;
                }
            }

            q.pop();
        }

        return ans;
    }
};

int main()
{
    Solution solution;
    vector<vector<int>> adj = {
        {2, 3, 1}, {0}, {0, 4}, {0}, {2}};

    vector<int> bfs_result = solution.bfs(adj);
    cout << "BFS Traversal: ";
    for (int node : bfs_result)
    {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}