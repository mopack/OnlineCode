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
////Sol: two BT's DFS, Recursion Form. Present: AC: 12Lines/20ms/PR100
////P.S. Runtime varys a lot, don't be sad when it's not as usual, try it again.
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) { // +=
//		if (t2 == NULL) return t1;
//		if (t1 == NULL) t1 = new TreeNode(t2->val);
//		else t1->val += t2->val;
//		t1->left = mergeTrees(t1->left, t2->left);
//		t1->right = mergeTrees(t1->right, t2->right);
//		return t1;
//	}
//};
//int main() {
//	system("pause");
//	return 0;
//} 