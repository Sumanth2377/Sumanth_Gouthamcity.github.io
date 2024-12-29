#include <iostream>
#include <vector>
#include <queue>
#include <limits>
using namespace std;

const int V = 9; // Number of vertices

// _>Function to find the vertex with minimum distance
// ->value, from the set of vertices not yet included
// ->in shortest path tree
int minDistance(vector<int>& dist, vector<bool>& sptSet) {
   int min = INT_MAX, min_index;
    
   for (int v = 0; v < V; v++)
        if (!sptSet[v] && dist[v] <= min)
            min = dist[v], min_index = v;
            
   return min_index;
}

// for paths
void printPath(vector<int>& parent, int j) {
    if (parent[j] == -1)
        return;
        
    printPath(parent, parent[j]);
    cout << " -> " << j;
}

// for the solution
void printSolution(vector<int>& dist, vector<int>& parent, int src) {
    cout << "Vertex\t\tDistance\tPath" << endl;
    for (int i = 0; i < V; i++) {
        cout << src << " -> " << i << "\t\t" << dist[i] << "\t\t" << src;
        printPath(parent, i);
        cout << endl;
    }
}

void dijkstra(vector<vector<int>>& graph, int src) {
    vector<int> dist(V, INT_MAX);     // Distance of an array
    vector<bool> sptSet(V, false);    // Shortest Path Tree Set
    vector<int> parent(V, -1);        // Parent array to store shortest path tree
    
   dist[src] = 0;
      for (int count = 0; count < V - 1; count++) {
        int u = minDistance(dist, sptSet);  
        sptSet[u] = true;    
        for (int v = 0; v < V; v++) {
            if (!sptSet[v] && graph[u][v] && 
                dist[u] != INT_MAX && 
                dist[u] + graph[u][v] < dist[v]) {
                dist[v] = dist[u] + graph[u][v];
                 parent[v] = u;
            }
        }
    }
    
  printSolution(dist, parent, src);
}

int main() {
    // Create the adjacency matrix for the graph
    vector<vector<int>> graph = {
        //DY(S) RS   Res  EC1  MA   EC2  AC   IA   DY(E)
        {0,    20,  0,   0,   0,   0,   0,   0,   0},    // DY(S)
        {20,   0,   10,  0,   0,   0,   0,   0,   0},    // Railway Station
        {0,    10,  0,   15,  0,   0,   0,   0,   0},    // Residential
        {0,    0,   15,  0,   30,  0,   0,   0,   0},    // Electronic City 1
        {0,    0,   0,   30,  0,   45,  0,   0,   0},    // Market Area
        {0,    0,   0,   0,   45,  0,   15,  0,   0},    // Electronic City 2
        {0,    0,   0,   0,   0,   15,  0,   58,  0},    // Agriculture College
        {0,    0,   0,   0,   0,   0,   58,  0,   10},   // Industry Area
        {0,    0,   0,   0,   0,   0,   0,   10,  0}     // DY(E)
    };
    
    // Starting vertex is 0 (DY(S))
    cout << "Shortest paths from Dump Yard (Start):\n";
    dijkstra(graph, 0);
    
    return 0;
}
