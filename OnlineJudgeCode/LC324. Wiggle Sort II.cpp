//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//
////48ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//#define X(i) A[(2 *(i) + 1) % ( N | 1)]
//	void wiggleSort(vector<int>& A) {
//		int N = A.size(), i = 0, j = 0, k = N - 1;
//		auto pMid = A.begin() + N / 2;
//		nth_element(A.begin(), pMid, A.end());
//		int Mid = *pMid;
//		while (j <= k) {
//			if (X(j) > Mid) swap(X(i++), X(j++));
//			else if (X(j) < Mid) swap(X(j), X(k--));
//			else j++;
//		}
//	}
//};
//// 52ms/PR99
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	void wiggleSort(vector<int>& A) {
//		vector<int>B(A);
//		sort(B.begin(), B.end());
//		int N = A.size(), j = N, k = (N + 1) / 2;
//		for (int i = 0; i < N; i++) {
//			A[i] = B[ (i & 1) ? --j : --k ];
//		}
//	}
//};
//int main() {
//	class Solution az;
//	system("pause");
//	return 0;
//} 
//
//
