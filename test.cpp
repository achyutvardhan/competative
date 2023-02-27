#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
#include <limits>

using namespace std;

typedef pair<int, int> pii;

void dijkstra(unordered_map<int, vector<pii>>& graph, int start, int end) {
    priority_queue<pii, vector<pii>, greater<pii>> pq;  // Min-heap
    unordered_map<int, int> distances;
    unordered_map<int, int> previous;
    vector<int> path;
    int node, distance, neighbor, weight;

    // Initialize distances to "infinity" (i.e., INT_MAX) and previous nodes to -1
    for (auto& pair : graph) {
        distances[pair.first] = numeric_limits<int>::max();
        previous[pair.first] = -1;
    }

    distances[start] = 0;
    pq.push(make_pair(0, start));

    while (!pq.empty()) {
        node = pq.top().second;
        distance = pq.top().first;
        pq.pop();

        if (node == end) {
            // Reconstruct the shortest path
            while (node != -1) {
                path.insert(path.begin(), node);
                node = previous[node];
            }
            break;
        }

        if (distances[node] < distance) {
            continue;
        }

        for (auto& neighbor_pair : graph[node]) {
            neighbor = neighbor_pair.first;
            weight = neighbor_pair.second;
            if (distances[node] + weight < distances[neighbor]) {
                distances[neighbor] = distances[node] + weight;
                previous[neighbor] = node;
                pq.push(make_pair(distances[neighbor], neighbor));
            }
        }
    }

    // Print out the shortest path and its distance
    if (path.empty()) {
        cout << "No path found from node " << start << " to node " << end << endl;
    } else {
        cout << "Shortest path from node " << start << " to node " << end << ": ";
        for (int i = 0; i < path.size(); i++) {
            cout << path[i];
            if (i != path.size() - 1) {
                cout << " -> ";
            }
        }
        cout << endl << "Shortest distance: " << distances[end] << endl;
    }
}

int main() {
    unordered_map<int, vector<pii>> graph = {
        {1, {{2, 7}, {3, 9}, {6, 14}}},
        {2, {{1, 7}, {3, 10}, {4, 15}}},
        {3, {{1, 9}, {2, 10}, {4, 11}, {6, 2}}},
        {4, {{2, 15}, {3, 11}, {5, 6}}},
        {5, {{4, 6}, {6, 9}}},
        {6, {{1, 14}, {3, 2}, {5, 9}}}
    };
    dijkstra(graph, 1, 6);  // Find shortest path from node 1 to node 5
    return 0;
}
