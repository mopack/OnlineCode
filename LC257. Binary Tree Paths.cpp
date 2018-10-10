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
////Sol:BT'S DFS (Traversal as an Array with Backtracking). Present: AC: 21Lines/0ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	vector<string> Ans;
//	string S;
//	void go(TreeNode* t) {
//		if (!t) return;
//		char line[12]; sprintf(line, "%d", t->val);
//		if (!t->left && !t->right) { Ans.push_back(S + string(line)); return; }
//
//		// Backtracking
//		string S0 = S, S1 = S + string(line) + "->";
//		S = S1; go(t->left);
//		S = S1; go(t->right);
//		S = S0;
//	}
//	vector<string> binaryTreePaths(TreeNode* t) {
//		go(t);
//		return Ans;
//	}
//};
//
////Sol: BT'S DFS (Recursion Form). Present: AC: 16Lines/0ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	vector<string> binaryTreePaths(TreeNode* t) {
//		if (!t) return vector<string>();
//		vector<string> Ret, R;
//		Ret = binaryTreePaths(t->left);
//		R   = binaryTreePaths(t->right);
//		Ret.insert(Ret.end(), R.begin(), R.end());
//		char line[12]; sprintf(line, "%d", t->val); string s0(line);
//		if (Ret.empty()) return{ s0 };
//		for (auto &S : Ret) 
//			S = s0 + "->" + S;
//		return Ret;
//	}
//};
//
//int main() {
//	Solution az;
//	system("pause");
//	return 0;
//} 