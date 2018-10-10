//#include <iostream>
//#include <vector>
//using namespace std;
//
////4ms/PR99
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	void BT(int N, vector<int>&A, int &Count) { // Backtracking
//		if (N == 0) { Count++; return; }
//		for (int i = 1; i <= N; i++) {
//			if (N%A[i] == 0 || A[i] % N == 0) {
//				swap(A[i], A[N]);
//				BT(N - 1, A, Count);
//				swap(A[i], A[N]);
//			}
//		}
//	}
//	int countArrangement(int N) {
//		int Count = 0;
//		vector<int> A(N + 1);
//		for (int i = 1; i <= N; i++) A[i] = i;
//		BT(N, A, Count);
//		return Count;
//	}
//};
//
//// 78ms/PR78
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	void BT(int i, int N, vector<int>&A, int &Count) { // Backtracking
//		if (i == N + 1) { Count++; return; }
//		for (int k = i; k <= N; k++) {
//			if (i % A[k] == 0 || A[k] % i == 0) {
//				swap(A[i], A[k]);
//				BT(i + 1, N, A, Count);
//				swap(A[i], A[k]);
//			}
//		}
//	}
//	int countArrangement(int N) {
//		int Count = 0;
//		vector<int> A(N + 1);
//		for (int i = 1; i <= N; i++) A[i] = i;
//		BT(1, N, A, Count);
//		return Count;
//	}
//};
//
//// 88ms/PR54
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	void BT(int i, int N, bool Used[], int &Count) { // Backtracking
//		if (i == N + 1) { Count++; return; }
//		for (int k = 1; k <= N; k++) {
//			if (!Used[k] && (k%i == 0 || i%k == 0)) {
//				Used[k] = 1;
//				BT(i + 1, N, Used, Count);
//				Used[k] = 0;
//			}
//		}
//	}
//	int countArrangement(int N) {
//		bool Used[16] = {};
//		int Count = 0;
//		BT(1, N, Used, Count);
//		return Count;
//	}
//};
//
//int main() {
//	Solution az;
//	cout << az.countArrangement(3) << '\n';
//
//	system("pause");
//	return 0;
//}