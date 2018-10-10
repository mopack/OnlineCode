//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//using namespace std;
//struct ListNode {
//	int val;
//	ListNode *next;
//	ListNode(int x) : val(x), next(NULL) {}
//};
////Sol: Coding: min. Present: AC: Lines/ms/PR
////Sol: . Present: AC: Lines/ms/PR
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	int D;
//	ListNode* go(ListNode* L1, ListNode* L2, int &C) {
//		if (!L1) { C = 0; return NULL; }
//		ListNode *t, *x; int rC = 0;
//		if (D > 0) {
//			D--;
//			t = go(L1, L2->next, rC);
//			x = new ListNode(L2->val + rC);
//		}
//		else if (D < 0) {
//			D++;
//			t = go(L1->next, L2, rC);
//			x = new ListNode(L1->val + rC);
//		}else{
//			t = go(L1->next, L2->next, rC);
//			x = new ListNode(L1->val + L2->val + rC);
//		}
//
//		x->next = t;
//		if (x -> val >= 10) {
//			x->val -= 10; C = 1;
//		}
//		else C = 0;
//		return x;
//	}
//	ListNode* addTwoNumbers(ListNode* L1, ListNode* L2) {
//		int N1 = 0, N2 = 0, C = 0;
//		for (ListNode* t = L1; t; t = t->next)N1++;
//		for (ListNode* t = L2; t; t = t->next)N2++;
//		D = N2 - N1;
//		ListNode *x = go(L1, L2, C);
//		if (C) {
//			ListNode* y = new ListNode(1);
//			y->next = x; x = y;
//		}
//		return x;
//	}
//};
//
////Sol: Coding: min. Present: AC: Lines/ms/PR
////Sol: . Present: AC: Lines/ms/PR
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	int D;
//	ListNode* go(ListNode* L1, ListNode* L2) {
//		if (!L1) return NULL; 
//		ListNode *t, *x;
//		if (D > 0) {
//			D--;
//			t = go(L1, L2->next);
//			x = new ListNode(L2->val);
//		}
//		else if (D < 0) {
//			D++;
//			t = go(L1->next, L2);
//			x = new ListNode(L1->val);
//		}
//		else {
//			t = go(L1->next, L2->next);
//			x = new ListNode(L1->val + L2->val);
//		}
//
//		x->next = t;
//		if (t && t->val >= 10) {
//			x->val++; t->val -= 10;
//		}
//		return x;
//	}
//	ListNode* addTwoNumbers(ListNode* L1, ListNode* L2) {
//		int N1 = 0, N2 = 0;
//		for (ListNode* t = L1; t; t = t->next)N1++;
//		for (ListNode* t = L2; t; t = t->next)N2++;
//		D = N2 - N1;
//		ListNode *x = go(L1, L2);
//		if (x->val >= 10) {
//			x->val -= 10;
//			ListNode* y = new ListNode(1);
//			y->next = x; x = y;
//		}
//		return x;
//	}
//};
//
////Sol: Coding: min. Present: AC: Lines/ms/PR
////Sol: . Present: AC: Lines/ms/PR
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	ListNode* go(ListNode* L1, ListNode* L2, int D) {
//		if (!L1) return NULL;
//		ListNode *t, *x;
//		if (D > 0) {
//			t = go(L1, L2->next, D - 1);
//			x = new ListNode(L2->val);
//		}
//		else if (D < 0) {
//			t = go(L1->next, L2, D + 1);
//			x = new ListNode(L1->val);
//		}
//		else {
//			t = go(L1->next, L2->next, 0);
//			x = new ListNode(L1->val + L2->val);
//		}
//
//		x->next = t;
//		if (t && t->val >= 10) {
//			x->val++; t->val -= 10;
//		}
//		return x;
//	}
//	ListNode* addTwoNumbers(ListNode* L1, ListNode* L2) {
//		int N1 = 0, N2 = 0;
//		for (ListNode* t = L1; t; t = t->next)N1++;
//		for (ListNode* t = L2; t; t = t->next)N2++;
//		ListNode *x = go(L1, L2, N2 - N1);
//		if (x->val >= 10) {
//			x->val -= 10;
//			ListNode* y = new ListNode(1);
//			y->next = x; x = y;
//		}
//		return x;
//	}
//};
//
//
//
//ListNode* Construct(vector<int>&x) {
//	ListNode *L = new ListNode(x[0]), *S = L;
//	for (int i = 1; i < x.size(); i++) {
//		ListNode* t = new ListNode(x[i]);
//		L->next = t; L = t;
//	}
//	return S;
//}
//int main() {
//    //freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	class Solution az;
//	vector<int>x1 = { 7,2,4,3 };
//	vector<int>x2 = { 5,6,4 };
//
//	ListNode *L1 = Construct(x1), *L2 = Construct(x2);
//	az.addTwoNumbers(L1, L2);
//
//	system("pause");
//	return 0;
//} 