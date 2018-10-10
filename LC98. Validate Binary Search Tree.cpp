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
////Sol: Coding: 10min. Present: AC: 23Lines/4ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	bool Ans = 1;
//	pair<int, int> go(TreeNode* t) { // return Min & Max
//		int v = t->val;
//		pair<int, int> L(v, v), R(v, v);
//		if (t->left) {
//			L = go(t->left);
//			if (L.second >= v) Ans = 0;
//		}
//		if (t->right) {
//			R = go(t->right);
//			if (R.first <= v) Ans = 0;
//		}
//		return{ L.first, R.second };
//	}
//	bool isValidBST(TreeNode* t) {
//		if (!t) return 1;
//		go(t);
//		return Ans;
//	}
//};
//int main() {
//	Solution az;
//	TreeNode *t[4]; t[0] = NULL;
//	for (int i = 1; i <= 3; i++) t[i] = new TreeNode(i);
//	swap(t[2]->val, t[1]->val);
//	t[1]->left = t[2];
//	t[1]->right = t[3];
//	cout << az.isValidBST(t[0]);
//	//cout<<az.isValidBST(t[1]);
//
//	system("pause");
//	return 0;
//} 