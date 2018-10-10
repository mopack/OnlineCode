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
////Sol: BT's DFS (Recursion Form). Present: AC: 8Lines/0ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	int maxDepth(TreeNode* t) {
//		if (!t) return 0;
//		return max(maxDepth(t->left), maxDepth(t->right)) + 1;
//	}
//};
//
//int main() {
//
//	system("pause");
//	return 0;
//} 