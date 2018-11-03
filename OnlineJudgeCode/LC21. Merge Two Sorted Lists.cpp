//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//struct ListNode {
//	int val;
//	ListNode *next;
//	ListNode(int x) : val(x), next(NULL) {}
//};
////4ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	ListNode* mergeTwoLists(ListNode* L1, ListNode* L2) {
//		if (!L1) return L2;
//		if (!L2) return L1;
//
//		if (L1->val <= L2->val) {
//			L1->next = mergeTwoLists(L1->next, L2);
//			return L1;
//		}else{
//			L2->next = mergeTwoLists(L1, L2->next);
//			return L2;
//		}
//	}
//};
//
////Sol: . Present: AC: Lines/8ms/PR76
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//#define Next(x) { L->next = new ListNode(x->val); L = L->next; x = x->next; }
//class Solution { // Sol2: AC (改良，重複的部分縮寫)
//public:
//	ListNode* mergeTwoLists(ListNode* L1, ListNode* L2) {
//		ListNode *R = new ListNode(0), *L = R;
//		while (L1 && L2) if(L1->val <= L2->val) Next(L1) else Next(L2)
//		while(L1) Next(L1)
//		while(L2) Next(L2)
//		return R->next;
//	}
//};
//
//class Solution { //Sol1: AC
//public:
//	ListNode* mergeTwoLists(ListNode* L1, ListNode* L2) {
//		ListNode *L = new ListNode(0), *R = L;
//		while (L1 != NULL && L2 != NULL)
//			if (L1->val <= L2->val) {
//				L->next = new ListNode(L1->val);
//				L = L->next;
//				L1 = L1->next;
//			}
//			else {
//				L->next = new ListNode(L2->val);
//				L = L->next;
//				L2 = L2->next;
//			}
//
//			while (L1 != NULL) {
//				L->next = new ListNode(L1->val);
//				L = L->next;
//				L1 = L1->next;
//			}
//			while (L2 != NULL) {
//				L->next = new ListNode(L2->val);
//				L = L->next;
//				L2 = L2->next;
//			}
//			return R->next;
//	}
//};
//
//int main() {
//	Solution az;
//	system("pause");
//	return 0;
//} 