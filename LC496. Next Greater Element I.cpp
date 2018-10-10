//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <unordered_map>
//#include <stack>
//using namespace std;
//
////Sol: . Present: AC: 19Lines/4ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	vector<int> nextGreaterElement(vector<int>& A, vector<int>& B) {
//		unordered_map<int, int> Ai; //A: Value -> Index
//		stack<int> s; // store A's index
//		vector<int>Ans(A.size(), -1);
//
//		for (int i = 0; i < A.size(); i++) Ai[A[i]] = i;
//		for (auto x : B) {
//			while (s.size() && A[s.top()] <= x) {
//				Ans[s.top()] = x; s.pop();
//			}
//			auto ai = Ai.find(x);
//			if (ai != Ai.end()) s.push(ai->second);
//		}
//		return Ans;
//	}
//};
//
//int main() {
//	Solution az;
//	vector<int> x1 = { 4,1,2 }, x2 = { 1,3,4,2 };
//	az.nextGreaterElement(x1, x2);
//	system("pause");
//	return 0;
//} 