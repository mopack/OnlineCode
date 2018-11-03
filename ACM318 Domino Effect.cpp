//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//#define min(a,b) (((a) < (b)) ? (a) : (b))
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//
//using namespace std;
//
//// core dataset (for dijkstra)
//double a[501][501], d[501];
//int s[501];
//
//inline void removes(int index) {
//	s[index] = s[s[0]--];
//	return;
//}
//
//// dataset (for edge comparison)
//struct Edge {
//	int u, v; 
//	double len;
//	
//	Edge(){}
//	Edge(int uu, int vv, double ll) {
//		u = uu; v = vv; len = ll;
//	}
//}edge[250001];
//
//// input data
//int nn, mm;
//
//// const & counter
//double const oo = 2e9;
//int syscount;
//
//int main() {
//	syscount = 0;
//	while (cin >> nn >> mm) {
//		if (nn == 0 && mm == 0)break;
//
//		// init (clear)
//		for (int i = 1; i <= nn; i++) {
//			for (int j = 1; j <= nn; j++) {
//				a[i][j] = (i == j) ? 0 : oo;
//			}
//		}
//		
//
//		// input
//		int u, v; double t;
//		for (int i = 1; i <= mm; i++) {
//			cin >> u >> v >> t;
//			edge[i] = Edge(u, v, t);
//			a[u][v] = a[v][u] = t;
//		}
//
//		// init s. put all vertices as starters into s
//		for (int i = 1; i <= nn; i++)s[i] = i;
//		s[0] = nn;
//
//		// remove the start point 1
//		u = 1;
//		removes(1);
//
//		// init d.
//		for (int i = 1; i <= nn; i++)d[i] = a[1][i];
//		
//
//		// check every elements in s (dijkstra's algorithm)
//		while (s[0]) {
//			// find the smallest
//			int smalli = 0; double smallv = oo;
//			for (int i = 1; i <= s[0]; i++) {
//				v = s[i];
//				d[v] = min(d[v], d[u] + a[u][v]);
//
//				if (d[v] < smallv) {
//					smallv = d[v];
//					smalli = i;
//				}
//			}
//
//			// not found, meaning disconnected
//			if (smalli == 0)break;
//
//			// remove smalli
//			u = s[smalli];
//			removes(smalli);
//			
//		}
//
//		// find the maximum in d
//		int bigdi = 0;
//		double bigdv = 0;
//		for (int i = 1; i <= nn; i++) {
//			if (d[i]!=oo && d[i] > bigdv) {
//				bigdv = d[i];
//				bigdi = i;
//			}
//		}
//
//		// find the maximum in every edge
//		int bigei = 0;
//		double bigev=0;
//
//		double diff, edgev;
//		for (int i = 1; i <= mm; i++) {
//			diff = abs(d[edge[i].u] - d[edge[i].v]);
//			if (diff < edge[i].len) {
//				edgev = (edge[i].len - diff) / 2.0 + max(d[edge[i].u], d[edge[i].v]);
//				//edgev = (d[edge[i].v] + d[edge[i].u] + edge[i].len) / 2.0;
//				if (d[edge[i].v]!=oo && d[edge[i].u]!=oo && edgev > bigev) {
//					bigev = edgev;
//					bigei = i;
//				}
//			}
//		}
//
//		// max d, max edge pick the bigger one
//		printf("System #%d\nThe last domino falls after ", ++syscount);
//
//		if (bigdv > bigev) { // at vertex
//			printf("%.1f seconds, at key domino %d.\n\n", bigdv, bigdi);
//		} else { // at edge
//			int ss = min(edge[bigei].u, edge[bigei].v);
//			int bb = max(edge[bigei].u, edge[bigei].v);
//			printf("%.1f seconds, between key dominoes %d and %d.\n\n", bigev, ss, bb);
//		}
//	}
//
//	return 0;
//}