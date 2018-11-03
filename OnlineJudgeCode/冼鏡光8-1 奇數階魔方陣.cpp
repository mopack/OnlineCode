//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//// input & output data
//vector<vector<int>> m;
//int n;
//
//int main() {
//	while (cin >> n) {
//		// init
//		m.clear();
//		for (int i = 0; i < n; i++) m.push_back(vector<int>(n, 0));
//
//		int r = 0, c = n / 2;
//		for (int Count = 1; Count <= n * n; Count++) {
//			m[r][c] = Count;
//
//			if (Count % n == 0) { 
//				r++; // move down
//			}else{ //¥k¤W r-- c++
//				r = (r == 0) ? (n - 1) : (r - 1);
//				c = (c == n - 1) ? 0 : (c + 1);
//			}
//		}
//
//		// output
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < n; j++) cout << m[i][j] << '\t';
//			cout << endl;
//		}
//
//	}
//	system("pause");
//	return 0;
//}