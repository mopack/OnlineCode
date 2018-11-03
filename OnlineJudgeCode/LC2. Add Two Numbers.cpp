//#include <iostream>
//using namespace std;
//
//struct ListNode {
//	int val;
//	ListNode *next;
//	ListNode(int x) : val(x), next(NULL) {}
//};
//
//// 16ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	ListNode* addTwoNumbers(ListNode* L1, ListNode* L2) {
//		ListNode R(0), *t = &R;
//		int c = 0;
//		while (L1 || L2 || c) {
//			int val = c;
//			if (L1)  val += L1->val, L1 = L1->next;
//			if (L2)  val += L2->val, L2 = L2->next;
//			if (val >= 10) val -= 10, c = 1; else c = 0;
//			t->next = new ListNode(val); t = t->next;
//		}
//		return R.next;
//	}
//};
//
//// 20ms/PR98
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	ListNode* add(ListNode* L1, ListNode* L2, int c) {
//		if (!L1 && !L2 && !c) return NULL;
//
//		int val = c;
//		if (L1)  val += L1->val, L1 = L1->next;
//		if (L2)  val += L2->val, L2 = L2->next;
//		if (val >= 10) val -= 10, c = 1; else c = 0;
//
//		ListNode* Now = new ListNode(val);
//		ListNode* Next = add(L1, L2, c);
//		Now->next = Next;
//		return Now;
//	}
//	ListNode* addTwoNumbers(ListNode* L1, ListNode* L2) {
//		return add(L1, L2, 0);
//	}
//};
//
//int main() {
//	Solution az;
//	ListNode* a = new ListNode(2);
//	a->next = new ListNode(4);
//	a->next->next = new ListNode(3);
//
//	ListNode* b = new ListNode(5);
//	b->next = new ListNode(6);
//	b->next->next = new ListNode(4);
//
//	ListNode* c = az.addTwoNumbers(a, b);
//
//
//
//	system("pause");
//	return 0;
//}