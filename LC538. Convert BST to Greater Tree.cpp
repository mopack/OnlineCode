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
//// Decodes your encoded data to tree.
//TreeNode* deserialize(string s) {
//	if (s.size() <= 0 || s[0] == 0) return NULL;
//	vector<TreeNode*> a, b;
//
//	int id = 0;
//	TreeNode* t = new TreeNode(Get(id, s));
//	a = { t };
//
//	while (1) {
//		b = {};
//		for (int i = 0; i < a.size(); i++) {
//			for (int lr = 0; lr <= 1; lr++) {
//				int x = Get(id, s); if (OverEnd)return t;
//				if (isNull == 0) {
//					TreeNode* t = new TreeNode(x);
//					if (lr == 0) a[i]->left = t;
//					else a[i]->right = t;
//					b.push_back(t);
//				}
//			}
//		}
//		if (b.size() == 0) return t;
//		a = b;
//	}
//}
//
////Sol: . Present: AC: 12Lines/16ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	int S = 0;
//	TreeNode* convertBST(TreeNode* t) {
//		if (!t) return NULL;
//		convertBST(t->right);
//		t->val += S; S = t->val;
//		convertBST(t->left);
//		return t;
//	}
//};
////Sol: Stack. Present: AC: 20Lines/16ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	TreeNode* convertBST(TreeNode* t) {
//		int D = 0;
//		stack<TreeNode*> s;
//		TreeNode *t = t;
//
//		while (t) { s.push(t); t = t->right; }
//		while (!s.empty()) {
//			t = s.top(); s.pop();
//			t->val += D; D = t->val;
//			if (t->left) {
//				s.push(t->left); t = t->left;
//				while (t->right) { s.push(t->right); t = t->right; }
//			}
//		}
//		return t;
//	}
//};
//
//int main() {
//	Solution az;
//	string s = { 1, '2',1, '0', 1,'3',2,'-', '4', 1,'1' };
//	az.convertBST(deserialize(s));
//
//	system("pause");
//	return 0;
//} 