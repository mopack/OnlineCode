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
////Sol: BT's DFS, Traversal as an Array. Present: AC: 21Lines/4ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	vector<vector<int>> Ans = {};
//	vector<int> an = {};
//	void go(TreeNode* t, int sum) {
//		if (!t)return;
//		an.push_back(t->val); sum -= t->val;
//		if (!t->left && !t->right) {
//			if (sum == 0) Ans.push_back(an);
//		}else{
//			go(t->left, sum);
//			go(t->right, sum);
//		}
//		an.pop_back();
//	}
//	vector<vector<int>> pathSum(TreeNode* t, int sum) {
//		go(t, sum);
//		return Ans;
//	}
//};
//
//int main() {
//
//	system("pause");
//	return 0;
//}