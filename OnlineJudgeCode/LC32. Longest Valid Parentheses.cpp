//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
////4ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	int longestValidParentheses(string &s) {
//		int N = s.size(), MaxLen = 0;
//		vector<int>d(N + 1, 0);
//		for (int i = 1; i <= N; i++) {
//			int j = i - 2 - d[i - 1];
//			if (s[i - 1] == '(' || j < 0 || s[j] == ')') d[i] = 0;
//			else {
//				d[i] = d[i - 1] + 2 + d[j];
//				MaxLen = max(MaxLen, d[i]);
//			}
//		}
//		return MaxLen;
//	}
//};
////Other's 4ms
//class Solution {
//public:
//	int longestValidParentheses(string s) {
//		if (s.size() == 0) return 0;
//		stack<int> S;
//
//		int ans = 0;
//		S.push(-1);
//
//		for (int i = 0; i <s.size(); i++) {
//			if (s[i] == '(') S.push(i);
//			else {
//				S.pop();
//				if (!S.empty())
//					ans = max(ans, i - S.top());
//				else S.push(i);
//			}
//		}
//
//		return ans;
//	}
//};
//int main() {
//	class Solution az;
//	system("pause");
//	return 0;
//} 
