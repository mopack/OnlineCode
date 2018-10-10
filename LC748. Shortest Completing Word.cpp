//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//// 8ms/PR99
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	string shortestCompletingWord(string licensePlate, vector<string>& words) {
//		int AnsLen = INT_MAX; string Ans;
//		vector<int>Need0(26, 0);
//		for (auto c : licensePlate) {
//			if (c < 65) continue;
//			if (c < 97) c += 97 - 65;
//			Need0[c - 97]++;
//		}
//
//		for (auto &w : words) {
//			if (w.size() >= AnsLen) continue;
//
//			vector<int>Need = Need0;
//			for (auto &c : w) {
//				Need[c - 97]--;
//			}
//			int i;
//			for (i = 0; i < 26 && Need[i] <= 0; i++);
//			if (i == 26) Ans = w, AnsLen = w.size();
//		}
//		return Ans;
//	}
//};
//
//int main() {
//	class Solution az;
//	vector<string> x = { "step","steps","stripe","stepple" };
//	cout<<az.shortestCompletingWord("1s3 PSt", x);
//	system("pause");
//	return 0;
//} 
