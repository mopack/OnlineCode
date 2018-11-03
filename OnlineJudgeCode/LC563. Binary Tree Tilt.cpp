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
////Sol: Traversal as an Array. Present: AC: 15Lines/4ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	int Ans = 0;
//	int Sum(TreeNode *t) {
//		if (!t)return 0;
//		int SL = Sum(t->left), SR = Sum(t->right);
//		Ans +=abs(SL - SR);
//		return SL + SR + t->val;
//	}
//	int findTilt(TreeNode* t) {
//		Sum(t);
//		return Ans;
//	}
//};
//int main() {
//
//	system("pause");
//	return 0;
//} 