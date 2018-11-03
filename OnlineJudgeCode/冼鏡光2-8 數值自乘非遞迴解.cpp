//#include <iostream>
//#include <cstdlib>
//using namespace std;
//typedef unsigned long ul;
//
//int main() {
//	ul ans, m, n;
////	while (cin >> m >> n && m) {
////		ul temp = 1;
////		while (n > 0) {
////			if (n & 0x01UL == 1) temp *= m;
////			m *= m; n >>= 1;
////		}
////		cout << temp << endl;
////	}
////	
////	 My Rewrite
//	while (cin >> m >> n && m) {
//		for (ans = 1; n > 0; m *= m, n >>= 1) if(n&1)ans *= m;
//		cout << ans << endl;
//	}
//	return 0;
//}