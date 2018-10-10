//#include <iostream>
//#include <cstdlib>
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
//class Solution { // AC: 20ms PR99.95%
//public:
//	ListNode *getIntersectionNode(ListNode *R1, ListNode *R2) {
//		if (R1 == NULL || R2 == NULL) return NULL;
//
//		ListNode *A1 = R1, *A2 = R2;
//		int d = 0; // lenght: Al - A2
//		for (; A1->next != NULL; d++, A1 = A1->next);
//		for (; A2->next != NULL; d--, A2 = A2->next);
//		if (A1 != A2)return NULL;
//		
//		A1 = R1; A2 = R2;
//		for (; d > 0; d--, A1 = A1->next);
//		for (; d < 0; d++, A2 = A2->next);
//		for (; A1->val != A2->val; A1 = A1->next, A2 = A2->next);
//		return A1;
//	}
//};
//int main() {
//	class Solution az;
//	system("pause");
//	return 0;
//} 