//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//// 0ms / PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	void sortColors(vector<int>&A) { //0,1,2
//		int s = 0, m = 0, e = A.size() - 1;
//		while (m <= e) {
//			if (A[m] == 1) m++;
//			else if (A[m] == 0) {
//				swap(A[s], A[m]);
//				s++, m++;
//			}else{
//				while (m < e && A[e] == 2) e--;
//				swap(A[m], A[e]);
//				e--;
//			}
//		}
//	}
//};
//
//int main() {
//	class Solution az;
//	vector<int> x = { 2,0,2,1,1,0 };
//	az.sortColors(x);
//	system("pause");
//	return 0;
//} 