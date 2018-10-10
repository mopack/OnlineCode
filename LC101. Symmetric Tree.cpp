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
//
////Sol: . Present: AC: 13Lines/0ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	bool isSameTree(TreeNode* s, TreeNode* t) {
//		if (!s && !t) return 1;
//		if (!s || !t || s->val != t->val) return 0;
//		return isSameTree(s->left, t->right) && isSameTree(s->right, t->left);
//	}
//	bool isSymmetric(TreeNode* t) {
//		if (!t) return 1;
//		return isSameTree(t->left, t->right);
//	}
//};
//
//class Solution { // AC (BFS iteratively)
//public:
//	bool isSymmetric(TreeNode* t) {
//		vector<TreeNode*> a, b;
//		int x;
//		if (t == NULL) return 1;
//
//		x = int(t->left == NULL) + int(t->right == NULL);
//		if (x == 1) return 0;
//		if (x == 2) return 1;
//		a = { t->left, t->right}; 
//		while (1) {
//			b = {}; 
//			for (int i = 0; i < a.size(); i+=2) { 
//				if (a[i]->val != a[i+1]->val) return 0;
//
//				x = int(a[i]->left == NULL) + int(a[i+1]->right == NULL);
//				if (x == 1) return 0;
//				if (x == 0) { b.push_back(a[i]->left); b.push_back(a[i+1]->right); }
//
//				x = int(a[i]->right == NULL) + int(a[i + 1]->left == NULL);
//				if (x == 1) return 0;
//				if (x == 0) { b.push_back(a[i]->right); b.push_back(a[i + 1]->left); }
//			}
//			if (b.size() % 2 == 1) return 0;
//			if (b.size() == 0) return 1;
//			a = b;
//		}
//	}
//}az;
//
//TreeNode* v2t(vector<int> &x) {
//	if (x.size() <= 0)return NULL;
//	TreeNode *t = new TreeNode(x[0]);
//	vector<TreeNode*> a, b;
//	a = { t }; int lr; // 0:l can use 1:r can use 2:both are used
//	int id = 0;
//	while(1) {
//		b = {};
//		for (int i = 0; i < a.size(); i++) {
//			for (lr = 0; lr <= 1; lr++) {
//				if (++id >= x.size()) return t;
//				TreeNode *t = new TreeNode(x[id]);
//				if (lr == 0) a[i]->left = t;
//				else a[i]->right = t;
//				b.push_back(t);
//			}
//		}
//		a = b;
//	}
//}
//int main() {
//	vector<int> x= { 1, 2, 2, 3, 4, 4, 3 };
//	cout<<az.isSymmetric(v2t(x));
//
//	system("pause");
//	return 0;
//} 