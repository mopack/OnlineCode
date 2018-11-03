//#include <iostream>
//#include <cstdlib>
//
//using namespace std;
//
//int n, pos, perm[20];
//
//void inline rotate(int &p) {
//	int temp = perm[p];
//	for (int i = p - 1; i >= 0; i--) perm[i + 1] = perm[i];
//	perm[0] = temp;
//}
//
//int main() {
//	while (cin >> n) {
//		if (n == 0)break;
//
//		for (int i = 0; i < n; i++) perm[i] = i + 1;
//
//		pos = n - 1;
//		while (pos != 0) {
//			cout << endl;
//			for (int i = 0; i < n; i++)cout << perm[i] << ' ';
//
//			pos = n - 1;
//			rotate(pos);
//			while (perm[pos] == pos + 1 && pos != 0) {
//				pos--;
//				rotate(pos);
//			}
//		}
//	}
//
//	return 0;
//}