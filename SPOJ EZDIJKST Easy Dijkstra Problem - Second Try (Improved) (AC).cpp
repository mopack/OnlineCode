//#include <iostream>
//#include <cstdlib>
//
//#define min(a,b) (((a) < (b)) ? (a) : (b))
//
//using namespace std;
//
//unsigned int a[10009][10009],d[10009],s[10009];
//unsigned const int oo = 2147483647;
//
//int  cast, nn, mm, x, y, t, u,v;
//
//int main() {
//	cin >> cast;
//	while (cast--) {
//		// input
//		cin >> nn >> mm;
//		for (int i = 0; i <= nn; i++) {
//			for (int j = 0; j <= nn; j++) {
//				if (i == j)
//					a[i][j] = 0;
//				else
//					a[i][j] = oo;
//			}
//		}
//
//		while(mm--) {
//			cin >> x >> y>>t; 
//			a[x][y] = t;
//		}
//		cin >> x >> y;
//
//		//init s
//		for (int i = 1; i <= nn; i++)s[i] = i;
//		s[0] = nn;
//		
//		// init d
//		for (int i = 1; i <= nn; i++)d[i] = a[x][i];
//		u = x;
//
//		while (s[0]) {
//			// find u(in s): min(d[u])
//			int smalli=-1, smallv= oo;
//			for (int i = 1; i <= s[0]; i++) {
//				v = s[i];
//				if (smallv > d[v]) {
//					smallv = d[v];
//					smalli = i;
//				}
//			}
//
//			// not found
//			if (smalli == -1)break;
//
//			//remove u;
//			u = s[smalli];
//			s[smalli] = s[s[0]--];
//
//			//for every v connnected to u, adjust it.
//			for (int v = 1; v <= nn; v++) {
//				if (a[u][v]!=oo) {
//					d[v] = min(d[v], d[u] + a[u][v]);
//				}
//			}
//		}
//
//		if (d[y] == oo) cout << "NO" << endl;
//		else cout << d[y] << endl;
//	}
//	return 0;
//}