//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//struct TreeLinkNode {
//	int val;
//	TreeLinkNode *left, *right, *next;
//	TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
//};
////Sol: . Present: AC: 10Lines/10ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	void connect(TreeLinkNode *t) {
//		if (!t || !t->left)return;
//		t->left ->next = t->right;
//		t->right->next = (t->next) ? t->next->left: NULL;
//		connect(t->left); connect(t->right);
//	}
//};
//
//int main() {
//	Solution az;
//	TreeLinkNode *t[20]; t[0] = NULL;
//	for(int i=1;i<=15;i++) t[i] = new TreeLinkNode(i-2);
//	for (int i = 1; i <= 7; i++) {
//		t[i]->left = t[i * 2];
//		t[i]->right = t[i * 2 + 1];
//	}
//
//	for (int i = 1; i <= 15; i++)
//		printf("%2d:%2d ", i, ((t[i]->next == NULL) ? -9 : t[i]->next->val + 2)); cout << endl;
//	az.connect(t[1]);
//	for (int i = 1; i <= 15; i++) printf("%2d:%2d ", i, ((t[i]->next == NULL) ? -9 : t[i]->next->val + 2)); cout << endl;
//
//	system("pause");
//	return 0;
//}