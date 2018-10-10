//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//// 4ms/PR98
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	bool escapeGhosts(vector<vector<int>>& ghosts, vector<int>&Tar) {
//		int YourTime = abs(Tar[0]) + abs(Tar[1]), MinGhostTime = INT_MAX;
//		for (auto &g : ghosts) {
//			int Time = abs(g[0] - Tar[0]) + abs(g[1] - Tar[1]);
//			if (Time < MinGhostTime) MinGhostTime = Time;
//		}
//		return YourTime < MinGhostTime;
//	}
//};
//
//int main() {
//	vector<vector<int>> x = { {1, 9}, { 2,-5 }, { 3,8 }, { 9,8 }, { -1,3 } };
//	vector<int> y = {8, -10};
//	class Solution az;
//	cout<<az.escapeGhosts(x, y);
//	system("pause");
//	return 0;
//} 
