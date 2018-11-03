//#include <iostream>
//#include <cstdlib>
//#include <vector>
//
//using namespace std;
//
//// input
//int n, x[50001];
//// dp
//int len, last[50001], pos[50001];
////vector<int>alis;
//
//int binarySearch(int target) {
//	if (target < last[1]) return 1;
//	int start = 1, end = len, mid;
//	while (start <= end) {
//		mid = (start + end) / 2;
//		if (target > last[mid])
//			start = mid + 1;
//		else if (target < last[mid])
//			end = mid - 1;
//		else
//			return mid;
//	}
//	return start;
//}
//
//
//int main() {
//	// input
//	cin >> n;
//	for (int i = 1; i <= n; i++)cin >> x[i];
//
//	// init
//	len = 1;
//	last[1] = x[1];
//	pos[1] = 1;
//
//	// lis
//	for (int i = 2; i <= n; i++) {
//		if (x[i] > last[len]) {
//			last[++len] = x[i];
//			pos[i] = len;
//		}
//		else {
//			int index = binarySearch(x[i]);
//			last[index] = x[i];
//			pos[i] = index;
//		}
//	}
//
//	//// alis
//	//alis.clear();
//	//for (int i = n, want = len; i >= 1; i--) {
//	//	if (pos[i] == want) {
//	//		alis.push_back(x[i]);
//	//		want--;
//	//	}
//	//}
//
//	//// output
//	//for (int i = alis.size() - 1; i >= 0; i--)cout << alis[i] << ' ';
//	//cout << endl;
//
//	cout << len << endl;
//
//	//system("pause");
//	return 0;
//}