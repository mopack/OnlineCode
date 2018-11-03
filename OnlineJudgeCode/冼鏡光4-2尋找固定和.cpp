//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//
//int main() {
//	vector<int>x = { 3,7,2,4 };
//	vector<int>y = { 1,5,2,3 };
//	int ask = 9;
//
//	sort(x.begin(), x.end());
//
//	for (int i = 0; i < y.size(); i++) {
//		int target = ask - y[i];
//		// binary search
//		if (target < x[0])continue;
//		int start = 0, end = x.size() - 1, mid;
//		while (start < end) {
//			mid = (start + end) / 2;
//			if (target > x[mid]) {
//				start = mid + 1;
//			}else if(target < x[mid]){
//				end = mid - 1;
//			}else{
//				printf("%d+y[%d](%d)=%d\n", x[mid],i, y[i], ask);
//				goto NEXT;
//			}
//		}
//		if (x[start] == target) {
//			printf("%d+y[%d](%d)=%d\n", x[start], i, y[i], ask);
//		}
//	NEXT:;
//	}
//
//	system("pause");
//	return 0;
//}