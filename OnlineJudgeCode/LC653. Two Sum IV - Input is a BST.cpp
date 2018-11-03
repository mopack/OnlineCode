//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <stack>
//using namespace std;
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//Sol: TaA. Present: AC: 25Lines/12ms/PR99.92
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	bool Ans = 0;
//	TreeNode* Root; TreeNode* ID; int K;
//
//	bool findK(TreeNode *t, int k) {
//		if (!t) return 0;
//		if (k == t->val && t != ID) return 1;
//		if (k > t->val) return findK(t->right, k);
//		return findK(t->left, k);
//	}
//	void go(TreeNode* t) {
//		if (!t || Ans) return;
//		ID = t;
//		if (findK(Root, K - t->val)) { Ans = 1; return; }
//		go(t->left);
//		go(t->right);
//	}
//	bool findTarget(TreeNode* t, int k) {
//		K = k; Root = t;
//		go(t);
//		return Ans;
//	}
//};
//
////Sol: . Present: AC: 18Lines/8ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	bool findK(TreeNode *t, int k, TreeNode* ID) {
//		if (!t) return 0;
//		if (k == t->val && t != ID) return 1;
//		if (k > t->val) return findK(t->right, k, ID);
//		return findK(t->left, k, ID);
//	}
//	bool go(TreeNode* t, int K, TreeNode* Root) {
//		if (findK(Root, K - t->val, t)) return 1;
//		if (t->left && go(t->left, K, Root)) return 1;
//		return t->right && go(t->right, K, Root);
//	}
//	bool findTarget(TreeNode* t, int k) {
//		return go(t, k, t);
//	}
//};
//int main() {
//
//	system("pause");
//	return 0;
//} 