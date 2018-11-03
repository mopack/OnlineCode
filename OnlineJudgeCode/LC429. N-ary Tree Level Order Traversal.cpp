//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//using namespace std;
//class Node {
//public:
//	int val = NULL;
//	vector<Node*> children;
//
//	Node() {}
//
//	Node(int _val, vector<Node*> _children) {
//		val = _val;
//		children = _children;
//	}
//};
////Sol: Coding: min. Present: AC: Lines/ms/PR
////Sol: . Present: AC: Lines/36ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	vector<vector<int>> levelOrder(Node* Root) {
//		if (!Root) return{};
//		vector<vector<int>> Ans; vector<int>An;
//		vector<Node*> a = {Root}, b;
//		while (!a.empty()) {
//			b = {}; An = {};
//			for (auto &t : a) {
//				An.push_back(t->val);
//				for (auto &u : t->children) {
//					b.push_back(u);
//				}
//			}
//			Ans.push_back(An);
//			swap(a, b);
//		}
//		return Ans;
//	}
//};
//int main() {
//    //freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	class Solution az;
//	system("pause");
//	return 0;
//} 