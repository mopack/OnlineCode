//#include <iostream>
//#include <cstdlib>
//#include <vector>
//
//using namespace std;
//
//vector<int> code, maxi;
//int n;
//
//
//int main() {
//	while (cin >> n && n) {
//		code.clear(); maxi.clear();
//		for (int i = 0; i < n; i++) {
//			code.push_back(1); maxi.push_back(2);
//		}
//
//		while (1) {
//			// display
//			cout << endl;
//			for (int i = 0; i < n; i++) printf("%3d", code[i]);
//
//			int i;
//			for (i = n - 1; code[i] == maxi[i]; i--);
//
//			if (i > 0) {
//				code[i]++;
//				for (int j = i + 1; j < n; j++) {
//					code[j] = 1;
//					maxi[j] = maxi[i] + ((code[i] == maxi[i]) ? 1 : 0);
//				}
//			}
//			else
//				break;
//		}
//	}
//	return 0;
//}