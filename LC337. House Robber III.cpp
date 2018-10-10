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
//	void SetLR(TreeNode *l, TreeNode *r) { left = l; right = r; }
//};
////Sol: . Present: AC: 14Lines/840ms/PR8
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	int ma(TreeNode* t, bool able){
//		if (!t) return 0;
//		if (!able) return ma(t->left, 1) + ma(t->right, 1);
//		int x = ma(t->left, 1) + ma(t->right, 1);
//		int y = t->val + ma(t->left, 0) + ma(t->right, 0);
//		return max(x, y);
//	}
//	int rob(TreeNode* t) {
//		return ma(t, 1);
//	}
//};
//
////Sol: . Present: AC: 15Lines/4ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	pair<int, int>ma(TreeNode *t) {
//		if (!t) return{ 0, 0 };
//		pair<int, int> L = ma(t->left), R = ma(t->right);
//		int no  = max(L.first, L.second) + max(R.first, R.second);
//		int yes = t->val + L.second + R.second;
//		return{ yes, no };
//	}
//	int rob(TreeNode* t) {
//		pair<int, int>p = ma(t);
//		return max(p.first, p.second);
//	}
//};
//
//
//int main() {
//	Solution az;
//	TreeNode* t[6]; t[0] = NULL;
//	for (int i = 1; i <= 5; i++) t[i] = new TreeNode(3);
//	t[2]->val = 2;
//	t[5]->val = 1;
//	t[1]->SetLR(t[2], t[3]);
//	t[2]->SetLR(t[0], t[4]);
//	t[3]->SetLR(t[0], t[5]);
//
//	cout<<az.rob(t[1])<<endl;
//
//	system("pause");
//	return 0;
//} 