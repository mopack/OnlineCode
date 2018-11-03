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
////Sol: LOV. Present: AC: 17Lines/4ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	int findBottomLeftValue(TreeNode* root) {
//		vector<TreeNode*> a, b;
//		a = { root };
//		while (1) {
//			b = {};
//			for (int i = 0; i < a.size(); i++) {
//				if (a[i]->left) b.push_back(a[i]->left);
//				if (a[i]->right) b.push_back(a[i]->right);
//			}
//			if (b.empty()) return a[0]->val;
//			a = b;
//		}
//	}
//};
//
//int main() {
//
//	system("pause");
//	return 0;
//} 