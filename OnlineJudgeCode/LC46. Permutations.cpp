//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//// Reference: https://blog.csdn.net/u013309870/article/details/68941284
//
////1. 12ms/(Third)
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	void BT(int i, vector<int>&A, vector<vector<int>>&Ans) {
//		if (i == A.size()) { Ans.push_back(A); return; }
//		for (int j = i; j < A.size(); j++) {
//			swap(A[i], A[j]);
//			BT(i + 1, A, Ans);
//			swap(A[i], A[j]);
//		}
//	}
//	vector<vector<int>> permute(vector<int>&A) {
//		vector<vector<int>> Ans;
//		BT(0, A, Ans);
//		return Ans;
//	}
//};
//
////2. 8ms/PR99(Second), Ignore Duplicates
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	void BT(int i, vector<int>&A, vector<vector<int>>&Ans) {
//		if (i == A.size()) { Ans.push_back(A); return; }
//		for (int j = i; j < A.size(); j++) {
//			if (j == i || A[j] != A[j - 1]) {
//				swap(A[i], A[j]);
//				BT(i + 1, A, Ans);
//				swap(A[i], A[j]);
//			}
//		}
//	}
//	vector<vector<int>> permute(vector<int>&A) {
//		vector<vector<int>> Ans;
//		BT(0, A, Ans);
//		return Ans;
//	}
//};
//
//// ¦r¨å¶¶§Ç±Æ¦C
//
//int main() {
//	class Solution az;
//	system("pause");
//	return 0;
//} 
