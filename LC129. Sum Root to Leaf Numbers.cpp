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
////Sol(V1): BT's DFS, Traversal as an Array with Backtracking. Present: AC: 23Lines/0ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	int Ans = 0;
//	vector<int>p;
//	void go(TreeNode* t) {
//		if (t == NULL) return;
//		p.push_back(t->val);
//		if (t->left == NULL && t->right == NULL) {
//			for (int r10 = 1, i = p.size() - 1; i >= 0; i--, r10 *= 10) 
//				Ans += r10 * p[i];
//		}else{
//			go(t->left);
//			go(t->right);
//		}
//		p.pop_back();
//	}
//	int sumNumbers(TreeNode* root) {
//		go(root);
//		return Ans;
//	}
//};
////Sol(V2): BT's DFS, Traversal as an Array with Backtracking. Present: AC: 19Lines/0ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	int Ans = 0;
//	void go(TreeNode* t, int val) {
//		if (t == NULL) return;
//		val = val * 10 + t->val;
//		if (t->left == NULL && t->right == NULL) 
//			Ans += val;
//		else {
//			go(t->left, val);
//			go(t->right, val);
//		}
//	}
//	int sumNumbers(TreeNode* t) {
//		go(t, 0);
//		return Ans;
//	}
//};
//int main() {
//
//	system("pause");
//	return 0;
//}