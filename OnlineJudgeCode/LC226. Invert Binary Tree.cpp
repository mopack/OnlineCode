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
////Sol: . Present: AC: 11Lines/0ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	TreeNode* invertTree(TreeNode* t) {
//		if (t == NULL)return t;
//		TreeNode* temp = invertTree(t->left);
//		t->left = invertTree(t->right);
//		t->right = temp;
//		return t;
//	}
//};
//
//int main() {
//
//	system("pause");
//	return 0;
//} 