//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <queue>
//using namespace std;
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
////Sol: . Present: AC: 21Lines/8ms/PR99.17
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	vector<double> averageOfLevels(TreeNode* root) {
//		vector<double> ans; double an;
//		vector<TreeNode*> a, b;
//		if (root == NULL) return ans;
//		a = { root };
//		while (1) {
//			b = {}; an = 0;
//			for (int i = 0; i < a.size(); i++) {
//				an += a[i]->val;
//				if (a[i]->left != NULL)b.push_back(a[i]->left);
//				if (a[i]->right != NULL)b.push_back(a[i]->right);
//			}
//			ans.push_back(an / a.size());
//			if (b.size() == 0) return ans;
//			a = b;
//		}
//	}
//};
//
////Sol: . Present: AC: 21Lines/4ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	vector<double> averageOfLevels(TreeNode* root) {
//		if (!root) return{};
//		vector<double> ans; double an;
//		queue<TreeNode*> q; TreeNode* t; int N;
//		q.push(root);
//		while (!q.empty()) {
//			N = q.size(); an = 0;
//			for (int i = 1; i <= N;i++) {
//				t = q.front(); q.pop();
//				an += t->val;
//				if (t->left)  q.push(t->left);
//				if (t->right) q.push(t->right);
//			}
//			ans.push_back(an / N);
//		}
//		return ans;
//	}
//};
//
//int main() {
//
//	system("pause");
//	return 0;
//} 