// V1
//#include <iostream>
//#include <vector>
//#include <queue>
//#include <tuple>
//#include <climits>
//#include <functional>
//using namespace std;
//typedef pair<int, int> pii;
//int main() {
//	int N, EN, TaskN = 0, x, y, Len;
//	while (cin >> N >> EN && N) {
//		vector<vector<pii>>g(N + 1);
//		while (EN--) {
//			cin >> x >> y >> Len;
//			g[x].push_back({ Len, y });
//			g[y].push_back({ Len, x });
//		}
//		vector<int>d(N + 1, INT_MAX);
//		d[1] = 0;
//		priority_queue<pii, vector<pii>, greater<pii>> q;
//		q.push({ 0, 1 });
//
//		while (!q.empty()) {
//			x = q.top().second; q.pop();
//			for (auto &p : g[x]) {
//				tie(Len, y) = p;
//				if (d[y] > d[x] + Len ) {
//					d[y] = d[x] + Len;
//					q.push({ d[y], y });
//				}
//			}
//		}
//
//		int L = 1, R = -1; double mv = 0;
//		for (x = 1; x <= N; x++){
//			if (d[x] > mv) L = x, mv = d[x];
//		}
//		for (x = 1; x <= N; x++) {
//			for (auto &p : g[x]) {
//				tie(Len, y) = p;
//				if (d[x] != INT_MAX && d[y] != INT_MAX) {
//					double T = (d[x] + d[y] + Len) / 2.0;
//					if (T > mv) mv = T, L = x, R = y;
//				}
//			}
//		}
//
//		printf("System #%d\n", ++TaskN);
//		if (R == -1)
//			printf("The last domino falls after %.1lf seconds, at key domino %d.\n\n", mv, L);
//		else
//			printf("The last domino falls after %.1lf seconds, between key dominoes %d and %d.\n\n", mv, L, R);
//	}
//	return 0;
//}

//V2 68Lines
//#include <cstdio>
//#include <tuple>
//#include <vector>
//#include <iostream>
//#include <cstring>
//#include <climits>
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//#define min(a,b) (((a) < (b)) ? (a) : (b))
//using namespace std;
//typedef pair<int, int> pii;
//int main() {
//	int N, EN, TaskCount = 0, x, y, Len;
//	while (cin >> N >> EN && N) {
//		vector<vector<pii>> g(N+1);
//		while(EN--){
//			cin >> x >> y >> Len;
//			g[x].push_back({ Len, y });
//			g[y].push_back({ Len, x });
//		}
//		vector<int>d(N + 1, INT_MAX);
//		d[1] = 0;
//		vector<int>s(N + 1);
//		for (int i = 1; i <= N; i++) s[i] = i;
//		s[0] = N;
//
//		while (1) {
//			int mi = -1, mv = INT_MAX;
//			for (int i = 1; i <= s[0]; i++) {
//				x = s[i];
//				if (d[x] < mv) mv = d[x], mi = i;
//			}
//
//			if (mi == -1) break;
//			x = s[mi];
//			s[mi] = s[s[0]--];
//
//			for (int i = 0; i < g[x].size(); i++) {
//				tie(Len, y) = g[x][i];
//				d[y] = min(d[y], d[x] + Len);
//			}
//		}
//
//		// Compare
//		int L = 1, R = -1; double mv = 0;
//		for (int x = 1; x <= N; x++) {
//			if (d[x] != INT_MAX && d[x] > mv) {
//				mv = d[x], L = x;
//			}
//		}
//		for (x = 1; x <= N; x++) {
//			for (int i = 0; i < g[x].size(); i++) {
//				tie(Len, y) = g[x][i];
//				int t1 = max(d[x], d[y]), t2 = min(d[x], d[y]);
//				double T = t2 + (Len + t1 - t2) / 2.0;
//				if (t1 != INT_MAX && t2 != INT_MAX && T > mv) {
//					L = x, R = y, mv = T;
//				}
//			}
//		}
//
//		printf("System #%d\n", ++TaskCount);
//		if (R == -1)
//			printf("The last domino falls after %.1lf seconds, at key domino %d.\n\n", mv, L);
//		else
//			printf("The last domino falls after %.1lf seconds, between key dominoes %d and %d.\n\n", mv, L, R);
//	}
//	return 0;
//}