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
////Sol: . Present: AC: 16Lines/8ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	TreeNode* go(int s, int e, vector<int>& d) {
//		if (s > e) return NULL;
//		int x = (s + e) / 2;
//		TreeNode* t = new TreeNode(d[x]);
//		t->left  = go(s, x - 1, d);
//		t->right = go(x + 1, e, d);
//		return t;
//	}
//	TreeNode* sortedArrayToBST(vector<int>& nums) {
//		if (nums.empty()) return NULL;		
//		return go(0, nums.size()-1, nums);
//	}
//};
//
//int main() {
//
//	system("pause");
//	return 0;
//} 