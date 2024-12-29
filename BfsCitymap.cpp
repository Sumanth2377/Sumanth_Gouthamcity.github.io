#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void bfs(vector<vector<int>>& adj, int start, int target) {
    vector<bool> vis(adj.size(), false);
    vector<int> dist(adj.size(), -1);
    queue<int> q;

    q.push(start);
    vis[start] = true;
    dist[start] = 0;

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        if (node == target) {
            cout << "Dist: " << dist[node] << endl;
            return;
        }

        for (int nbr : adj[node]) {
            if (!vis[nbr]) {
                vis[nbr] = true;
                dist[nbr] = dist[node] + 1;
                q.push(nbr);
            }
        }
    }

    cout << "Not reachable!" << endl;
}

int main() {
    vector<vector<int>> adj(5);
    adj[0] = {1, 2};
    adj[1] = {0, 3};
    adj[2] = {0, 4};
    adj[3] = {1};
    adj[4] = {2};

    int start = 0, target = 3;
    bfs(adj, start, target);
    return 0;
}
