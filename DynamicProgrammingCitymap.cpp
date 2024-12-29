#include <bits/stdc++.h>
using namespace std;

class WasteManagementSystem {
    vector<string> locations;
    vector<vector<int>> times;
    vector<vector<int>> dp, path;
    const int INF = 1e9, n;

public:
    WasteManagementSystem(vector<string>& loc, vector<vector<int>>& t)
        : locations(loc), times(t), n(loc.size()),
          dp(1 << n, vector<int>(n, INF)), path(1 << n, vector<int>(n, -1)) {
        dp[1][0] = 0;  // Start at Dump Yard
    }

    pair<vector<int>, int> findOptimalPath() {
        for (int mask = 1; mask < (1 << n); mask++) {
            for (int last = 0; last < n; last++) {
                if (!(mask & (1 << last))) continue;
                int prevMask = mask ^ (1 << last);
                for (int prev = 0; prev < n; prev++) {
                    if (!(prevMask & (1 << prev)) || times[prev][last] == INF) continue;
                    int cost = dp[prevMask][prev] + times[prev][last];
                    if (cost < dp[mask][last]) dp[mask][last] = cost, path[mask][last] = prev;
                }
            }
        }

        int finalMask = (1 << n) - 1, minCost = INF, lastLoc = -1;
        for (int i = 0; i < n - 1; i++) {
            if (dp[finalMask][i] + times[i][n - 1] < minCost) {
                minCost = dp[finalMask][i] + times[i][n - 1], lastLoc = i;
            }
        }
        return {reconstructPath(finalMask, lastLoc), minCost};
    }

private:
    vector<int> reconstructPath(int mask, int last) {
        vector<int> result;
        while (mask) result.push_back(last), mask ^= (1 << last), last = path[mask][last];
        reverse(result.begin(), result.end());
        return result;
    }
};

int main() {
    vector<string> locations = {
        "Dump Yard(Start)", "Railway Station", "Residential", "Electronic City 1",
        "Market Area", "Electronic City 2", "Agriculture College", "Industry Area", "Dump Yard(End)"
    };

    vector<vector<int>> times = {
        {0, 20, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX},
        {20, 0, 10, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX},
        {INT_MAX, 10, 0, 15, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX},
        {INT_MAX, INT_MAX, 15, 0, 30, INT_MAX, INT_MAX, INT_MAX, INT_MAX},
        {INT_MAX, INT_MAX, INT_MAX, 30, 0, 45, INT_MAX, INT_MAX, INT_MAX},
        {INT_MAX, INT_MAX, INT_MAX, INT_MAX, 45, 0, 15, INT_MAX, INT_MAX},
        {INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, 15, 0, 58, INT_MAX},
        {INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, 58, 0, 10},
        {INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, 10, 0}
    };

    WasteManagementSystem wms(locations, times);
    auto [path, totalTime] = wms.findOptimalPath();

    cout << "Optimal Path:\n";
    for (int i = 0; i < path.size(); i++) {
        cout << locations[path[i]] << (i < path.size() - 1 ? " → " : "");
    }
    cout << "\nTotal Time: " << totalTime << " minutes\n";

    return 0;
}
//Reffered online resources to implement this code(didnt know how to implememt this code but i am pretty sure this algorithm would bring a change in our city map plans)
