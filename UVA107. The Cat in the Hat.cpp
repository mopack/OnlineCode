//#include <iostream>
//#include <cmath>
//using namespace std;
////Sol: . Present: AC: 16Lines/350ms
//int main() {
//	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	int H0, N0, n, k; double x;
//	while (cin >> H0 >> N0 && H0) {
//		if (N0 == 1) {
//			k = log(H0) / log(2) + 1e-6;
//			cout << k << ' ' << 2*H0 - 1 << '\n';
//		}else {
//			x = log(N0) / log(H0);
//			for (n = 1; abs(log(n) / log(n + 1) - x) > 1e-12; n++);
//			cout << (N0 - 1) / (n - 1) << ' ' << H0*(n+1) - N0*n << '\n';
//		}
//	}
//	return 0;
//}