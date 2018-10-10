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
////Sol: . Present: AC: 22Lines/0ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	vector<vector<int>> levelOrder(TreeNode* root) {
//		if (!root) return{};
//		vector<vector<int>> ans; vector<int> an;
//		vector<TreeNode*> a = { root }, b;
//		while(!a.empty()){
//			b = {}; an = {};
//			for (int i = 0; i < a.size(); i++) {
//				an.push_back(a[i]->val);
//				if (a[i]->left) b.push_back(a[i]->left);
//				if (a[i]->right) b.push_back(a[i]->right);
//			}
//			ans.push_back(an);
//			swap(a, b);
//		}
//		return ans;
//	}
//};
//// Queue. Present: AC: 20Lines/0ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	vector<vector<int>> levelOrder(TreeNode* root) {
//		vector<vector<int>> ans; vector<int> an;
//		queue<TreeNode*>q; TreeNode* t;  int N;
//		if (!root) return ans;
//		for (q.push(root); !q.empty();) {
//			N = q.size(); an.resize(N);
//			for (int i = 0; i < N; i++) {
//				t = q.front(); q.pop();
//				an[i] = t->val;
//				if (t->left) q.push(t->left);
//				if (t->right) q.push(t->right);
//			}
//			ans.push_back(an);
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