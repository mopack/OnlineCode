//#include <iostream>
//#include <cstdlib>
//
//using namespace std;
//
//int main() {
//	int set[20], n, k, pos;
//	while (cin >> n>>k && n) {
//		for (int i = 0; i < k; i++)set[i] = i + 1;		
//		cout << endl << "{" << set[0];
//		for (int i = 1; i < k; i++) cout << "," << set[i];
//		cout << "}";
//		pos = k - 1;
//		while (1) {
//			if (set[k - 1] == n) pos--;
//			else                 pos = k - 1;
//			set[pos]++;
//			for (int i = pos + 1; i < k; i++) set[i] = set[i - 1] + 1;
//			cout << endl << "{" << set[0];
//			for (int i = 1; i < k; i++)cout << "," << set[i];
//			cout << "}";
//			if (set[0] >= n - k + 1) break;
//		}
//	}
//	return 0;
//}