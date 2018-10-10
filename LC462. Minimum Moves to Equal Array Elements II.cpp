//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//// 8ms/PR99
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	int minMoves2(vector<int>&A) {
//		if (A.empty()) return 0;
//		nth_element(A.begin(), A.begin() + A.size() / 2, A.end());
//		int Mid = A[A.size() / 2], Moves = 0;
//		for (auto &a : A) {
//			Moves += abs(a - Mid);
//		}
//		return Moves;
//	}
//};
//
//int main() {
//	class Solution az;
//	vector<int> x = { 1,2,3 };
//	cout << az.minMoves2(x);
//	system("pause");
//	return 0;
//} 
