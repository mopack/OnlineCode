//#include <iostream>
//#include <vector>
//#include <array>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//// sliding window / 8ms /PR99
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	int lengthOfLongestSubstring(string &s) {
//		int Ans = 0, Collision = 0;
//		vector<int> visited(128, 0); 
//		// Or: array<int, 128>visited; visited.fill(0);
//
//		for (int i = 0; i < s.size(); i++) {
//			Collision = max(visited[s[i]], Collision);
//			Ans = max(Ans, i - Collision + 1);
//			visited[s[i]] = i + 1;
//		}
//		return Ans;
//	}
//};
//
//// 28ms/PR27
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	int lengthOfLongestSubstring(string s) {
//		int ans = 0, i, j;
//		for (i = 0; i < s.size(); i++) {
//			vector<bool>exist(128, 0);
//			for (j = i; 1; j++) {
//				if (exist[s[j]] || j == s.size()) {
//					if (j - i > ans) ans = j - i;
//					break;
//				}
//				else 
//					exist[s[j]] = 1;
//			}
//		}
//		return ans;
//	}
//};
//int main() {
//	return 0;
//}
//
