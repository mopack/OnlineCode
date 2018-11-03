//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
////Sol: . Present: AC: 28Lines/0ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
//		if (!root)return {};
//		vector<vector<int>> ans; vector<int> an;
//		vector<TreeNode*> a = {root}, b;
//		bool gofront = 1;
//
//		while (1) {
//			b = {}; an = {};
//			for (int i = a.size() - 1; i >= 0; i--) {
//				an.push_back(a[i]->val);
//				if (gofront) {
//					if (a[i]->left) b.push_back(a[i]->left);
//					if (a[i]->right) b.push_back(a[i]->right);
//				}
//				else {
//					if (a[i]->right) b.push_back(a[i]->right);
//					if (a[i]->left) b.push_back(a[i]->left);
//				}
//			}
//			ans.push_back(an);
//			if (b.size() == 0) return ans;
//			a = b; gofront = !gofront;
//		}
//	}
//};
//int main() {
//	system("pause");
//	return 0;
//}