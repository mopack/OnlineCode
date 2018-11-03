//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//using namespace std;
//
//
//struct ListNode {
//	int val;
//	ListNode *next;
//	ListNode(int x) : val(x), next(NULL) {}
//};
//void Print(ListNode* t) {
//	for (; t; t = t->next) cout << t->val << ' ';
//	cout << "\n";
//}
////Sol: Coding: min. Present: AC: Lines/ms/PR
////Sol: . Present: AC: Lines/32ms/PR93
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	ListNode* Merge(ListNode* L1, ListNode* L2) {
//		if (!L1) return L2;
//		if (!L2) return L1;
//		if (L1->val <= L2->val) {
//			L1->next = Merge(L1->next, L2);
//			return L1;
//		}else{
//			L2->next = Merge(L1, L2->next);
//			return L2;
//		}
//	}
//	ListNode* sortList(ListNode* S) {
//		if (!S || !S->next) return S;
//		ListNode *t = S, *M = t, *N; //save it
//		while (t->next && t->next->next) {
//			t = t->next->next;
//			M = M->next;
//		}
//		N = M->next;
//		M->next = NULL;
//		
//		return Merge(sortList(S), sortList(N));
//	}
//};
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	ListNode* Merge(ListNode* L1, ListNode* L2) {
//		if (!L1) return L2;
//		if (!L2) return L1;
//		if (L1->val <= L2->val) {
//			L1->next = Merge(L1->next, L2);
//			return L1;
//		}
//		else {
//			L2->next = Merge(L1, L2->next);
//			return L2;
//		}
//	}
//	ListNode* sortList(ListNode* t) {
//		if (!t || !t->next) return t;
//		ListNode *S = t, *M = t, *N;
//		while (t->next && t->next->next) {
//			t = t->next->next;
//			M = M->next;
//		}
//		N = M->next;
//		M->next = NULL;
//
//		return Merge(sortList(S), sortList(N));
//	}
//};
//int main() {
//    //freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	vector<int> x = { 4,2 ,1,3};
//	class Solution az;
//	ListNode *t = new ListNode(x[0]), *S = t;
//	for (int i = 1; i != x.size(); i++) {
//		ListNode* u = new ListNode(x[i]);
//		t->next = u; t = t->next;
//	}
//	Print(S);
//	S = az.sortList(S);
//	Print(S);
//
//	system("pause");
//	return 0;
//} 