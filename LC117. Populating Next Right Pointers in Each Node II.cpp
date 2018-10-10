//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//using namespace std;
//
//struct TreeLinkNode {
//	int val;
//	TreeLinkNode *left, *right, *next;
//	TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
//};
////Sol: . Present: AC: 16Lines/16ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	void connect(TreeLinkNode* t) {
//		if (!t)return;
//		TreeLinkNode* p;
//		for (p = t->next; p; p = p->next) {
//			if (p->left) { p = p->left; break; }
//			if (p->right) { p = p->right; break; }
//		}
//		if (t->right) t->right->next = p;
//		if (t->left) t->left->next = (t->right) ? t->right : p;
//		connect(t->right);
//		connect(t->left);
//	}
//};
//
//int main() {
//    //freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	class Solution az;
//	TreeLinkNode t(1), s(2);
//	t.left = &s;
//	az.connect(&t);
//	system("pause");
//	return 0;
//} 