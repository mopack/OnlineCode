//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <cassert>
//using namespace std;
//
//
//// 36ms/PR82
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	void setZeroes(vector<vector<int>>& A) {
//		if (A.empty()) return; // Or assert(!A.empty());
//		int N = A.size(), M = A[0].size();
//
//		bool A0jSet0 = 0, Ai0Set0 = 0;
//		for (int i = 0; i < N; i++) if (A[i][0] == 0) { Ai0Set0 = 1; break; }
//		for (int j = 0; j < M; j++) if (A[0][j] == 0) { A0jSet0 = 1; break; }
//
//
//		for (int i = 1; i < N; i++) {
//			for (int j = 1; j < M; j++) {
//				if (A[i][j] == 0) A[i][0] = A[0][j] = 0;
//			}
//		}
//
//		for (int i = 1; i < N; i++) {
//			for (int j = 1; j < M; j++) {
//				if (!A[i][0] || !A[0][j]) A[i][j] = 0;
//			}
//		}
//
//		if (A0jSet0) {
//			for (int j = 0; j < M; j++) A[0][j] = 0;
//		}
//		if (Ai0Set0) {
//			for (int i = 0; i < N; i++) A[i][0] = 0;
//		}
//	}
//};
//
//// 32ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	void setZeroes(vector<vector<int>>& A) {
//		bool first_col_zero = 0;
//		//Top down approach
//		for (int i = 0; i<A.size(); i++) {
//			if (A[i][0] == 0) {
//				first_col_zero = 1;
//			}
//			for (int j = 1; j<A[0].size(); j++) {
//				//don't check for first column.
//				if (A[i][j] == 0) {
//					A[i][0] = 0;
//					A[0][j] = 0;
//				}
//			}
//		}
//
//		//Bottom up approach because if normal approach taken then
//		//previous loop making zero will change results.
//		for (int i = A.size() - 1; i >= 0; i--) {
//			//Go until first column
//			for (int j = A[0].size() - 1; j>0; j--) {
//				if (A[i][0] == 0 || A[0][j] == 0) {
//					A[i][j] = 0;
//				}
//			}
//			if (first_col_zero) {
//				A[i][0] = 0;
//			}
//		}
//	}
//};
//
//int main() {
//	vector<vector<int>> A = { {1, 1, 1}, { 0,1,2 }};
//	class Solution az;
//	az.setZeroes(A);
//
//	system("pause");
//	return 0;
//} 
