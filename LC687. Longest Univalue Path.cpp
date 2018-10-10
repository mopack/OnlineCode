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
//
//class Solution {
//public:
//	int ans = 1;
//	int go(TreeNode *t) {
//		int l = 0, r = 0, s=1;
//		if (t->left == NULL && t->right == NULL)return 1;
//		if (t->left != NULL) {
//			l = go(t->left);
//			if (t->left->val != t->val) l = 0;
//		}
//		if (t->right != NULL) {
//			r = go(t->right);
//			if (t->right->val != t->val) r = 0;
//		}
//
//		if (r && t->right->val == t->val && l && t->left->val==t->val) {
//			ans = max(ans, l + r + 1);
//			return max(l, r) + 1;
//		}
//		else {
//			ans = max(ans, l + r + 1);
//			return l + r + 1;
//		}
//	}
//	int longestUnivaluePath(TreeNode* root) {
//		if (root == NULL)return 0;
//		go(root);
//		return max(ans - 1, 0);
//	}
//}az;
//
//int main() {
//	TreeNode *t[3];
//	for (int i = 1; i <= 2; i++) t[i] = new TreeNode(1);
//	t[1]->left = t[2];
//	az.longestUnivaluePath(t[1]);
//
//	system("pause");
//	return 0;
//} 