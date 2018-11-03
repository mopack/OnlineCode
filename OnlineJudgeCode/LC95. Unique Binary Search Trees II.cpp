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
////Level Order Traversal
//void LOT(TreeNode *t) {
//	vector<int> ans = {};
//	vector<TreeNode*> a, b;
//	
//	a = { t };
//
//	while (1) {
//		b = {};
//		for (int i = 0; i < a.size(); i++) {
//			if (a[i] == NULL) {
//				ans.push_back(0);
//			}else{
//				ans.push_back(a[i]->val);
//				if (a[i]->left != NULL || a[i]->right != NULL) {
//					b.push_back(a[i]->left);
//					b.push_back(a[i]->right);
//				}
//			}
//		}
//		
//		if (b.size() == 0) break;
//		a = b;
//	}
//
//	//display in stdout
//	for (int i = 0; i < ans.size(); i++) {
//		printf("%d ", ans[i]);
//	}
//	cout << endl;
//}
//
////Sol: . Present: AC: 32Lines/8ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	vector<TreeNode*> go(int s, int e) {
//		if (s > e) return{ NULL };
//		vector<TreeNode*> at = {}, L, R;
//		TreeNode *t;
//		for (int i = s; i <= e; i++) {
//			L = go(s, i - 1);
//			R = go(i + 1, e);
//			for (auto &l : L)
//				for(auto &r : R){
//					t = new TreeNode(i); 
//					t->left = l; t->right = r;
//					at.push_back(t);
//				}
//		}
//		return at;
//	}
//	vector<TreeNode*> generateTrees(int n) {
//		if (n <= 0)return {};
//		return go(1, n);
//	}
//};
//
//int main() {
//	Solution az;
//	vector<TreeNode*> at = az.generateTrees(3);
//	for (int i = 0; i < at.size(); i++) {
//		LOT(at[i]);
//	}
//
//	system("pause");
//	return 0;
//}