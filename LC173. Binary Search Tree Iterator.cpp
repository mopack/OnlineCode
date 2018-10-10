//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <stack>
//#include <algorithm>
//using namespace std;
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
////Sol: . Present: AC: 20Lines/8ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class BSTIterator {
//	stack<TreeNode*> s;
//	inline void leftin(TreeNode *t) { // t & 其左子樹線依序入stack
//		for (; t; t = t->left) s.push(t);
//	}
//public:
//	BSTIterator(TreeNode *t) {
//		leftin(t);
//	}
//	bool hasNext() { /** @return whether we have a next smallest number */
//		return !s.empty();
//	}
//	int next() { /** @return the next smallest number */
//		TreeNode* t = s.top();
//		s.pop();
//		if (t->right) leftin(t->right);
//		return t->val;
//	}
//};
//int main() {
//
//	system("pause");
//	return 0;
//} 