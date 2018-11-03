//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//// 4ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//using It = vector<int>::iterator;
//class Solution {
//public:
//	TreeNode* go(It PreS, It PreE, It PostS, It PostE) {
//		if (PreS >= PreE) return NULL;
//		TreeNode* t = new TreeNode(*PreS);
//		
//		if (PreS + 1 != PreE) {
//			It PostR = find(PostS, PostE - 1, *(PreS + 1)) + 1;
//			int Len = PostR - PostS;
//			t->left = go(PreS + 1, PreS + 1 + Len, PostS, PostR);
//			t->right = go(PreS + 1 + Len, PreE, PostR, PostE - 1);
//		}
//		return t;
//	}
//	TreeNode* constructFromPrePost(vector<int>&Pre, vector<int>&Post) {
//		return go(Pre.begin(), Pre.end(), Post.begin(), Post.end());
//	}
//};
//
//int main() {
//	class Solution az;
//	system("pause");
//	return 0;
//} 
