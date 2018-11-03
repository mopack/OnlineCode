//#include <iostream>
//#include <cstdlib>
//
//using namespace std;
//
//int Next[101], Back[101], ID[101], n, m, t, last, u;
//
//inline void Remove() {
//	int ori, B, N;
//
//	ori = t;
//	B = Back[ori]; N = Next[ori];
//	Next[B] = N;
//	Back[N] = B;
//
//	// ID
//	for (int i = 1; i <= m; i++)t = Next[t];
//	//printf("changer: %d\n", t);
//	ID[ori] = ID[t];
//	ID[t] = 0;
//	
//	// give ori's N/B back
//	Next[B] = ori;
//	Back[N] = ori;
//
//	// kill-t
//	B = Back[t]; N = Next[t];
//	Next[B] = N;
//	Back[N] = B;
//	
//	//
//	t = ori;
//}
//int main() {
//	while (1) {
//		cin >> n >> m;
//		if (n == 0)break;
//
//		for (u = 1; u <= n; u++) {
//			for (int j = 1; j <= n; j++)ID[j] = j;
//			for (int j = 1; j <= n - 1; j++)Next[j] = j + 1;
//			Next[n] = 1;
//			for (int j = 2; j <= n; j++)Back[j] = j - 1;
//			Back[1] = n;
//
//			t = Back[u];
//			last = n;
//			//for (int i = 1; i <= n; i++)cout << Back[i] << ' '; cout << endl;
//			//for (int i = 1; i <= n; i++)cout << Next[i] << ' '; cout << endl;
//			//for (int i = 1; i <= n; i++)cout << ID[i] << ' '; cout << endl;
//
//			while (last > 1) {
//				for (int i = 1; i <= m; i++)t = Next[t];
//				Remove();
//				last--;
//				//printf("u=%d t=%d\n", u, t);
//				//for (int i = 1; i <= n; i++)cout << Back[i] << ' '; cout << endl;
//				//for (int i = 1; i <= n; i++)cout << Next[i] << ' '; cout << endl;
//				//for (int i = 1; i <= n; i++)cout << ID[i] << ' '; cout << endl;
//			}
//			//printf("end: u=%d t=%d ID[t]=%d\n", u, t, ID[t]);
//			if (ID[t] == 1) {
//				cout << u << endl;
//				break;
//			}
//		}
//	}
//
//	return 0;
//}