//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//// 4ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	bool searchMatrix(vector<vector<int>>& A, int Key) {
//		if (A.empty() || A[0].empty()) return 0;
//		for (int i = 0, j = A[0].size() - 1; i < A.size() && j >= 0;) {
//			if (A[i][j] == Key) return 1;
//			if (A[i][j] < Key) i++;
//			else j--;
//		}
//		return 0;
//	}
//};
//
//int main() {
//	class Solution az;
//	system("pause");
//	return 0;
//} 
