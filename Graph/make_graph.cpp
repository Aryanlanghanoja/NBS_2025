#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// Function to create an undirected unweighted graph
// Returns a pair containing the number of vertices and the edges
pair<int, vector<vector<int>>> make_graph_undirected_unweighted()
{
    int v = 7;
    vector<vector<int>> edges = {{0, 2}, {0, 3}, {0, 1}, {1, 4}, {1, 5}, {2, 5}, {3, 4}, {6, 6}};
    pair<int, vector<vector<int>>> graph(make_pair(v, edges));
    return graph;
}

// Function to create a directed unweighted graph
// Returns a pair containing the number of vertices and the edges
pair<int, vector<vector<int>>> make_graph_directed_unweighted()
{
    int v = 7;
    vector<vector<int>> edges = {{0, 1}, {0, 3}, {2, 0}, {2, 5}, {5, 1}, {5, 4}, {6, 6}, {3, 4}};
    pair<int, vector<vector<int>>> graph(make_pair(v, edges));
    return graph;
}

// Function to convert an undirected unweighted graph to an adjacency list representation
// Returns an unordered_map where keys are vertices and values are vectors of adjacent vertices
unordered_map<int, vector<int>> make_adj_list_undirected_unweighted(pair<int, vector<vector<int>>> &graph)
{
    unordered_map<int, vector<int>> adj_list;
    int v = graph.first;

    for (int i = 0; i < v; i++)
    {
        adj_list[i] = vector<int>();
    }

    for (vector<int> &edge : graph.second)
    {
        adj_list[edge[0]].push_back(edge[1]);
        if (edge[0] != edge[1]) // Avoid adding self-loops twice
            adj_list[edge[1]].push_back(edge[0]);
    }

    return adj_list;
}

// Function to convert a directed unweighted graph to an adjacency list representation
// Returns an unordered_map where keys are vertices and values are vectors of adjacent vertices
unordered_map<int, vector<int>> make_adj_list_directed_unweighted(pair<int, vector<vector<int>>> &graph)
{
    unordered_map<int, vector<int>> adj_list;

    for (vector<int> &edge : graph.second)
    {
        adj_list[edge[0]].push_back(edge[1]);
    }

    return adj_list;
}

// Function to create an undirected weighted graph
// Returns a pair containing the number of vertices and the edges
pair<int, vector<vector<int>>> make_graph_undirected_weighted()
{
    int v = 7;
    vector<vector<int>> edges = {{0, 2, 1}, {0, 3, 2}, {0, 1, 4}, {1, 4, 3}, {1, 5, 5}, {2, 5, 6}, {3, 4, 7}, {6, 6, 0}};
    pair<int, vector<vector<int>>> graph(make_pair(v, edges));
    return graph;
}

// Function to create an undirected weighted graph
// Returns a pair containing the number of vertices and the edges
pair<int, vector<vector<int>>> make_graph_directed_weighted()
{
    int v = 7;
    vector<vector<int>> edges = {{0, 2, 1}, {0, 3, 2}, {0, 1, 4}, {1, 4, 3}, {1, 5, 5}, {2, 5, 6}, {3, 4, 7}, {6, 6, 0}};
    pair<int, vector<vector<int>>> graph(make_pair(v, edges));
    return graph;
}

// Function to convert an undirected weighted graph to an adjacency list representation
// Returns an unordered_map where keys are vertices and values are vectors of adjacent vertices
unordered_map<int, vector<int>> make_adj_list_undirected_weighted(pair<int, vector<vector<int>>> &graph)
{
    unordered_map<int, vector<int>> adj_list;

    for (vector<int> &edge : graph.second)
    {
        adj_list[edge[0]].push_back(edge[1]);
        adj_list[edge[0]].push_back(edge[2]);
        adj_list[edge[1]].push_back(edge[0]);
        adj_list[edge[1]].push_back(edge[2]);
    }

    return adj_list;
}

// Function to convert a directed weighted graph to an adjacency list representation
// Returns an unordered_map where keys are vertices and values are vectors of adjacent vertices
unordered_map<int, vector<int>> make_adj_list_directed_unweighted(pair<int, vector<vector<int>>> &graph)
{
    unordered_map<int, vector<int>> adj_list;

    for (vector<int> &edge : graph.second)
    {
        adj_list[edge[0]].push_back(edge[1]);
        adj_list[edge[0]].push_back(edge[2]);
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