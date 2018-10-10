//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//using namespace std;
////40ms/PR13
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	void DFS(int St, vector<int>&A, set<vector<int>> &Ans) {
//		if (St == A.size()) { Ans.insert(A); return; }
//		for (int i = St; i != A.size(); i++) {
//			if (i != St && A[i] == A[St]) continue;
//			swap(A[i], A[St]);
//			DFS(St + 1, A, Ans);
//			swap(A[i], A[St]);
//		}
//	}
//	vector<vector<int>> permuteUnique(vector<int>& A) {
//		set<vector<int>> Ans;
//		DFS(0, A, Ans);
//		return vector<vector<int>>(Ans.begin(), Ans.end());
//	}
//};
//
//////32ms/PR19
////static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
////class Solution {
////public:
////	void DFS(int Lv, vector<bool>&Vis, vector<int>&A, vector<int>&An, vector<vector<int>>& Ans) {
////		if (Lv == A.size()) { Ans.push_back(An); return; }
////		for (int i = 0; i != A.size(); i++) {
////			if (!Vis[i]) {
////				if (i > 0 && A[i] == A[i - 1] && !Vis[i - 1]) continue;
////				Vis[i] = 1;
////				An.push_back(A[i]);
////				DFS(Lv + 1, Vis, A, An, Ans);
////				An.pop_back();
////				Vis[i] = 0;
////			}
////		}
////	}
////	vector<vector<int>> permuteUnique(vector<int>& A) {
////		vector<vector<int>> Ans;
////		vector<int>An;
////		vector<bool>Vis(A.size(), 0);
////		sort(A.begin(), A.end());
////		DFS(0, Vis, A, An, Ans);
////		return Ans;
////	}
////};
//
//
//int main() {
//	class Solution az;
//	system("pause");
//	return 0;
//} 
