//#include <stdio.h>  
//#include <stdlib.h>  
//
//double oo = 1e20;
//double maps[505][505];
//double dist[505];
//int    used[505];
//
//int main()
//{
//	int n, m, u, v, s, cases = 1;
//	while (~scanf("%d%d", &n, &m) && n) {
//		for (int i = 1; i <= n; ++i) {
//			for (int j = 1; j <= n; ++j) {
//				maps[i][j] = oo;
//			}
//			maps[i][i] = 0;
//		}
//		for (int i = 1; i <= m; ++i) {
//			scanf("%d%d%d", &u, &v, &s);
//			maps[u][v] = s;
//			maps[v][u] = s;
//		}
//
//		for (int i = 1; i <= n; ++i) {
//			dist[i] = oo;
//			used[i] = 0;
//		}
//		dist[1] = 0;
//		used[1] = 1;
//		int now = 1;
//		for (int i = 2; i <= n; ++i) {
//			for (int j = 2; j <= n; ++j) {
//				if (maps[now][j] && dist[j] > dist[now] + maps[now][j]) {
//					dist[j] = dist[now] + maps[now][j];
//				}
//			}
//
//			double min = oo;
//			for (int j = n; j >= 1; --j) {
//				if (!used[j] && dist[j] < min) {
//					now = j;
//					min = dist[j];
//				}
//			}
//			used[now] = 1;
//		}
//
//		double ans = dist[now];
//		int p1 = 1, p2 = 1, flag = 0;
//		for (int i = 1; i <= n; ++i) {
//			for (int j = i + 1; j <= n; ++j) {
//				if (maps[i][j] < oo && ans < 0.5*(dist[i] + dist[j] + maps[i][j])) {
//					ans = 0.5*(dist[i] + dist[j] + maps[i][j]);
//					p1 = i;
//					p2 = j;
//					flag = 1;
//				}
//			}
//		}
//
//		printf("System #%d\nThe last domino falls after %.1lf ", cases++, ans);
//		if (!flag) {
//			printf("seconds, at key domino %d.\n\n", now);
//		}
//		else {
//			printf("seconds, between key dominoes %d and %d.\n\n", p1, p2);
//		}
//	}
//
//	return 0;
//}
//
