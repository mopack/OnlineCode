//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <stack>
//using namespace std;
//
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	int findLongestChain(vector<vector<int>>&Pair) {
//		sort(Pair.begin(), Pair.end(), [](const vector<int>& a, const vector<int>& b) { return a[1] < b[1]; });
//		int Len = 0, End = INT_MIN;
//		for (auto &p : Pair) {
//			if (p[0] > End) End = p[1], Len++;
//		}
//		return Len;
//	}
//};
//
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	int findLongestChain(vector<vector<int>>&Pair) {
//		sort(Pair.begin(), Pair.end(), [](const vector<int>& a, const vector<int>& b) { return a[1] < b[1]; });
//		stack<vector<int>> s;
//		s.push({ INT_MIN, INT_MIN });
//		for (auto &p : Pair) {
//			if (p[0] > s.top()[1]) s.push(p);
//		}
//		return s.size() - 1;
//	}
//};
//
//int main() {
//	class Solution az;
//	vector<vector<int>> x = { {1, 2}, { 2,3 }, { 3,4 } };
//	az.findLongestChain(x);
//	system("pause");
//	return 0;
//} 
