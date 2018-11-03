//#include <iostream>
//#include <cstdlib>
//
//using namespace std;
//
//int Next[101], Back[101], n, m, k, last;
//
//inline void Remove() {
//	int B = Back[k], N = Next[k];
//	Next[B] = N;
//	Back[N] = B;
//	for (int i = 1; i <= m; i++)k = Next[k];
//}
//int main() {
//	while (1) {
//		cin >> n;
//		if (n == 0)break;
//
//		for (m = 1; m <= n; m++) {
//			for (int i = 1; i <= n - 1; i++)
//				Next[i] = i + 1;
//			Next[n] = 1;
//			for (int i = 2; i <= n; i++)
//				Back[i] = i - 1;
//			Back[1] = n;
//
//			k = 1;
//			last = n;
//
//			while (last > 1) {
//				Remove();
//				last--;
//				//printf("m=%d k=%d\n", m, k);
//			}
//			//printf("end: m=%d k=%d\n", m, k);
//			if (k == 13) {
//				cout << m << endl;
//				break;
//			}
//		}
//	}
//
//	return 0;
//}