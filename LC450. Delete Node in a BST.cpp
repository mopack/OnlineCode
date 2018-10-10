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
//	if (id >= s.size()) { OverEnd = 1; return 0; }
//	else OverEnd = 0;
//	char line[12] = {};
//	int n = s[id], x;
//	if (n == 0) { id++; isNull = 1; return 0; }
//	else isNull = 0;
//
//	for (int i = 0; i < n; i++) line[i] = s[id + i + 1];
//	sscanf(line, "%d", &x);
//	id += n + 1;
//	return x;
//}
// Decodes your encoded data to tree.
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
//Sol: . Present: AC: 34Lines/16ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//#define F(s) ((key > s->val)?(s->right):(s->left)) // Fail (KeyVale Fails at s's left or right
//class Solution {
//public:
//	TreeNode* deleteNode(TreeNode* root, int key) {
//		TreeNode *t = root, *pt= t;
//		while (t && t->val != key) {
//			pt = t;
//			t = F(t);
//		}
//		if (!t) return root; // not found
//		if (!t->left) {
//			if (t == root) return t->right;
//			F(pt) = t->right; return root;
//		}
//		if (!t->right) {
//			if (t == root) return t->left;
//			F(pt) = t->left; return root;
//		}
//
//		find the bigest in Left Subtree(t1), cut it (pt1->right = t1->left). Replace t with t1 (t->val=t1->val).
//		TreeNode *t1 = t->left, *pt1 = t; 
//		if (!t1->right) t->left = t1->left; // t1 is the bigest. (pt1->left = t1->left)
//		else { 
//			while (t1->right) { 
//				pt1 = t1;
//				t1 = t1->right;
//			}
//			pt1->right = t1->left; // (pt1->right = t1->left)
//		}
//		t->val = t1->val;
//		return root;
//	}
//};
//
//Sol: . Present: AC: 48Lines/16ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	TreeNode* deleteNode(TreeNode* root, int key) {
//		TreeNode *t = root, *pt = t;
//		while (t && t->val != key) {
//			pt = t;
//			if (key > t->val) t = t->right;
//			else t = t->left;
//		}
//		if (!t) return root;
//
//		// when t==root
//		if (t == root) {
//			if (!t->left)  return t->right;
//			if (!t->right) return t->left;
//
//			TreeNode *t1 = t->left, *pt1 = t; // find the rightest in left sub tree
//			while (t1->right) {
//				pt1 = t1;
//				t1 = t1->right;
//			}
//			if (pt1 == t) t->left = t1->left;
//			else pt1->right = t1->left;
//			t->val = t1->val;
//			return root;
//		}
//
//		// when t!=root
//		if (!t->left) {
//			if (key > pt->val) pt->right = t->right; 
//			else pt->left = t->right;
//		}
//		else if (!t->right) {
//			if (key > pt->val) pt->right = t->left;
//			else pt->left = t->left;
//		}
//		else { // find the rightest in left sub tree
//			TreeNode *t1 = t->left, *pt1 = t;
//			while (t1->right) {
//				pt1 = t1;
//				t1 = t1->right;
//			}
//			if (pt1 == t) t->left = t1->left;
//			else pt1->right = t1->left;
//			t->val = t1->val;
//		}
//		return root;
//	}
//};
//
//int main() {
//	Solution az;
//	string s = { 1, '5',1,  '3',1,  '6', 1, '2',1,  '4', 0, 1, '7' };
//	string s = { 1, '1', 0, 1, '2' };
//	TreeNode * t = az.deleteNode(deserialize(s), 2);
//
//	system("pause");
//	return 0;
//} 