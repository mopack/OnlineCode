//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//using namespace std;
////Sol: Coding: min. Present: AC: Lines/ms/PR
////Sol: . Present: AC: Lines/4ms/PR100
//struct ListNode {
//	int val;
//	ListNode *next;
//	ListNode(int x) : val(x), next(NULL) {}
//};
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	vector<ListNode*> splitListToParts(ListNode* Root, int K) {
//		int N = 0;
//		for (ListNode* t = Root; t; t = t->next)N++;
//		int Len = N / K, Add1 = N % K;
//		vector<ListNode*> Ans(K);
//
//		int Ai = 0, Size = 0, Next = Len; if (Add1) Next++, Add1--;
//		ListNode* L = NULL;
//		for (ListNode* t = Root; t; t = t->next) {
//			ListNode* x = new ListNode(t->val);
//			if (Size == 0) Ans[Ai] = L = x;
//			else L->next = x, L = x;
//			
//			Size++;
//			if (Size == Next) {
//				Size = 0; Ai++; Next = Len; if (Add1) Next++, Add1--;
//			}
//		}
//		return Ans;
//	}
//};
//int main() {
//    //freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	class Solution az;
//	vector<int>A = { 1,2,3,4,5,6,7 }; int K = 3;
//	ListNode *t = new ListNode(A[0]), *S = t;
//	for (int i = 1; i < A.size(); i++) {
//		ListNode *x = new ListNode(A[i]);
//		t->next = x;
//		t = x;
//	}
//	az.splitListToParts(S, K);
//
//
//	system("pause");
//	return 0;
//} 