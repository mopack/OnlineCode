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
//
////Sol2: Stack. Present: AC: 26Lines/4ms/PR100
//// using stack to keep the last node,
//// we need to decide currrent node is left or right child node of previous node
//// if (pre->val == inorder[j]) means previous node has no left child, so maybe current node is right child node
//// how to check the right child node of previous node is NULL or current node?
//// if right child node is NULL, the (pre_pre->val == inorder[j+1]), so we need a while loop to check this condition
//// ex: preorder = 1,2,3,4, inorder = 3,2,1,4, this case will help you think about the purpose of while loop
////         1
////      2     4
////    3   n n   n
////   n n
//
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	TreeNode* buildTree(vector<int>&Pre, vector<int>&In) {
//		if (Pre.empty()) return NULL;
//		TreeNode* Root = new TreeNode(Pre[0]);
//		stack<TreeNode*> s; s.push(Root);
//		for (int i = 1, j = 0; i < Pre.size(); i++) {
//			TreeNode* Cur = new TreeNode(Pre[i]);
//			if (s.top()->val != In[j]) {
//				s.top()->left = Cur;
//				s.push(Cur);
//			}else{
//				TreeNode* p;
//				while (!s.empty() && s.top()->val == In[j]) {
//					p = s.top();
//					s.pop();
//					j++;
//				}
//				p->right = Cur;
//				s.push(Cur);
//			}
//		}
//		return Root;
//	}
//};
//
////Sol1: Two BT's DFS, Traversal as an Array. Present: AC: 19Lines/8ms/PR96
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//#define vp vector<int>::iterator
//class Solution {
//public:
//	TreeNode* go(vp Ps, vp Pe, vp Is, vp Ie) {
//		if (Ps == Pe) return NULL;
//		TreeNode* t = new TreeNode(*Ps);
//
//		vp InM = find(Is, Ie, *Ps);
//		int LSize = InM - Is;
//		t->left = go(Ps + 1, Ps + 1 + LSize, Is, InM);
//		t->right = go(Ps + 1 + LSize, Pe, InM + 1, Ie);
//		return t;
//	}
//	TreeNode* buildTree(vector<int>&Pre, vector<int>&In) {
//		return go(Pre.begin(), Pre.end(), In.begin(), In.end());
//	}
//};
//int main() {
//	Solution az;
//	vector<int> p = { 3,9,20,15,7 }, i = { 9,3,15,20,7 };
//	az.buildTree(p, i);
//
//	system("pause");
//	return 0;
//}