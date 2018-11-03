//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//TreeNode* deserialize(string s) {
//	int id = 0, N, Val;
//	// Creating Root
//	if (s.empty() || s[0] == 0) return NULL; // No Root!
//	N = s[id++];
//	Val = stoi(s.substr(id, N));
//	id += N;
//	TreeNode* root = new TreeNode(Val);
//
//	vector<TreeNode*> a = { root }, b;
//	while (!a.empty()) {
//		b.clear();
//		for (int i = 0; i < a.size(); i++)
//			for (int lr = 0; lr <= 1; lr++) {
//				if (id >= s.size())return root;
//				if (N = s[id++]) {  // not NULL
//					Val = stoi(s.substr(id, N));
//					id += N;
//					TreeNode* t = new TreeNode(Val);
//					((lr) ? a[i]->right : a[i]->left) = t;
//					b.push_back(t);
//				}
//			}
//		swap(a, b);
//	}
//	return root;
//}
////Sol: Coding: min. Present: AC: Lines/ms/PR
////Sol: . Present: AC: 16Lines/8ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	int Ans = INT_MIN;
//	int go(TreeNode* t) { // maxPathSum through t
//		if (!t) return 0;
//		int L = go(t->left), R = go(t->right), Ret = 0;
//		Ret = max(t->val, t->val + max(L, R));
//		Ans = max(Ans, max(L + R + t->val, Ret));
//		return Ret;
//	}
//	int maxPathSum(TreeNode* t) {
//		go(t);
//		return Ans;
//	}
//};
//
////
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	int go(TreeNode* t, int& Ans) { // maxPathSum through t
//		if (!t) return 0;
//		int L = go(t->left, Ans), R = go(t->right, Ans), Ret = 0;
//		Ret = max(t->val, t->val + max(L, R));
//		Ans = max(Ans, max(L + R + t->val, Ret));
//		return Ret;
//	}
//	int maxPathSum(TreeNode* t) {
//		int Ans = INT_MIN;
//		go(t, Ans);
//		return Ans;
//	}
//};
//
//int main() {
//    //freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	class Solution az;
//	vector<int> v = {1,2,3};// { -10,9,20,0,0,15,7 };
//	vector<int> n = {1,1,1};// {3, 1, 2, 0, 0, 2, 1};
//	string s = "";
//	for (int i = 0; i != v.size(); i++) {
//		s += char(n[i]);
//		if(n[i]) s+= to_string(v[i]);
//	}
//	TreeNode* t = deserialize(s);
//	cout<<"\nAns="<<az.maxPathSum(t);
//	system("pause");
//	return 0;
//} 