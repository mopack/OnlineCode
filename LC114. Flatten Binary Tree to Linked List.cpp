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
//	void SetLR(TreeNode *l, TreeNode *r) {
//		left = l, right = r;
//	}
//};
//
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
////Sol: . Present: AC: 22Lines/4ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	vector<int> x;
//	void go(TreeNode* t) {
//		if (!t) return;
//		x.push_back(t->val);
//		go(t->left);
//		go(t->right);
//	}
//	void flatten(TreeNode* t) {
//		if (!t) return;
//		go(t);
//
//		t->val = x[0];
//		for (int i = 1; i < x.size(); i++) {
//			t->left = NULL;
//			t->right = new TreeNode(x[i]);
//			t = t->right;
//		}
//	}
//};
//
//int main() {
//	Solution az;
//	TreeNode* t[10]; t[0] = NULL;
//	for (int i = 1; i <= 5; i++) t[i] = new TreeNode(i);
//	t[1]->SetLR(t[2], t[0]);
//	t[2]->SetLR(t[3], t[4]);
//	t[3]->SetLR(t[5], t[0]);
//
//	LOT(t[1]);
//	az.flatten(t[1]);
//	LOT(t[1]);
//
//	system("pause");
//	return 0;
//}