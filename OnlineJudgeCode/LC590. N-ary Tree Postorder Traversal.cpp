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
////Sol: . Present: AC: Lines/ms/PR
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	void go(Node* t, vector<int>&Ans) {
//		for (auto &u : t->children)
//			go(u, Ans);
//		Ans.push_back(t->val);
//	}
//	vector<int> postorder(Node* root) {
//		if (!root)return{};
//		vector<int> Ans;
//		go(root, Ans);
//		return Ans;
//	}
//};
//int main() {
//	//freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	class Solution az;
//	system("pause");
//	return 0;
//}