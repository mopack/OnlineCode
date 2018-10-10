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
////Form1: Traversal as an Array.  Present: AC: 15Lines/0ms/100PR
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	int Ans = 0;
//	void go(TreeNode* t) {
//		if (!t) return;
//		if (t->left && !t->left->left && !t->left->right) Ans += t->left->val;
//		else go(t->left);
//		go(t->right);
//	}
//	int sumOfLeftLeaves(TreeNode* t) {
//		go(t);
//		return Ans;
//	}
//};
////Form2: Recursion. Present: AC: 11Lines/0ms/100PR
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	int sumOfLeftLeaves(TreeNode* t) {
//		if (!t) return 0;
//		int Left;
//		if (t->left && !t->left->left && !t->left->right) Left = t->left->val;
//		else Left = sumOfLeftLeaves(t->left);
//		return Left + sumOfLeftLeaves(t->right);
//	}
//};
//int main() {
//
//	system("pause");
//	return 0;
//} 