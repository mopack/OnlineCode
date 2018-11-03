//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
////	0 00
////	1 10
////	2 01
////	3 11
//
////Sol: BT's DFS, Traversal as an Array. Present: AC: 20ines/4ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	TreeNode *At = NULL;
//	int u, v;
//	int go(TreeNode* t) {
//		if (!t) return 0;
//		int Ret = go(t->left) + go(t->right);
//		if (t->val == u) Ret += 1;
//		if (t->val == v) Ret += 2;
//		if (Ret == 3 && !At)At = t;
//		return Ret;
//	}
//	TreeNode* lowestCommonAncestor(TreeNode* t, TreeNode* p, TreeNode* q) {
//		u = p->val; v = q->val;
//		go(t);
//		return At;
//	}
//};
//int main() {
//
//	system("pause");
//	return 0;
//} 