//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	void go(int sx, int sy, int Ex, int Ey, vector<vector<int>>&A, vector<int>&Ans) {
//		if (sx > Ex || sy > Ey) return;
//		if (sx == Ex && sy == Ey) { Ans.push_back(A[sx][sy]); }
//		else if (sx == Ex) {
//			for (int j = sy; j <= Ey; j++) Ans.push_back(A[sx][j]);
//		}else if (sy == Ey) {
//			for (int i = sx; i <= Ex; i++) Ans.push_back(A[i][Ey]);
//		}else{
//			for (int j = sy; j < Ey; j++) Ans.push_back(A[sx][j]);
//			for (int i = sx; i < Ex; i++) Ans.push_back(A[i][Ey]);
//			for (int j = Ey; j > sy; j--) Ans.push_back(A[Ex][j]);
//			for (int i = Ex; i > sx; i--) Ans.push_back(A[i][sy]);
//			go(sx + 1, sy + 1, Ex - 1, Ey - 1, A, Ans);
//		}
//	}
//	vector<int> spiralOrder(vector<vector<int>>&A) {
//		if (A.empty()) return{};
//		vector<int> Ans;
//		go(0, 0, A.size() - 1, A[0].size() - 1, A, Ans);
//		return Ans;
//	}
//};
//
//int main() {
//	vector<vector<int>>A = {
//		{ 1, 2, 3, 4 },
//		{ 5, 6, 7, 8 },
//		{ 9,10,11,12 }
//	};
//	class Solution az;
//	az.spiralOrder(A);
//	system("pause");
//	return 0;
//} 
