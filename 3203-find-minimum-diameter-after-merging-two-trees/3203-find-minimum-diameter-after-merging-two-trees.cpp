class Solution {
public:
    int minimumDiameterAfterMerge(vector<vector<int>>& edges1,
                                  vector<vector<int>>& edges2) {
        int n = edges1.size() + 1;
        int m = edges2.size() + 1;
        vector<vector<int>> adjList1 = buildAdjList(n, edges1);
        vector<vector<int>> adjList2 = buildAdjList(m, edges2);
        int diameter1 = findDiameter(n, adjList1);
        int diameter2 = findDiameter(m, adjList2);
        cout << diameter1 << " " << diameter2 << "\n";

        int combinedDiameter =
            ceil(diameter1 / 2.0) + ceil(diameter2 / 2.0) + 1;

        return max({diameter1, diameter2, combinedDiameter});
    }

private:
    vector<vector<int>> buildAdjList(int size, vector<vector<int>>& edges) {
        vector<vector<int>> adjList(size);
        for (auto& edge : edges) {
            adjList[edge[0]].push_back(edge[1]);
            adjList[edge[1]].push_back(edge[0]);
        }
        return adjList;
    };
    int findDiameter(int n, vector<vector<int>>& adjList) {
        queue<int> leavesQueue;
        vector<int> degrees(n);
        for (int node = 0; node < n; node++) {
            degrees[node] =
                adjList[node].size();
            if (degrees[node] == 1) {
                leavesQueue.push(node);
            }
        }

        int remainingNodes = n;
        int leavesLayersRemoved = 0;
        while (remainingNodes > 2) {
            int size = leavesQueue.size(); 
            remainingNodes -= size;
            leavesLayersRemoved++;
            for (int i = 0; i < size; i++) {
                int currentNode = leavesQueue.front();
                leavesQueue.pop();
                for (int neighbor : adjList[currentNode]) {
                    degrees[neighbor]--; 
                    if (degrees[neighbor] == 1) {
                        leavesQueue.push(
                            neighbor); 
                    }
                }
            }
        }
        if (remainingNodes == 2) return 2 * leavesLayersRemoved + 1;

        return 2 * leavesLayersRemoved;
    }
};