//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//// Form1: Traverse Tree as an Array. Present: AC: 0ms/100PR
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	vector<int> ans;
//	void go(TreeNode* t) {
//		if (t == NULL) return;
//		ans.push_back(t->val);
//		go(t->left);
//		go(t->right);
//	}
//	vector<int> preorderTraversal(TreeNode* root) {
//		go(root);
//		return ans;
//	}
//};
//// Form2: Recursion. Present: AC: 0ms/100PR
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution { 
//public:
//	vector<int> preorderTraversal(TreeNode* root) {
//		if (root == NULL) return vector<int>();
//		vector<int> At = { root->val }, Re;
//		Re = preorderTraversal(root->left); At.insert(At.end(), Re.begin(), Re.end());
//		Re = preorderTraversal(root->right); At.insert(At.end(), Re.begin(), Re.end());
//		return At;
//	}
//};
//
//int main() {
//	Solution az;
//	system("pause");
//	return 0;
//}