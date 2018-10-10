// 0.00s/16M
//#include <iostream>
//#include <vector>
//#include <climits>
//#define min(a,b) (((a) < (b)) ? (a) : (b))
//using namespace std;
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	int Count, N, EN, x, y, z;
//	cin >> Count;
//	while (Count--) {
//		cin >> N >> EN;
//		vector<vector<pair<int, int>>>g(N + 1); // (to, weight)
//		while (EN--) {
//			cin >> x >> y >> z;
//			g[x].push_back({ y, z });
//			//g[y].push_back({ x, z }); //!!
//		}
//		
//		cin >> x >> y;
//		vector<int>d(N + 1, INT_MAX), s(N + 1);
//		d[x] = 0;
//		for (int i = 1; i <= N; i++) s[i] = i;
//
//		while (s.size()>1) {
//			int mv = INT_MAX, mi = -1, u, v, w;
//			for (int i = 1; i != s.size(); i++) {
//				u = s[i];
//				if (d[u] < mv) mv = d[u], mi = i;
//			}
//
//			if (mi == -1) break; // not connnected
//			u = s[mi];
//			s[mi] = s.back(); s.pop_back();
//
//			for (auto &p : g[u]) {
//				d[p.first] = min(d[p.first], d[u] + p.second);
//			}
//		}
//		if (d[y] == INT_MAX) cout << "NO\n";
//		else cout << d[y] << '\n';
//	}
//}

//0.00s/16M
//#include <iostream>
//#include <vector>
//#include <climits>
//#include <queue>
//#include <functional>
//#include <tuple>
//using namespace std;
//typedef pair<int, int> pii;
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	int Count, N, EN, x, y, z;
//	cin >> Count;
//	while (Count--) {
//		cin >> N >> EN;
//		vector<vector<pii>>g(N + 1); // (weight, to)
//		while (EN--) {
//			cin >> x >> y >> z;
//			g[x].push_back({ z, y });
//		}
//
//		cin >> x >> y;
//		vector<int>d(N + 1, INT_MAX);
//		d[x] = 0;
//		priority_queue<pii, vector<pii>, greater<pii>>q; // (w, to)
//		q.push({ 0, x });
//
//		while (!q.empty()) {
//			 int u = q.top().second, v, len; q.pop();
//			for (auto &p : g[u]) {
//				tie(len, v) = p;
//				if (d[v] > len + d[u]) {
//					d[v] = len + d[u];
//					q.push({d[v], v});
//				}
//			}
//		}
//		if (d[y] == INT_MAX) cout << "NO\n";
//		else cout << d[y] << '\n';
//	}
//	return 0;
//}

//#include <iostream>
//#include <vector>
//#include <queue>
//#include <functional>
//#include <tuple>
//#include <climits>
//using namespace std;
//int main() {
//	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	int TaskN, N, EN;
//	cin >> TaskN;
//	while (TaskN--) {
//		cin >> N >> EN;
//		vector<vector<pair<int, int>>> G(N + 1); // weight, to
//		int x, y, len, s, e;
//		while (EN--) {
//			cin >> x >> y >> len;
//			G[x].emplace_back(len, y);
//		}
//
//		vector<int>d(N + 1, INT_MAX);
//		priority_queue <pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>q; // d[x], x
//		cin >> s >> e;
//		q.emplace(0, s); d[s] = 0;
//
//		while (!q.empty()) {
//			x = q.top().second; q.pop();
//			for (auto &p : G[x]) {
//				tie(len, y) = p;
//				int NewD = d[x] + len;
//				if (NewD < d[y]) {
//					d[y] = NewD; q.emplace(d[y], y);
//				}
//			}
//		}
//
//		if (d[e] == INT_MAX) cout << "NO\n";
//		else cout << d[e] << '\n';
//	}
//	return 0;
//}