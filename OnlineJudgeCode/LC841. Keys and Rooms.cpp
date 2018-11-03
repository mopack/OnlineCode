//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//// 4ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	int OpenN = 0;
//	vector<bool>DP; // 0: UnKnown, 1: CanOpen
//	void DFS(int i, vector<vector<int>>&Front) {
//		DP[i] = 1; OpenN++;
//		for (auto j : Front[i]) {
//			if (!DP[j]) DFS(j, Front); 
//		}
//	}
//	bool canVisitAllRooms(vector<vector<int>>&Front) {
//		int N = Front.size();
//		DP = vector<bool>(N, 0);
//		DFS(0, Front);
//
//		return OpenN == N;
//	}
//};
//
//int main() {
//	vector<vector<int>> r = { { 1 },{ 2 },{ 3 },{} };
//	Solution az;
//	az.canVisitAllRooms(r);
//	system("pause");
//	return 0;
//} 