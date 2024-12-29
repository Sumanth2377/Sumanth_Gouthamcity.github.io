#include <iostream>
#include <vector>
#include <map>
#include <limits>

// Dijkstra's algorithm for single source shortest path
// Input: A weighted connected graph G(V, E) with non-negative weights and its vertex s
// Output: the length dv of a shortest path from s to v and its penultimate vertex pv for
// every vertex v in V
class RouteOptimizer {
private:
    std::map<char, std::map<char, int>> graph;
    const int INF = std::numeric_limits<int>::max();

public:
    RouteOptimizer() {
        // Initialize graph with distances between collection points A,B,C,D,E
        graph['A']['B'] = 4;  graph['B']['A'] = 4;
        graph['B']['C'] = 3;  graph['C']['B'] = 3;
        graph['C']['D'] = 5;  graph['D']['C'] = 5;
        graph['D']['E'] = 2;  graph['E']['D'] = 2;
        graph['A']['E'] = 7;  graph['E']['A'] = 7;
    }

    std::vector<char> findShortestPath(char s) {
        std::map<char, int> d;  // distances
        std::map<char, char> p; // previous vertices
        std::vector<char> V = {'A', 'B', 'C', 'D', 'E'}; // All vertices
        std::vector<char> VT;   // Visited vertices

        // Initialize vertex distances
        for (char v : V) {
            d[v] = INF;
            p[v] = 0;
        }
        d[s] = 0;

        // Main Dijkstra's algorithm loop
        for (size_t i = 0; i < V.size(); i++) {
            // Find u* - vertex with minimum distance
            char u = 0;
            int minDist = INF;
            for (char v : V) {
                if (std::find(VT.begin(), VT.end(), v) == VT.end() && d[v] < minDist) {
                    minDist = d[v];
                    u = v;
                }
            }

            if (u == 0) break;  // No reachable vertices left
            VT.push_back(u);

            // Update distances to adjacent vertices
            for (const auto& neighbor : graph[u]) {
                char v = neighbor.first;
                int w = neighbor.second;
                if (std::find(VT.begin(), VT.end(), v) == VT.end()) {
                    if (d[u] + w < d[v]) {
                        d[v] = d[u] + w;
                        p[v] = u;
                    }
                }
            }
        }

        // Reconstruct path
        std::vector<char> path;
        char current = 'E';  // End vertex
        while (p[current] != 0) {
            path.insert(path.begin(), current);
            current = p[current];
        }
        path.insert(path.begin(), s);

        return path;
    }
};

int main() {
    RouteOptimizer router;
    std::vector<char> path = router.findShortestPath('A');
    
    std::cout << "Shortest path from A to E: ";
    for (char v : path) {
        std::cout << v << " ";
    }
    std::cout << "\n";

    return 0;
}
