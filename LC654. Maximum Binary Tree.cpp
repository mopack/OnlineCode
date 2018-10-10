//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <stack>
//using namespace std;
//
//struct TreeNode {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
////Sol2: Stack. (Please Refer HeapSort or RPN Transform). Present: AC: 17Lines/32ms/PR100
////P.S. if you write "TreeNode *Cur"  instead of "TreeNode* Cur" and "auto a" instead of "auto &a", it will be 36ms.
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	TreeNode* constructMaximumBinaryTree(vector<int>&A) {
//		vector<TreeNode*> s;
//		for (auto &a : A) {
//			TreeNode* Cur = new TreeNode(a);
//			while (!s.empty() && s.back()->val < a){
//				Cur->left = s.back();
//				s.pop_back();
//			}
//			if (!s.empty()) s.back()->right = Cur;
//			s.push_back(Cur);
//		}
//		return s.front();
//	}
//};
//
////Sol1: BT's DFS, Traversal as an Array. Present: AC: 18Lines/36ms/PR99.40
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	TreeNode* go(int s, int e, vector<int>&A) {
//		if (s > e) return NULL;
//		int mv = INT_MIN, mi = -1;
//		for (int i = s; i <= e; i++)
//			if (A[i] > mv) mv = A[i], mi = i;
//
//		TreeNode* t = new TreeNode(mv);
//		t->left = go(s, mi - 1, A);
//		t->right = go(mi + 1, e, A);
//		return t;
//	}
//	TreeNode* constructMaximumBinaryTree(vector<int>&A) {
//		return go(0, A.size() - 1, A);
//	}
//};
//
//int main() {
//	Solution az;
//	vector<int> x = {3, 2, 1, 6, 0, 5};
//	TreeNode* a = az.constructMaximumBinaryTree(x);
//	cout << a->val <<endl;
//
//	system("pause");
//	return 0;
//}