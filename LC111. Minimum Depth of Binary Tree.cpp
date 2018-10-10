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
////Sol: . Present: AC: 18Lines/4ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	int minDepth(TreeNode* root) {
//		if (!root) return 0;
//		int h = 0;
//		vector<TreeNode*> a = {root}, b;
//		while (1) {
//			b = {}; h++;
//			for (int i = 0; i < a.size(); i++) {
//				if (!a[i]->left && !a[i]->right) return h;
//				if (a[i]->left) b.push_back(a[i]->left);
//				if (a[i]->right) b.push_back(a[i]->right);
//			}
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