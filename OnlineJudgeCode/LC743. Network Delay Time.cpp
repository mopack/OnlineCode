//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//struct Node {
//	int n;
//	int u[109], w[109];
//	Node() { n = 0; }
//};
//class Solution {
//public:
//	int networkDelayTime(vector<vector<int>>& times, int N, int K) {
//		Node ad[109];
//		int d[109], s[109];
//
//		for (int i = 0; i < times.size(); i++) {
//			ad[times[i][0]].n++;
//			ad[times[i][0]].u[ad[times[i][0]].n] = times[i][1];
//			ad[times[i][0]].w[ad[times[i][0]].n] = times[i][2];
//		}
//		for (int i = 1; i <= N; i++)s[i] = i; s[0] = N;
//		for (int i = 1; i <= N; i++)d[i] = 2147483647;
//		for (int i = 1; i <= ad[K].n; i++) d[ad[K].u[i]] = ad[K].w[i]; d[K] = 0;
//
//		while (s[0]) {
//			// find smallest u
//			int ui = -1, du = 2147483647, u, v;
//			for (int i = 1; i <= s[0]; i++) {
//				v = s[i];
//				if (d[v] < du) { ui = i; du = d[v]; }
//			}
//			if (ui == -1)break;
//			// remove u
//			u = s[ui];
//			s[ui] = s[s[0]--];
//			// adjust u's nabor
//			for (int i = 1; i <= ad[u].n; i++) {
//				v = ad[u].u[i];
//				d[v] = min(d[v], du + ad[u].w[i]);
//			}
//		}
//
//		int ma = -2147483647; ma--;
//		for (int i = 1; i <= N; i++) {
//			ma = max(ma, d[i]);
//		}
//		return (ma == 2147483647) ? (-1) : ma;
//	}
//}az;
//
//int main() {
//	vector<vector<int>> times = { { 2,1,1 },{ 2,3,1 },{ 3,4,1 } };
//	az.networkDelayTime(times, 4, 2);
//
//	system("pause");
//	return 0;
//} 

//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <queue>
//#include <functional>
//#include <climits>
//#include <tuple>
//using namespace std;
//// 24ms / PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//using pii = pair<int, int>;
//class Solution {
//public:
//	int networkDelayTime(vector<vector<int>>& times, int N, int K) {
//		vector<vector<pii>> g(N+1);
//		for (auto &t : times)
//			g[t[0]].emplace_back(t[2], t[1]);
//
//		vector<int>d(N + 1, INT_MAX);
//		priority_queue < pii, vector<pii>, greater<pii>>q;
//		d[K] = 0; q.push({ 0, K });
//		while (!q.empty()) {
//			int x = q.top().second, y, len; q.pop();
//			for (auto &p : g[x]) {
//				tie(len, y) = p;
//				if (d[y] > d[x] + len) {
//					d[y] = d[x] + len;
//					q.emplace(d[y], y);
//				}
//			}
//		}
//
//		int Ans = *max_element(d.begin() + 1, d.end());
//		return (Ans == INT_MAX) ? (-1) : Ans;
//	}
//};
//int main() {
//	class Solution az;
//	vector<vector<int>> x = { { 2,1,1 },{ 2,3,1 },{ 3,4,1 } };
//	az.networkDelayTime(x, 4, 2);
//	system("pause");
//	return 0;
//} 