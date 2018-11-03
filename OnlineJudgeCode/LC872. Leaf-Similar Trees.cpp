//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//using namespace std;
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
////Sol: Coding: min. Present: AC: Lines/ms/PR
////Sol: . Present: AC: Lines/0ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	void go(TreeNode* t, vector<int>&Ans) {
//		if (!t->left && !t->right) Ans.push_back(t->val);
//		else {
//			if (t->left) go(t->left, Ans);
//			if (t->right) go(t->right, Ans);
//		}
//	}
//	bool leafSimilar(TreeNode* root1, TreeNode* root2) {
//		if (!root1 && !root2) return 1;
//		if (!root1 || !root2) return 0;
//		vector<int>Leaves[2];
//		go(root1, Leaves[0]);
//		go(root2, Leaves[1]);
//		return Leaves[0] == Leaves[1];
//	}
//};
//int main() {
//    //freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	class Solution az;
//	system("pause");
//	return 0;
//} 