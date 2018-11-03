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
//
////Sol: . Present: AC: 19Lines/0ms/PR10
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	vector<int> rightSideView(TreeNode* root) {
//		if (!root)return{};
//		vector<int> ans; 
//		vector<TreeNode*> a = {root}, b;
//		while (1) {
//			b = {};
//			ans.push_back(a.back()->val);
//			for (int i = 0; i < a.size(); i++) {
//				if (a[i]->left) b.push_back(a[i]->left);
//				if (a[i]->right) b.push_back(a[i]->right);
//			}
//			if (b.empty())return ans;
//			a = b;
//		}
//	}
//};
//// P.S. 練習LOV(右邊起的變形)：
////Sol: . Present: AC: 19Lines/0ms/PR10
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	vector<int> rightSideView(TreeNode* root) {
//		if (!root)return{};
//		vector<int> ans;
//		vector<TreeNode*> a = { root }, b;
//		while (1) {
//			b = {};
//			ans.push_back(a[0]->val);
//			for (int i = 0; i < a.size(); i++) {
//				if (a[i]->right) b.push_back(a[i]->right);
//				if (a[i]->left)  b.push_back(a[i]->left);
//			}
//			if (b.size() == 0)return ans;
//			a = b;
//		}
//	}
//};
//int main() {
//
//	system("pause");
//	return 0;
//} 