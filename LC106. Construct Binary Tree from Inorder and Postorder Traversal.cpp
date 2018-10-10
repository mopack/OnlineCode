//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <stack>
//#include <algorithm>
//
//using namespace std;
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
////Sol2: Stack . Present: AC: XLines/4ms/PR100
//// Need Fix
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	TreeNode* buildTree(vector<int>& In, vector<int>& Post) {
//		if (In.empty())return NULL;
//
//		TreeNode* newNode = new TreeNode(0);
//		TreeNode* t = newNode;
//		stack<TreeNode*> s;
//
//		int Ii = In.size() - 1;
//		int Pi = Post.size() - 1;
//		while (Ii >= 0) {
//			TreeNode* Rnew = NULL; TreeNode* RnewHead = NULL;
//			do {
//				TreeNode* Cur = new TreeNode(Post[Pi]);
//				if (RnewHead == NULL || Rnew == NULL)
//					RnewHead = Rnew = Cur;
//				else {
//					Rnew->right = Cur;
//					Rnew = Rnew->right;
//				}
//				s.push(Cur);
//			} while (Post[Pi--] != In[Ii]);
//
//			t->left = RnewHead;
//
//			TreeNode* matching_Top = NULL;
//			while (!s.empty() && s.top()->val == In[Ii]) {
//				matching_Top = s.top();
//					s.pop();
//					Ii--;	
//			}
//			t = matching_Top;
//		}
//		return newNode->left;
//	}
//};
////Sol1: two BT's DFS,  Traversal as an Array. Present: AC: 18Lines/8ms/PR95
////static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
////#define vp vector<int>::iterator 
////class Solution {
////public:
////	TreeNode* go(vp Is, vp Ie, vp Ps, vp Pe) {
////		if (Ps == Pe) return NULL;
////		int M = *(Pe - 1);
////		TreeNode* t = new TreeNode(M);
////		vp InM = find(Is, Ie, M);
////		int LSize = InM - Is;
////		t->left = go(Is, Is + LSize, Ps, Ps + LSize);
////		t->right = go(InM + 1, Ie, Ps + LSize, Pe - 1);
////		return t;
////	}
////	TreeNode* buildTree(vector<int>& In, vector<int>& Post) {
////		return go(In.begin(), In.end(), Post.begin(), Post.end());
////	}
////};
//int main() {
//	Solution az;
//	vector<int> i = { 9,3,15,20,7 }, p = { 9,15,7,20,3 };
//	az.buildTree(i, p);
//
//	system("pause");
//	return 0;
//}