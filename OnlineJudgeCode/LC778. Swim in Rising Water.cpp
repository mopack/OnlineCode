//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <queue>
//#include <functional>
//#include <tuple>
//using namespace std;
//
//// Dijkstra (Queue Method), 4ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//#define Adj(x, y) { if (x >= 0 && y >= 0 && x < N && y < N){ \
//					int z = max(d[a][b], max(A[x][y], A[a][b])); \
//					if(z < d[x][y]){ d[x][y] = z; q.emplace(x, y); } } }
//	int swimInWater(vector<vector<int>>& A) {
//		int N = A.size();
//		queue<pair<int, int>> q;
//		vector<vector<int>>d(N, vector<int>(N, INT_MAX));
//		d[0][0] = A[0][0]; q.emplace(0, 0);
//
//		while (!q.empty()) {
//			int a = q.front().first, b = q.front().second; q.pop();
//
//			Adj(a - 1, b); Adj(a, b - 1);
//			Adj(a + 1, b); Adj(a, b + 1);
//		}
//		return d.back().back();
//	}
//};
//
//// Dijkstra(Priority Queue Method), 8ms/PR99
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//using tp = tuple<int, int, int>;
//class Solution {
//public:
//#define Adj(x, y) { if (x >= 0 && y >= 0 && x < N && y < N){ \
//					int z = max(L, max(A[x][y], A[a][b])); \
//					if(z < d[x][y]){ d[x][y] = z; q.emplace(z, x, y); } } }
//	int swimInWater(vector<vector<int>>& A) {
//		int N = A.size();
//		vector<vector<int>>d(N, vector<int>(N, INT_MAX));
//		d[0][0] = A[0][0];
//
//		priority_queue<tp, vector<tp>, greater<tp>> q; // d,x,y
//		q.emplace(d[0][0], 0, 0);
//
//		while (!q.empty()) {
//			int a, b, L; tie(L, a, b) = q.top(); q.pop();
//
//			Adj(a - 1, b); Adj(a, b - 1);
//			Adj(a + 1, b); Adj(a, b + 1);
//		}
//		return d.back().back();
//	}
//};
//
//int main() {
//	vector<vector<int>> A = { { 0,2 },{ 1,3 } };// { { 0,1,2,3,4 },{ 24,23,22,21,5 },{ 12,13,14,15,16 },{ 11,17,18,19,20 },{ 10,9,8,7,6 } };
//	class Solution az;
//	cout<<az.swimInWater(A);
//	system("pause");
//	return 0;
//} 