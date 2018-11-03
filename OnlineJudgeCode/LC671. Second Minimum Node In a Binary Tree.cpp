//#include <iostream>
//#include <stdlib.h>
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
////Sol: . Present: AC: 19Lines/0ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	int Fir, Sec = -1;
//	void go(TreeNode* t) {
//		if (!t)return;
//		if (t->val != Fir) {
//			if (Sec == -1) Sec = t->val;
//			else Sec = min(Sec, t->val);
//		}
//		go(t->left); go(t->right);
//	}
//	int findSecondMinimumValue(TreeNode* t) {
//		if (!t)return -1;
//		Fir = t->val;
//		go(t);
//		return Sec;
//	}
//};
//int main() {
//
//	system("pause");
//	return 0;
//}