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
////Sol: BST's DFS (Iteration Form). Present: AC: 13Lines/8ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	TreeNode* lowestCommonAncestor(TreeNode* t, TreeNode* p, TreeNode* q) {
//		int u = p->val, v = q->val;
//		while(1){
//			if (u > t->val && v > t->val) t = t->right;
//			else if(u < t->val && v < t->val) t = t->left;
//			else break;
//		}
//		return t;
//	}
//};
//
////Sol: BST's DFS (Recursion Form). Present: AC: 11Lines/8ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	TreeNode* lowestCommonAncestor(TreeNode* t, TreeNode* p, TreeNode* q) {
//		if (!t)return NULL;
//		int u = p->val, v = q->val;
//		if (u > t->val && v > t->val) return lowestCommonAncestor(t->right, p, q);
//		if (u < t->val && v < t->val) return lowestCommonAncestor(t->left , p, q);
//		return t;
//	}
//};
//
//int main() {
//
//	system("pause");
//	return 0;
//} 