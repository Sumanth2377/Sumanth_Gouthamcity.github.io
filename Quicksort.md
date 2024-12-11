#include <iostream>
#include <vector>
#include <map>
#include <limits>

class RouteOptimizer {
private:
    std::map<char, std::map<char, int>> graph;
    const int INF = std::numeric_limits<int>::max();

public:
    RouteOptimizer() {
        // Initialize graph with distances between collection points
        graph['A']['B'] = 4;  graph['B']['A'] = 4;
        graph['B']['C'] = 3;  graph['C']['B'] = 3;
        graph['C']['D'] = 5;  graph['D']['C'] = 5;
        graph['D']['E'] = 2;  graph['E']['D'] = 2;
        graph['A']['E'] = 7;  graph['E']['A'] = 7;
    }

    std::vector<char> findShortestPath(char start) {
        std::map<char, int> distances;
        std::map<char, char> previous;
        std::vector<char> unvisited = {'A', 'B', 'C', 'D', 'E'};
        
        // Initialize distances
        for (char point : unvisited) {
            distances[point] = INF;
        }
        distances[start] = 0;

        while (!unvisited.empty()) {
            // Find minimum distance vertex
            char current = unvisited[0];
            int minDist = INF;
            int minIndex = 0;
            
            for (size_t i = 0; i < unvisited.size(); i++) {
                if (distances[unvisited[i]] < minDist) {
                    minDist = distances[unvisited[i]];
                    current = unvisited[i];
                    minIndex = i;
                }
            }

            // Remove current vertex from unvisited
            unvisited.erase(unvisited.begin() + minIndex);

            // Update distances to neighbors
            for (const auto& neighbor : graph[current]) {
                int alt = distances[current] + neighbor.second;
                if (alt < distances[neighbor.first]) {
                    distances[neighbor.first] = alt;
                    previous[neighbor.first] = current;
                }
            }
        }

        // Reconstruct path
        std::vector<char> path;
        char current = 'E';  // End point
        while (previous.find(current) != previous.end()) {
            path.insert(path.begin(), current);
            current = previous[current];
        }
        path.insert(path.begin(), start);
        
        return path;
    }
};

int main() {
    RouteOptimizer router;
    std::vector<char> shortestPath = router.findShortestPath('A');
    
    std::cout << "Shortest collection route from A to E: ";
    for (char point : shortestPath) {
        std::cout << point << " ";
    }
    std::cout << "\n";

    return 0;
}
