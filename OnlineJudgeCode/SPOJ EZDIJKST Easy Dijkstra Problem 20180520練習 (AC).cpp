//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <cstring>
//
//#define min(a,b) (((a) < (b)) ? (a) : (b))
//
//using namespace std;
//
//int const oo = 2147483647;
//int len[10001][10001];
//vector<int> con[10001];
//int n, m, tasknum;
//int s[10001], d[10001];
//
//int main() {
//	cin >> tasknum;
//	while (tasknum--) {
//		cin >> n >> m;
//		
//		for (int i = 1; i <= n; i++){
//			con[i].clear();
//			for (int j = 1; j <= n; j++) {
//				if (i == j) {
//					len[i][j] = 0;
//				}
//				else {
//					len[i][j] = oo;
//				}
//			}
//		}
//
//		int x, y, z;
//		while (m--) {
//			cin >> x >> y >> z;
//			len[x][y] = z;
//			con[x].push_back(y);
//		}
//		cin >> x >> y;
//
//		for (int i = 1; i <= n; i++)d[i] = len[x][i];
//		for (int i = 1; i <= n; i++)s[i] = i;
//		s[0] = n;
//
//		// dijk
//		while (1) {
//			int smalli = -1, smallv = oo;
//			for (int i = 1; i <= s[0]; i++) {
//				if (smallv > d[s[i]]) {
//					smalli = i;
//					smallv = d[s[i]];
//				}
//			}
//
//			if (smalli == -1)break;
//
//			int u = s[smalli], v;
//			s[smalli] = s[s[0]--];
//
//			for (int i = 0; i < con[u].size(); i++) {
//				v = con[u][i];
//				d[v] = min(d[v], d[u] + len[u][v]);
//			}
//		}
//
//		if (d[y] != oo)cout << d[y] << endl;
//		else cout << "NO\n";
//	}
//
//	//system("pause");
//	return 0;
//}