//#include <iostream>
//#include <cstdlib>
//
//using namespace std;
//
//int main() {
//	int perm[20], n, last;
//	int left, right;
//	
//	while (cin >> n) {
//		if (n == 0)break;
//
//		for (int i = 0; i < n; i++)perm[i] = i + 1;
//
//		for (last = 0; last >= 0; ) {
//			cout << endl;
//			for (int i = 0; i < n; i++)cout << perm[i] << ' ';
//
//			for (last = n - 2; last >= 0 && perm[last] > perm[last + 1]; last--);
//
//			int j;
//			for (j = n - 1; perm[last] > perm[j]; j--);
//			swap(perm[last], perm[j]);
//
//			for (left = last + 1, right = n - 1; left < right; left++, right--)
//				swap(perm[left], perm[right]);
//		}
//
//	}
//
//	return 0;
//}