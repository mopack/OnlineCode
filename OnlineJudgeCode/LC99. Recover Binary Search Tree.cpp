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
//
//
////My Sol1: BST's Inorder Traversal. DFS. BST as an sorted arry. AC 24ms/20ms/PR100
//static int fast = []() { ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	TreeNode *last = new TreeNode(INT_MIN);
//	TreeNode *E11 = NULL, *E12 = NULL;
//	TreeNode *E21 = NULL, *E22 = NULL;
//	void go(TreeNode* t) {
//		if (t == NULL)return;
//		go(t->left);
//		if (last->val < t->val) last = t;
//		else
//			if (E11 == NULL) E11 = last, E12 = t;
//			else             E21 = last, E22 = t;
//		go(t->right);
//	}
//	void recoverTree(TreeNode* root) {
//		// finderror
//		go(root);
//		// swap
//		if (E21 == NULL) swap(E11->val, E12->val);
//		else             swap(E11->val, E22->val);
//	}
//};
//
//int main() {
//	string s = { 1,'1',1,'3',0,0,1,'2' };
//	string s2 = { 1,'3',1,'1',1,'4',0,0,1,'2' };
//
//	Solution az;
//	TreeNode *t = deserialize(s);
//	az.recoverTree(t);
//
//	system("pause");
//	return 0;
//} 