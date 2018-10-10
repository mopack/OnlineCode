//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <unordered_map>
//
//using namespace std;
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
////Sol: . Present: AC: 25Lines/4ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	unordered_map<int, int> map;
//	int go(TreeNode* t) {
//		int ret = t->val;
//		if (t->left) ret += go(t->left);
//		if (t->right) ret += go(t->right);
//		map[ret]++;
//		return ret;
//	}
//	vector<int> findFrequentTreeSum(TreeNode* root) {
//		if (!root) return{};
//		go(root);
//
//		vector<int> ans; int MV = 0;
//		for (auto iv : map) {
//			if (iv.second > MV) {
//				MV = iv.second; ans = { iv.first };
//			}
//			else if (iv.second == MV) ans.push_back(iv.first);
//		}
//		return ans;
//	}
//};
//
//int main() {
//
//
//	system("pause");
//	return 0;
//} 