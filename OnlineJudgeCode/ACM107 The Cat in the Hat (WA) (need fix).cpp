//#include <iostream>
//#include <cstdlib>
//
//using namespace std;
//
////               n    m
//unsigned int p[65537][33]; //0~4294967295 65536^2=4294967296
//
//int main() {
//	//p[1][1] = 4294967295;
//	//cout << p[1][1];
//	//system("pause"); return 0;
//
//	for (int n = 2; n <= 65535; n++) {
//		p[n][1] = n;
//		for (int m = 2; 1 ; m++) {
//			if (p[n][m - 1] >= 2147483647 / n)break;
//			p[n][m] = p[n][m - 1] * n;
//		}
//	}
//
//	unsigned int h, b, m, n;
//	while (cin >> h >> b) {
//		if (h == 0)break;
//
//		if (b == 1) {
//			n = 1; // n+1 = 2
//			for (m = 1; 1; m++){
//				if (p[2][m] == h)break;
//			}
//			cout << m << ' ' << h*(n+1) - 1 << endl;
//		}
//		else {
//			for (n = 2; 1; n++){
//				for (m = 1; 1; m++){
//					if (p[n][m - 1] >= 4294967295 / n)break;
//					if (p[n][m] == b && p[n + 1][m] == h)goto getit;
//				}
//			}
//		getit:
//			cout << (b - 1) / (n - 1) << ' ' << h * (n + 1) - n* b << endl;
//		}
//	}
//	return 0;
//}