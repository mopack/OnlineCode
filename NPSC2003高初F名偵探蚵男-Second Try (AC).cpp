//#include <iostream>
//#include <cstdlib>
//
//using namespace std;
//
//unsigned int a[10001];
//int n, p, k;
//
//int main() {
//	freopen("pf.in", "rt", stdin); freopen("pf.out", "wt", stdout);
//
//	while (cin >> n >> p) {
//		if (n == 0 && p == 0)break;
//		memset(a, 0, sizeof(a));
//
//		a[0] = 1;
//		for (int i = 1; i <= n; i++) {
//			cin >> k;
//			for (int j = k; j <= p; j++) {
//				a[j] += a[j - k];
//			}
//		}
//
//		cout << a[p] << endl;
//	}
//	return 0;
//}