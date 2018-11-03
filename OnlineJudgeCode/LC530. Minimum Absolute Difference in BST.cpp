//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//using namespace std;
//class Solution {
//public:
//	int ans = 2147483647, L, firstTime = 1;
//	void go(TreeNode* t) {
//		if (t->left != NULL) go(t->left);
//		
//		if (firstTime)  firstTime = 0;
//		else            ans = min(ans, abs(t->val - L));
//		L = t->val;
//
//		if (t->right != NULL) go(t->right);
//	}
//	int getMinimumDifference(TreeNode* t) {
//		go(t);
//		return ans;
//	}
//}az;
//
//int main() {
//	system("pause");
//	return 0;
//} 