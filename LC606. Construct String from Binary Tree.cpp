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
/////Sol: . Present: AC: 15Lines/8ms/PR99
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	string tree2str(TreeNode* t) {
//		if (!t) return "";
//		string s = to_string(t->val);
//		if (t->left)
//			s += '(' + tree2str(t->left) + ')';
//		if (t->right) {
//			if (!t->left) s += "()";
//			s += '(' + tree2str(t->right) + ')';
//		}
//		return s;
//	}
//};
/////Sol: . Present: AC: 18Lines/4ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	string Ans = "";
//	void go(TreeNode* t) {
//		if (!t) return;
//		Ans += to_string(t->val);
//		if (!t->left && !t->right) return;
//		Ans += '('; go(t->left); Ans += ')';
//		if (t->right) {
//			Ans += '('; go(t->right); Ans += ')';
//		}
//	}
//	string tree2str(TreeNode* t) {
//		go(t);
//		return Ans;
//	}
//};
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
//	string s = { 1, '1', 1, '2', 1, '3', 1, '4'};
//	TreeNode *t = deserialize(s);
//	cout << az.tree2str(t);
//
//	system("pause");
//	return 0;
//} 