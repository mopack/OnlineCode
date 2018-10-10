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
//// Sol2: BT's Preorder Traversal, Recursion Form. Present: AC: 13Lines/8ms/PR100
//// 關鍵: isSubtree(NULL, NULL) 被隱性(也就是題目假定但沒說)為false
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution { 
//public:
//	bool isSameTree(TreeNode* s, TreeNode* t) {
//		if (!t && !s) return 1;
//		if (!t || !s) return 0;
//		return s->val == t->val && isSameTree(s->left, t->left) && isSameTree(s->right, t->right);
//	}
//	bool isSubtree(TreeNode* s, TreeNode* t) {
//		if (!t || !s) return 0;
//		return isSameTree(s, t) || isSubtree(s->left, t) || isSubtree(s->right, t);
//	}
//};
//
//// Sol1: backtracking: TLE
////class Solution { 
////public:
////	inline bool isSameTree(TreeNode* s, TreeNode* t) {
////		if (t == NULL && s == NULL) return 1;
////		if (t == NULL || s == NULL) return 0;
////		TreeNode* b = SubTree(s, t);
////		return (b == s);
////	}
////	TreeNode* SubTree(TreeNode* s, TreeNode* t) {
////		if (s->val == t->val && isSameTree(s->left, t->left) && isSameTree(s->right, t->right)) return s;
////
////		TreeNode *b = NULL;
////		if(s->left!=NULL) b = SubTree(s->left, t); if (b != NULL) return b;
////		if (s->right != NULL) b = SubTree(s->right, t); if (b != NULL) return b;
////		return 0;
////	}
////	bool isSubtree(TreeNode* s, TreeNode* t) {
////		if (t == NULL && s == NULL) return 1;
////		if (t == NULL || s == NULL) return 0;
////		return SubTree(s, t) != NULL;
////	}
////}az;
//
//
//
//bool OverEnd, isNull;
//inline int Get(int &id, string &s) {
//	if (id >= s.size()) { OverEnd = 1; return 0; } else OverEnd = 0;
//	char line[12] = {};
//	int n = s[id], x;
//	if (n == 0) { id++; isNull = 1; return 0; } else isNull = 0;
//
//	for (int i = 0; i < n; i++) line[i] = s[id + i + 1];
//	sscanf(line, "%d", &x);
//	id += n + 1;
//	return x;
//}
//TreeNode* deserialize(string s) {
//	if (s.size() <= 0 || s[0] == 0) return NULL;
//	vector<TreeNode*> a, b;
//
//	int id = 0;
//	TreeNode* root = new TreeNode(Get(id, s));
//	a = { root };
//
//	while (1) {
//		b = {};
//		for (int i = 0; i < a.size(); i++) {
//			for (int lr = 0; lr <= 1; lr++) {
//				int x = Get(id, s); if (OverEnd)return root;
//				if (isNull == 0) {
//					TreeNode* t = new TreeNode(x);
//					if (lr == 0) a[i]->left = t;
//					else a[i]->right = t;
//					b.push_back(t);
//				}
//			}
//		}
//		if (b.size() == 0) return root;
//		a = b;
//	}
//}
//int main() {
//	Solution az;
//	string s0 = { 1,'1'}, s1="",s2;
//	for (int i = 1; i <= 50000; i++) s1 += s0;
//	s2 = s1;
//
//	TreeNode *t1 = deserialize(s1);
//	TreeNode *t2 = deserialize(s2);
//	cout << az.isSubtree(t1, t2);
//
//
//	system("pause");
//	return 0;
//} 