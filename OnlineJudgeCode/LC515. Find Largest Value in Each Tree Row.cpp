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
////Sol: . Present: AC: 21Lines/4ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	vector<int> largestValues(TreeNode* root) {
//		vector<int> ans; int ma;
//		vector<TreeNode*> a, b;
//		if (!root) return ans;
//		a = { root };
//		while (1) {
//			b = {}; ma = INT_MIN;
//			for (int i = 0; i < a.size(); i++) {
//				if (a[i]->val > ma) ma = a[i]->val;
//				if (a[i]->left ) b.push_back(a[i]->left);
//				if (a[i]->right) b.push_back(a[i]->right);
//			}
//			ans.push_back(ma);
//			if (b.empty()) return ans;
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