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
////Sol: BT's DFS, Traversal as an Array. Coding: 5min. Present: AC: 16Lines/4ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	int Ans = -1, K, D = 0;
//	void go(TreeNode* t) {
//		if (!t || Ans != -1) return;
//		go(t->left);
//		if (++D == K) { Ans = t->val; return;}
//		go(t->right);
//	}
//	int kthSmallest(TreeNode* root, int k) {
//		K = k;
//		go(root);
//		return Ans;
//	}
//};
//
//int main() {
//
//	system("pause");
//	return 0;
//} 