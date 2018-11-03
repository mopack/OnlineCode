//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//using namespace std;
////Sol: Coding: min. Present: AC: Lines/ms/PR
////Sol: . Present: AC: 21Lines/0ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	int scoreOfParentheses(string S) {
//		vector<int>s; int n;
//		for (auto c : S) {
//			if (c == '(') s.push_back(0);
//			else if (!s.back()) s.back() = 1;
//			else{
//				n = 0;
//				while (s.back()) {
//					n += s.back(); s.pop_back();
//				}
//				s.back() = n*2;
//			}
//		}
//		n = 0;
//		for (auto x : s) n += x;
//		return n;
//	}
//};
//
////Sol: . Present: AC: Lines/0ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	int scoreOfParentheses(string S) {
//		int score = 0, core = 0;
//		for (int i = 0; i < S.size(); i++) {
//			if (S[i] == '(')
//				core++;
//			else { //S[i] ==')'
//				core--;
//				if (S[i - 1] == '(') //at core
//					score += 1 << core;
//			}
//		}
//		return score;
//	}
//};
//int main() {
//  //freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	class Solution az;
//	system("pause");
//	return 0;
//} 