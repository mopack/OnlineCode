//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//using namespace std;
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
////Sol: Coding: min. Present: AC: Lines/ms/PR
////Sol: . Present: AC: Lines/36ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	TreeNode* insertIntoBST(TreeNode* R, int val) {
//		TreeNode *add = new TreeNode(val), *t = R;
//		if (!R) return add;
//		while (1) {
//			if (val < t->val) {
//				if (t->left)
//					t = t->left; 
//				else {
//					t->left = add; break;
//				}
//			}else{
//				if (t->right) 
//					t = t->right;
//				else {
//					t->right = add;  break; 
//				}
//			}
//		}
//		return R;
//	}
//};
//int main() {
//    //freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	class Solution az;
//	system("pause");
//	return 0;
//} 