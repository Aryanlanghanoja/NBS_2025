#include <bits/stdc++.h>
using namespace std;

vector<vector<vector<int>>> createAdjancylist(vector<vector<int>> &edges, int v)
{
    vector<vector<vector<int>>> adj(v);

    for (auto &edge : edges)
    {
        int u = edge[0], v = edge[1], w = edge[2];
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    return adj;
}

vector<int> dijkstrasAlgorithm(vector<vector<vector<int>>> &adj, int source)
{
    vector<int> dist(adj.size(), INT_MAX);
    dist[source] = 0;
    priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
    pq.push({0, source});

    while (!pq.empty())
    {
        int u = pq.top()[1];
        pq.pop();

        for (auto &neighbor : adj[u])
        {
            int v = neighbor[0], weight = neighbor[1];
            if (dist[u] + weight < dist[v])
            {
                dist[v] = dist[u] + weight;
                pq.push({dist[v], v});
            }
        }
    }

    return dist;
}

int main()
{
    int v = 5;
    vector<vector<int>> edges = {{0, 1, 4}, {1, 4, 6}, {4, 3, 10}, {3, 2, 2}, {2, 0, 8}};
    vector<vector<vector<int>>> adjancyList = createAdjancylist(edges, v);
    vector<int> distances = dijkstrasAlgorithm(adjancyList, 0);

    for (int i = 0; i < distances.size(); i++)
    {
        cout << "Distance from source to vertex " << i << " is " << distances[i] << endl;
    }
}
