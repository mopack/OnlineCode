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
////Sol: . Present: AC: 10Lines/0ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	bool isSameTree(TreeNode* p, TreeNode* q) {
//		if (!p && !q) return 1;
//		if (!p || !q) return 0;
//		if (p->val != q->val) return 0;
//		return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
//	}
//};
//
//int main() {
//	Solution az;
//	TreeNode a(1);
//	a.left = new TreeNode(2);
//	a.right = new TreeNode(3);
//
//	TreeNode b(1);
//	b.left = new TreeNode(2);
//	b.right = new TreeNode(3);
//
//	cout << az.isSameTree(&a, &b);
//	system("pause");
//	return 0;
//}