//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//// 152ms/PR65 (Most Solutions are at 148ms)
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	vector<int>A, B;
//	Solution(vector<int>_A) : A(_A), B(_A) {}
//
//	/** Resets the array to its original configuration and return it. */
//	vector<int> reset() {
//		return A;
//	}
//
//	/** Returns a random shuffling of the array. */
//	vector<int> shuffle() {
//		if (A.empty()) return A;
//
//		int r1 = rand() % A.size();
//		int r2 = rand() % A.size();
//		swap(B[r1], B[r2]);
//		return B;
//	}
//};
//
////136ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	vector<int>A0;
//	Solution(vector<int>_A) : A0(_A){}
//
//	/** Resets the array to its original configuration and return it. */
//	vector<int> reset() {
//		return A0;
//	}
//	/** Returns a random shuffling of the array. */
//	vector<int> shuffle() {
//		vector<int>A(A0);
//		for (int i = 0; i != A.size(); i++) {
//			swap(A[i], A[rand() % A.size()]);
//		}
//		return A;
//	}
//};
//
//int main() {
//	system("pause");
//	return 0;
//} 
