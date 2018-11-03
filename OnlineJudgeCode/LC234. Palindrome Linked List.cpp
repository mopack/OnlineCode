//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//struct ListNode {
//	int val;
//	ListNode *next;
//	ListNode(int x) : val(x), next(NULL) {}
//};
//class Solution {
//public:
//	bool ans = 1;
//	int len = 0, m, i; // length , nextone/endone's index , counter
//	ListNode *A;
//
//	void go(ListNode *t) {
//		if (i++ < m)go(t->next);
//		if (t->val != A->val) ans = 0;
//		A = A->next;
//	}
//	bool isPalindrome(ListNode* R) {
//		for (A = R; A != NULL; A = A->next)len++;
//		m = ((len & 1) ? len + 1 : len) / 2;
//		if (len <= 1)return 1;
//
//		for (i = 0, A = R; i < m; i++, A = A->next);
//		m -= (len & 1) ? 2 : 1;
//		i = 0;
//
//		go(R);
//		return ans;
//	}
//};
//int main() {
//	ListNode *a[2];
//	a[0] = new ListNode(1);
//	a[1] = new ListNode(2);
//	a[0]->next = a[1];
//
//	class Solution az;
//	system("pause");
//	return 0;
//} 