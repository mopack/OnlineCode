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
//	int N = s[id], x;
//	if (N == 0) { id++; isNull = 1; return 0; } else isNull = 0;
//
//	for (int i = 0; i < N; i++) line[i] = s[id + i + 1];
//	sscanf(line, "%d", &x);
//	id += N + 1;
//	return x;
//}
//// Decodes your encoded data to tree.
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
////Sol: BT's DFS, Traversal as an Array. Present: AC: 24Lines/4ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	vector<int> Ans = {}; int NMax = 0;
//	int V = 0, N = 0;
//
//	void go(TreeNode* t) {
//		if (!t) return;
//		
//		go(t->left);
//
//		if (V == t->val && NMax) N++;  // NMax != 0 => not the first time
//		else { V = t->val; N = 1; }
//
//		if (N > NMax)       NMax = N, Ans = { V }; 
//		else if (N == NMax) Ans.push_back(V);
//
//		go(t->right);
//	}
//	vector<int> findMode(TreeNode* t) {
//		go(t);
//		return Ans;
//	}
//};
//
//int main() {
//	Solution az;
//	string s = { 1,'6', 1,'2', 1,'8',1, '0',1, '4', 1,'7', 1,'9', 0, 0, 1,'2',1, '6'};
//	vector<int> x = az.findMode(deserialize(s));
//
//	system("pause");
//	return 0;
//} 