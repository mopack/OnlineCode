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
//// . Present: AC: 23Lines/0ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	vector<vector<int>> levelOrderBottom(TreeNode* root) {
//		vector<vector<int>> ans; vector<int> an;
//		vector<TreeNode*> a, b;
//		if (root == NULL) return ans;
//		a = { root };
//		while (1) {
//			b = {}; an = {};
//			for (int i = 0; i < a.size(); i++) {
//				an.push_back(a[i]->val);
//				if (a[i]->left) b.push_back(a[i]->left);
//				if (a[i]->right) b.push_back(a[i]->right);
//			}
//			ans.push_back(an);
//			if (b.empty()) break;
//			a = b;
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