//#include <iostream>
//#include <cstdlib>
//
//using namespace std;
//
////Definition for singly - linked list.
//struct ListNode {
//	int val;
//	ListNode *next;
//	ListNode(int x) : val(x), next(NULL) {}
//};
//
//
//class Solution {
//public:
//	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//		ListNode *lans = new ListNode(0);
//		ListNode *lansoriginal = lans;
//
//		while (1) {
//			lans->val += l1->val + l2->val;
//			l1 = l1->next;
//			l2 = l2->next;
//
//			int adder = 0;
//			if (lans->val >= 10) {
//				lans->val -= 10;
//				adder = 1;
//			}
//
//			if (l1 == NULL && l2 == NULL){
//				if (adder == 1) {
//					lans->next = new ListNode(adder);
//				}
//				break;
//			}
//			else {
//				if (l1 == NULL) {
//					l1 = new ListNode(0);
//				}else if(l2 == NULL){
//					l2 = new ListNode(0);
//				}
//
//				lans->next = new ListNode(adder);
//				lans = lans->next;
//			}
//	
//			
//		}
//		return lansoriginal;
//	}
//}ans;
//
//int main2() {
//
//	ListNode* a = new ListNode(2);
//	a->next = new ListNode(4);
//	a->next->next = new ListNode(3);
//
//	ListNode* b = new ListNode(5);
//	b->next = new ListNode(6);
//	b->next->next = new ListNode(4);
//
//	ListNode* c = ans.addTwoNumbers(a, b);
//
//
//
//	system("pause");
//	return 0;
//}