//// prim practice
//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//using namespace std;
//
//struct edge {
//	int u, v, w;
//}e[200001];
//
//int tt,nn, mm;
//bool ismilk[100001];
//
//int s[200001]; // comsiderable edges
//int check[100001]; // min spanning tree's vertex
//int te[200001]; // min spanning tree's edges
//
//int main() {
//	cin >> tt;
//	while (tt--) {
//		// input
//		cin >> nn >> mm;
//
//		check[0] = 0;
//		for (int i = 1; i <= nn; i++){
//			cin >> ismilk[i];
//			if (ismilk[i]) {
//				check[i] = 1;
//				check[0]++;
//			}else{
//				check[i] = 0;
//			}
//		}
//		for (int i = 1; i <= mm; i++) {
//			cin >> e[i].u >> e[i].v >> e[i].w;
//		}
//
//		// init min spanning tree
//		for (int i = 1; i <= mm; i++) te[i] = 0;
//
//		// add milkmen's connected edges to s
//		s[0] = 0;
//		for (int i = 1; i <= mm; i++) {
//			if (ismilk[e[i].u] || ismilk[e[i].v]) {
//				s[i] = 1;
//				s[0]++;
//			}else{
//				s[i] = 0;
//			}
//		}
//
//		while (check[0] < nn && s[0] > 0) {
//			// pick the smallest edge in s
//			int smalli = -1, smallv = 2147483647;
//			for (int i = 1; i <= mm; i++) {
//				if (s[i] && smallv > e[i].w) {
//					smalli = i; smallv = e[i].w;
//				}
//			}
//
//			// add to the min spaning tree
//			te[smalli] = 1;
//
//			// remove smalli in s
//			s[smalli] = 0;
//			s[0]--;
//
//			// set checkpoint as another side's vertex
//			int checkpoint;
//			if (check[e[smalli].u]) {
//				check[e[smalli].v] = 1;
//				check[0]++;
//				checkpoint = e[smalli].v;
//			}
//			else {
//				check[e[smalli].u] = 1;
//				check[0]++;
//				checkpoint = e[smalli].u;
//			}
//
//			// add one-side uncheck & connected to checkpoint edges to s
//			for (int i = 1; i <= mm; i++) {
//				if ((e[i].u == checkpoint && check[e[i].v] == 0) || (e[i].v == checkpoint && check[e[i].u] == 0)) {
//					s[i] = 1;
//					s[0]++;
//				}
//			}
//		}
//
//		if (check[0] < nn) {
//			cout << "impossible\n";
//		}else{
//			unsigned long sum = 0;
//			for (int i = 1; i <= mm; i++) {
//				if (te[i])sum += e[i].w;
//				//cout << te[i] << endl;
//			}
//			cout << sum << endl;
//		}
//
//	}
//
//	return 0;
//}