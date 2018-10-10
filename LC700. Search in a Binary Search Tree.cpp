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
////Sol: . Present: AC: Lines/12ms/PR99
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	TreeNode* searchBST(TreeNode* t, int val) {
//		while (t!=nullptr) {
//			if (t->val == val) return t;
//			if (val > t->val) t = t->right;
//			else t = t->left;
//		}
//		return nullptr;
//	}
//};
//int main() {
//    //freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	class Solution az;
//	vector<int> x = { 4,2,7,1,3 };
//	TreeNode* t[5];
//	for (int i = 0; i < 5; i++)
//		t[i] = new TreeNode(x[i]);
//	for (int i = 0; i*2+2 < 5; i +=2) {
//		t[i]->left = t[i*2+1];
//		t[i]->right = t[i*2+2];
//	}
//	az.searchBST(t[0], 5);
//
//	system("pause");
//	return 0;
//} 