//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//// 4ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	int Ans = 0;
//#define ValidGo(x, y) { if(x >= 0 && y >= 0 && x < A.size() && y < A[0].size() && A[x][y] == s[i]) go(i + 1, x, y, s, A); }
//	void go(int i, int x, int y, string &s, vector<vector<char>>&A) {
//		if (i == s.size() || Ans) { Ans = 1; return; }
//		char C = A[x][y];
//		A[x][y] = 0;
//		ValidGo(x + 1, y); ValidGo(x, y + 1);
//		ValidGo(x - 1, y); ValidGo(x, y - 1);
//		A[x][y] = C;
//	}
//	bool exist(vector<vector<char>>&A, string& s) {
//		if (A.empty()) return s.empty();
//		if (s.empty()) return 1;
//
//		for (int x = 0; x < A.size(); x++) {
//			for (int y = 0; y < A[0].size(); y++) {
//				if (A[x][y] == s[0]) {
//					go(1, x, y, s, A);
//					if (Ans) return 1;
//				}
//			}
//		}
//		return Ans;
//	}
//};
//
//int main() {
//	class Solution az;
//	system("pause");
//	return 0;
//} 
//
//
