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
//static int fast = []() { ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	bool wrong = 0;
//	int h(TreeNode* t) {
//		if (!t || wrong) return 0;
//		int hl = h(t->left), hr = h(t->right);
//		if (abs(hl - hr) > 1) wrong = 1;
//		return max(hl, hr) + 1;
//	}
//	bool isBalanced(TreeNode* root) {
//		h(root);
//		return !wrong;
//	}
//};
//
//int main() {
//
//	system("pause");
//	return 0;
//}