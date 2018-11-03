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
////Sol: Coding: min. Present: AC: 15Lines/4ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	int Ans = 1;
//	int go(TreeNode *t) {
//		if(!t) return 0;
//		int L = go(t->left), R = go(t->right);
//		Ans = max(Ans, L + R + 1);
//		return max(L, R) + 1;
//	}
//	int diameterOfBinaryTree(TreeNode* t) {
//		go(t);
//		return Ans - 1; // Ans (#ofVertics) -> (#ofEdges) 
//	}
//};
//
//int main() {
//
//	system("pause");
//	return 0;
//} 