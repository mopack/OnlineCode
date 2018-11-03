//#include <cstdio>
//#include <vector>
//#include <iostream>
//#include <cstring>
//#define min(a,b) (((a) < (b)) ? (a) : (b))
//using namespace std;
//
//// core dataset (for dijkstra)
//int len[501][501];	  //graph
//vector<int> con[501]; //graph
//double d[501];
//
//int s[501];
//
//// input data
//int n, m, TaskCount;
//
//// counter & const
//double const oo = 2e9;
//
//int main() {
//	TaskCount = 0;
//	while (cin >> n >> m && n) {
//		// init (clear)
//		memset(con, 0, sizeof(con));
//
//		// input
//		for (int i = 1; i <= m; i++) {
//			int u, v, t;
//			cin >> u >> v >> t;
//			len[u][v] = len[v][u] = t;
//			con[u].push_back(v);
//			con[v].push_back(u);
//		}
//
//		// init d.
//		for (int i = 1; i <= n; i++) {
//			d[i] = oo;
//		}
//		d[1] = 0;
//		
//		// init s
//		for (int i = 1; i <= n; i++) {
//			s[i] = i;
//		}
//		s[0] = n;
//
//		// dijkstra
//		int u, v;
//		while(1) {
//			// find the smallest in s as u
//			int si = 0; double sv = oo;
//			for (int i = 1; i <= s[0]; i++) {
//				u = s[i];
//				if (d[u] < sv) {
//					sv = d[u];
//					si = i;
//				}
//			}
//
//			// not found. end.
//			if (si == 0) break;
//
//			// remove u
//			u = s[si];
//			s[si] = s[s[0]--];
//			
//			// every vertex connnected to u must be changed
//			for (int i = 0; i < con[u].size(); i++) {
//				v = con[u][i];
//				d[v] = min(d[v], d[u] + len[u][v]);
//			}
//		}
//
//		// compare
//		int l = 1, r = -1;
//		double value = 0;
//		for (int a = 1; a <= n; a++) {
//			if (d[a] != oo && d[a] > value) {
//				value = d[a];
//				l = a;
//				r = -1;
//			}
//		}
//		for (int a = 1; a <= n; a++) {
//			for (int i = 0; i < con[a].size(); i++) {
//				int b = con[a][i];
//				int t1 = d[a], t2 = d[b];
//				if (t1 < t2) {
//					std::swap(t1, t2);
//				}
//				float endTime = t1 + (len[a][b] - (t1 - t2)) / 2.0;
//				if (t1 != oo && t2 != oo && endTime > value) {
//					l = a < b ? a : b;
//					r = a > b ? a : b;
//					value = endTime;
//				}
//			}
//		}
//
//		// output
//		printf("System #%d\n", ++TaskCount);
//		if (r == -1)
//			printf("The last domino falls after %.1lf seconds, at key domino %d.\n\n", value, l);
//		else
//			printf("The last domino falls after %.1lf seconds, between key dominoes %d and %d.\n\n", value, l, r);
//	}
//	return 0;
//}