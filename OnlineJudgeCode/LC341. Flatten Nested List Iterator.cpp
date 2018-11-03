//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <stack>
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//using namespace std;
//class NestedInteger {
//public:
//	// Return true if this NestedInteger holds a single integer, rather than a nested list.
//	bool isInteger() const;
//
//	// Return the single integer that this NestedInteger holds, if it holds a single integer
//	// The result is undefined if this NestedInteger holds a nested list
//	int getInteger() const;
//
//	// Return the nested list that this NestedInteger holds, if it holds a nested list
//	// The result is undefined if this NestedInteger holds a single integer
//	const vector<NestedInteger> &getList() const;
//};
//
////Sol: Coding: min. Present: AC: Lines/ms/PR
////Sol: . Present: AC: 23Lines/8ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class NestedIterator {
//public:
//	vector<int>d; int i = 0;
//	void go(const vector<NestedInteger> &NL) {
//		for(int I = 0; I < NL.size(); I++){
//			if (NL[I].isInteger()) 
//				d.push_back(NL[I].getInteger());
//			else 
//				go(NL[I].getList());
//		}
//		return;
//	}
//	NestedIterator(vector<NestedInteger> &NL) {
//		go(NL);
//	}
//	int next() {
//		return d[i++];
//	}
//	bool hasNext() {
//		return i < d.size();
//	}
//};
//
////Sol by Stack Interation.
//struct NestedIterator
//{
//	stack<NestedInteger> st;
//	NestedIterator(vector<NestedInteger> &nestedList) {
//		for (int i = nestedList.size() - 1; i >= 0; i--) {
//			st.push(nestedList[i]);
//		}
//	}
//
//	int next() {
//		int ans = st.top().getInteger();
//		st.pop();
//		return ans;
//	}
//
//	bool hasNext() {
//		while (!st.empty()) {
//			if (st.top().isInteger()) {
//				return true;
//			}
//			vector<NestedInteger>  nestedList = st.top().getList();
//			st.pop();
//			for (int i = nestedList.size() - 1; i >= 0; i--) {
//				st.push(nestedList[i]);
//			}
//		}
//		return false;
//	}
//};
//int main() {
//  //freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	class Solution az;
//	system("pause");
//	return 0;
//} 