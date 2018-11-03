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
////Sol: . Present: AC: 32Lines/8ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	TreeNode* addOneRow(TreeNode* root, int v, int d) {
//		TreeNode *t;
//		vector<TreeNode*> a = { root }, b;  int dep = 1;
//
//		if (d == 1) {
//			t = new TreeNode(v);
//			t->left = root; return t;
//		}
//		while (1) {
//			b = {}; dep++;
//			for (int i = 0; i < a.size(); i++) {
//				if (a[i]->left) b.push_back(a[i]->left);
//				if (a[i]->right) b.push_back(a[i]->right);
//			}
//			if (dep == d || b.size() == 0)break;
//			a = b;
//		}
//		for (int i = 0; i < a.size(); i++) {
//			t = new TreeNode(v);
//			if (a[i]->left) t->left = a[i]->left;
//			a[i]->left = t;
//
//			t = new TreeNode(v);
//			if (a[i]->right) t->right = a[i]->right;
//			a[i]->right = t;
//		}
//		return root;
//	}
//};
//
//int main() {
//	Solution az;
//	TreeNode *t[5];
//	for (int i = 1; i <= 4; i++) t[i] = new TreeNode(i);
//	t[1]->left = t[2];
//	t[1]->right = t[3];
//	t[3]->left = t[4];
//	az.addOneRow(t[1], 5, 4);
//	system("pause");
//	return 0;
//} 