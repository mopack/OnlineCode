//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <queue>
//using namespace std;
//
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
////Sol: BT's DFS, Postorder Traversal, Recursion Form. Coding: 6min. Present: AC: 12Lines/0ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	TreeNode* pruneTree(TreeNode* t) {
//		if (!t)return NULL;
//		TreeNode* L = pruneTree(t->left);
//		TreeNode* R = pruneTree(t->right);
//		if (!L && !R && t->val == 0) return NULL;
//		t->left = L, t->right = R;
//		return t;
//	}
//};
//
//int main() {
//	Solution az;
//	// [1,null,0,0,1]
//	TreeNode *r = new TreeNode(1);
//	r->right = new TreeNode(0);
//	r->right->left  = new TreeNode(0);
//	r->right->right = new TreeNode(1);
//
//	az.pruneTree(r);
//
//	system("pause");
//	return 0;
//}