#include <bits/stdc++.h>
using namespace std;

pair<int, vector<vector<int>>> make_graph_undirected_unweighted()
{
    int v = 7;
    vector<vector<int>> edges = {{0, 2}, {0, 3}, {0, 1}, {1, 4}, {1, 5}, {2, 5}, {3, 4}, {6, 6}};
    pair<int, vector<vector<int>>> graph(make_pair(v, edges));
    return graph;
}

pair<int, vector<vector<int>>> make_graph_directed_unweighted()
{
    int v = 7;
    vector<vector<int>> edges = {{0, 1}, {0, 3}, {2, 0}, {2, 5}, {5, 1}, {5, 4}, {6, 6}, {3, 4}};
    pair<int, vector<vector<int>>> graph(make_pair(v, edges));
    return graph;
}

unordered_map<int, vector<int>> make_adj_list_undirected_unweighted(pair<int, vector<vector<int>>> &graph)
{
    unordered_map<int, vector<int>> adj_list;

    for (vector<int> &edge : graph.second)
    {
        adj_list[edge[0]].push_back(edge[1]);
        adj_list[edge[1]].push_back(edge[0]);
    }

    return adj_list;
}

unordered_map<int, vector<int>> make_adj_list_directed_unweighted(pair<int, vector<vector<int>>> &graph)
{
    unordered_map<int, vector<int>> adj_list;

    for (vector<int> &edge : graph.second)
    {
        adj_list[edge[0]].push_back(edge[1]);
    }

    return adj_list;
}

int main()
{
    pair<int, vector<vector<int>>> undirected_graph = make_graph_undirected_unweighted();
    unordered_map<int, vector<int>> undirected_graph_adj_list = make_adj_list_undirected_unweighted(undirected_graph);
    pair<int, vector<vector<int>>> directed_graph = make_graph_directed_unweighted();
    unordered_map<int, vector<int>> directed_graph_adj_list = make_adj_list_directed_unweighted(directed_graph);

    return 0;
}