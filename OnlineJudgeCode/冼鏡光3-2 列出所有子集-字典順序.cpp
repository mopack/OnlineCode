//#include <iostream>
//#include <cstdlib>
//
//using namespace std;
//
//int main() {
//	int set[20], n, pos;
//
//	while (cin >> n) {
//		if (n == 0)break;
//
//		cout << "\n{}";
//		pos = 0;
//		set[pos] = 1;
//
//		while (1) {
//			cout << "\n{" << set[0];
//			for (int i = 1; i <= pos; i++) cout << "," << set[i];
//			cout << "}";
//
//			if (set[pos] < n) {
//				set[pos + 1] = set[pos] + 1;
//				pos++;
//			}
//			else if (pos != 0)  set[--pos]++;
//			else break;			// first position
//				
//		}
//
//	}
//	return 0;
//}