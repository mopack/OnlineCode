//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//using namespace std;
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
////Sol: Present: AC: 4ms/PR100
//static int fast = []() { ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	bool hasPathSum(TreeNode* t, int sum) {
//		if (t == NULL) return 0;
//		if (t->left == NULL && t->right == NULL) return t->val == sum;
//		return hasPathSum(t->left, sum - t->val) || hasPathSum(t->right, sum - t->val);
//	}
//};
//
//int main() {
//
//	system("pause");
//	return 0;
//}