//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <stack>
//
//using namespace std;
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//// Sol: Recursion. Present: AC: 12Lines/4ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	TreeNode* trimBST(TreeNode* t, int L, int R) {
//		if (!t) return NULL;
//		if (t->val < L) return trimBST(t->right, L, R);
//		if (t->val > R) return trimBST(t->left, L, R);
//		t->left  = trimBST(t->left, L, R);
//		t->right = trimBST(t->right, L, R);
//		return t;
//	}
//};
//int main() {
//	Solution az;
//	TreeNode* t[4];
//	for (int i = 1; i <= 3; i++)t[i] = new TreeNode(i);
//	t[3]->val = 0;
//	t[1]->left = t[3];
//	t[1]->right = t[2];
//	az.trimBST(t[1],1,2);
//
//	system("pause");
//	return 0;
//} 