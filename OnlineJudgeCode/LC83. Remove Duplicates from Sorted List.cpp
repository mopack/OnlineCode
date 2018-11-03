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
//class Solution {
//public:
//	ListNode* deleteDuplicates(ListNode* R) {
//		if (R == NULL)return NULL;
//		ListNode *A = R, *L;
//		int t = A->val;
//
//		while (A->next!=NULL)
//			if (A->next->val == t) {
//				L = A;
//				while (A->next != NULL && A->next->val == t) A = A->next;
//				L->next = A->next;
//				A = L;
//			}else{
//				A = A->next;
//				t = A->val;
//			}
//		return R;
//	}
//};
//int main() {
//	class Solution az;
//	system("pause");
//	return 0;
//} 