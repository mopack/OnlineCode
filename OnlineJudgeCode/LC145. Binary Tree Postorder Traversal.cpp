//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <stack>
//#include <unordered_set>
//#include <algorithm>
//using namespace std;
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
////Sol: . Present: AC: Lines/ms/PR
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	vector<int> postorderTraversal(TreeNode* root) {
//		stack<TreeNode*> s;
//		vector<int> ans;
//		if (root == NULL)return ans;
//		
//		TreeNode* t = root;
//		while (1) {
//			ans.push_back(t->val);
//			if (t->left) s.push(t->left);
//			if (t->right) t = t->right;
//			else {
//				if (s.empty())break;
//				t = s.top(); s.pop();
//			}
//		}
//		reverse(ans.begin(), ans.end());
//		return ans;
//	}
//};
//
//int main() {
//
//	system("pause");
//	return 0;
//} 