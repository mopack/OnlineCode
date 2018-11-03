//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//using namespace std;
//
//struct ListNode {
//	int val;
//	ListNode *next;
//	ListNode(int x) : val(x), next(NULL) {}
//};
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
////Sol: Coding: min. Present: AC: Lines/ms/PR
////Sol: . Present: AC: Lines/12ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	TreeNode* go(int s, int e, vector<int>&v) {
//		if (s > e) return NULL;
//		int m = (s + e) / 2;
//		TreeNode* t = new TreeNode(v[m]);
//		t->left = go(s, m - 1, v);
//		t->right = go(m + 1, e, v);
//		return t;
//	}
//	TreeNode* sortedListToBST(ListNode* t) {
//		vector<int>v;
//		for (; t; t = t->next)v.push_back(t->val);
//		return go(0, int(v.size()) - 1, v);
//	}
//};
//int main() {
//    //freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	class Solution az;
//	system("pause");
//	return 0;
//} 