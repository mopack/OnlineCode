//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//using namespace std;
////Sol: Coding: min. Present: AC: Lines/ms/PR
////Sol: . Present: AC: Lines/ms/PR
//class NestedInteger {
//public:
//	// Constructor initializes an empty nested list.
//	NestedInteger();
//
//	// Constructor initializes a single integer.
//	NestedInteger(int value);
//
//	// Return true if this NestedInteger holds a single integer, rather than a nested list.
//	bool isInteger() const;
//
//	// Return the single integer that this NestedInteger holds, if it holds a single integer
//	// The result is undefined if this NestedInteger holds a nested list
//	int getInteger() const;
//
//	// Set this NestedInteger to hold a single integer.
//	void setInteger(int value);
//
//	// Set this NestedInteger to hold a nested list and adds a nested integer to it.
//	void add(const NestedInteger &ni);
//
//	// Return the nested list that this NestedInteger holds, if it holds a nested list
//	// The result is undefined if this NestedInteger holds a single integer
//	const vector<NestedInteger> &getList() const;
//};
//
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	NestedInteger deserialize(string s) {
//		if (s.empty()) return NestedInteger();
//		if (s[0] != '[') return NestedInteger(stoi(s));
//		if (s.size() <= 2) return NestedInteger();
//		NestedInteger Ret;
//		int Start = 1, Count = 0;
//		for (int i = 1; i < s.size(); i++) {
//			if (Count == 0 && s[i] == ',' || i == s.size() - 1) {
//				Ret.add(deserialize(s.substr(Start, i - Start)));
//				Start = i + 1;
//			}
//			else if (s[i] == '[') Count++;
//			else if (s[i] == ']') Count--;
//		}
//		return Ret;
//	}
//};
//int main() {
//    //freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	class Solution az;
//	system("pause");
//	return 0;
//} 