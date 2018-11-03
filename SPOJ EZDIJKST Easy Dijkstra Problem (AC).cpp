//#include <iostream>
//#include <cstdlib>
//
//#define min(a,b) (((a) < (b)) ? (a) : (b))
//
//using namespace std;
//
//unsigned int a[10009][10009],d[10009],s[10009];
//int  cast, nn, mm, x, y, t, u,v;
//
//inline void removes(int index) {
//	s[index] = s[s[0]--];
//	return;
//}
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
//					a[i][j] = 2147483647;
//			}
//		}
//
//		while(mm--) {
//			cin >> x >> y>>t; 
//			a[x][y] = t; //direct 有向圖，非無向圖
//		}
//		cin >> x >> y;
//
//		//init
//		for (int i = 1; i <= nn; i++)s[i] = i;
//		s[0] = nn;
//		removes(x);
//		
//		for (int i = 1; i <= nn; i++)d[i] = a[x][i];
//		u = x;
//
//		while (s[0]) {
//			// find smallest elements in s
//			int smalli=-1, smallv=2147483647;
//			for (int i = 1; i <= s[0]; i++) {
//				v = s[i];
//				d[v] = min(d[v], d[u] + a[u][v]);
//				if (smallv > d[v]) {
//					smallv = d[v];
//					smalli = i;
//				}
//			}
//
//			//remove smalli;
//			if (smalli == -1) {
//				break;
//			}
//			else {
//				u = s[smalli];
//				removes(smalli);
//			}
//		}
//
//		if (d[y] == 2147483647) {
//			cout << "NO" << endl;
//		}
//		else {
//			cout << d[y] << endl;
//		}
//	}
//	//system("pause");
//	return 0;
//}