//#include <iostream>
//#include <cstdlib>
//#include <vector>
//using namespace std;
//
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//BT's DFS: Preorder/Inorder/Postorder Traversal 
//          Forms: 1. Recursion/ 2.1 Traversal as an Array / 2.2 Traversal as an Array with Backtracking / 
//                 3. Iteration. (Loop as NonRecursion of either Form 1. or 2.)
//BT's BFS: Level Order Traversl (LOT)
//// Form1: Traverse Tree as an Array. Present: AC: 0ms/100PR
//static int fast = []() {ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL); return 0; }();
//class Solution { 
//public:
//	vector<int> ans;
//	void go(TreeNode* t) {
//		if (!t) return;
//		go(t->left);
//		ans.push_back(t->val);
//		go(t->right);
//	}
//	vector<int> inorderTraversal(TreeNode* t) {
//		go(t);
//		return ans;
//	}
//};
//// Form2: Recursion. Present: AC: 0ms/100PR
//static int fast = []() {ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL); return 0; }(); 
//class Solution { 
//public:
//	vector<int> inorderTraversal(TreeNode* t) {
//		if (!t) return vector<int>();
//		vector<int> Lt, Rt;
//		Lt = inorderTraversal(t->left);
//		Lt.push_back(t->val);
//		Rt = inorderTraversal(t->right); 
//		Lt.insert(Lt.end(), Rt.begin(), Rt.end());
//		return Lt;
//	}
//};
//
//int main() {
//	Solution az;
//	TreeNode *t = new TreeNode(NULL);
//	vector<int> x = az.inorderTraversal(t);
//
//	system("pause");
//	return 0;
//}