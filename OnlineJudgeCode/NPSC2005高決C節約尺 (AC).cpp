//#include <iostream>
//#include <cstdlib>
//
//using namespace std;
//
//int n, a[21], total;
//bool is[401];
//
//int main() {
//	freopen("pc.in", "rt", stdin); freopen("pc.out", "wt", stdout);
//	while (cin >> n) {
//		if (n == 0)break;
//
//		// input
//		int total = 0;
//		for (int i = 1; i <= n; i++) {
//			cin >> a[i];
//			total += a[i];
//		}
//		if (total == n) {
//			cout << "NO\n";
//			continue;
//		}
//
//		// run ruler
//		memset(is, 0, sizeof(is));
//
//		for (int i = 1; i <= n; i++) {
//			int sum = 0;
//			for (int j = i; j <= n; j++) {
//				sum += a[j];
//				is[sum] = 1;
//			}
//		}
//
//		// check
//		bool allyes = 1;
//		for (int i = 1; i <= total; i++) {
//			if (is[i] == 0) {
//				allyes = 0;
//				break;
//			}
//		}
//		cout << ((allyes) ? "YES" : "NO") << endl;
//	}
//	return 0;
//}