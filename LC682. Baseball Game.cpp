//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <stack>
//using namespace std;
//
////Sol: . Present: AC: 22Lines/0ms/PR
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	int calPoints(vector<string>& ops) {
//		int ans = 0, s[1001]; s[0] = 0;
//		for (auto &S : ops) {
//			if (S == "C") {
//				ans -= s[s[0]--];
//			}else {
//				if (S == "D")       s[s[0] + 1] = s[s[0]] * 2;
//				else if (S == "+")  s[s[0] + 1] = s[s[0]] + s[s[0] - 1];
//				else                s[s[0] + 1] = stoi(S);
//				ans += s[++s[0]];
//			}
//		}
//		return ans;
//	}
//};
//
//
////Sol: . Present: AC: 20Lines/0ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//	vector<int>s;
//public:
//	int calPoints(vector<string>& ops) {
//		int ans = 0;
//		for (auto &S : ops) {
//			if (S == "C") {
//				ans -= s.back(); 
//				s.pop_back();
//			}else {
//				if (S == "D")       s.push_back(s.back() * 2);
//				else if (S == "+")  s.push_back( *(s.end()-1) + *(s.end()-2) ); 
//				else                s.push_back(stoi(S));
//				ans += s.back();
//			}
//		}
//		return ans;
//	}
//};
//
//int main() {
//	Solution az;
//	vector<string> x = { "5","2","C","D","+" };
//	az.calPoints(x);
//	system("pause");
//	return 0;
//} 