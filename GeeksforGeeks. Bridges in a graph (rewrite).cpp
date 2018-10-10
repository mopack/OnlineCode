//#include <iostream>
//#include <list>
//#include <vector>
//#define min(a,b) (((a) < (b)) ? (a) : (b))
//using namespace std;
//
//class Solution {
//public:
//	vector<list<int>>G;
//	vector<int> no, low, parent;
//	int id;
//	bool bridge[1001][1001];
//
//	void go(int u) {
//		no[u] = low[u] = ++id;
//		for (list<int>::iterator i = G[u].begin(); i != G[u].end(); i++) {
//			int v = *i;
//			if (!no[v]) { // not visited
//				parent[v] = u;
//				go(v);
//				low[u] = min(low[u], low[v]);
//				if (low[v] > no[u]) { bridge[u][v] = bridge[v][u] = 1; }
//			}
//			else if (v != parent[u])
//				low[u] = min(low[u], no[v]);
//		}
//	}
//	vector<int> findRedundantConnection(vector<vector<int>>& edges) {
//		// input Graph
//		G = vector<list<int>>(edges.size()+1, list<int>()); // adj-link
//		for (int i = 0; i < edges.size(); i++) {
//			G[edges[i][0]].push_back(edges[i][1]);
//			G[edges[i][1]].push_back(edges[i][0]);
//		}
//		// find Bridge
//		no = vector<int>(edges.size()+1, 0);
//		low = vector<int>(edges.size()+1, 0);
//		parent = vector<int>(edges.size()+1, -1);
//		memset(bridge, 0, sizeof(bridge));
//		id = 0;
//		go(1);
//
//		// return
//		for (int i = edges.size() - 1; i >= 0; i--) {
//			if (bridge[edges[i][0]][edges[i][1]] == 0) return edges[i];
//		}
//		return vector<int>();
//	}
//}az;
//int main() {
//	vector<vector<int>> t = { { 1,2 },{ 1,3 },{ 2,3 } };
//	vector<int> u = az.findRedundantConnection(t);
//
//	system("pause");
//	return 0;
//}