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
//
////Sol: . Present: AC: 30Lines/8ms/PR99
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	int Ans = 0, Sum;
//	vector<int> x;
//	int go(TreeNode* t) {
//		if (!t->left && !t->right) { 
//			x.push_back(t->val); 
//			if (t->val == Sum)Ans++; 
//			return x.size() - 1; 
//		}
//
//		int L, R;
//		if (t->left ) L = go(t->left);
//		if (t->right) R = go(t->right); 
//		if (!t->left) L = R;
//		x.push_back(0);
//		for (int i = L; i < x.size(); i++) {
//			x[i] += t->val; 
//			if (x[i] == Sum) Ans++;
//		}
//		return L;
//	}
//	int pathSum(TreeNode* root, int sum) {
//		if (!root)return 0;
//		Sum = sum;
//		go(root);
//		return Ans;
//	}
//};
//
//int main() {
//
//	system("pause");
//	return 0;
//} 