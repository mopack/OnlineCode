//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//struct ListNode {
//	int val;
//	ListNode *next;
//	ListNode(int x) : val(x), next(NULL) {}
//};
////------------------------------------------------------//
////Three Settings:
//#define Ori_begin H
//#define Ori_End   NULL
//#define New_End   NULL
////------------------------------------------------------//
////Iterative, 步進反轉法. 4ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	ListNode* reverseList(ListNode* H) {
//		ListNode *F, *L, *F0N;
//		for (F = Ori_begin, L = New_End; F != Ori_End; L = F, F = F0N) {
//			F0N = F->next; // Temp
//			F->next = L;
//		}
//		return L; // New_begin
//	}
//};
//
////Recursive, 4ms/PR100. 步進法
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	ListNode* newH;
//	ListNode* Reverse1(ListNode* L) {
//		if (L->next == Ori_End) newH = L;
//		else
//			Reverse1(L->next)->next = L;
//		return L;
//	}
//	ListNode* reverseList(ListNode* H) {
//		if (H == Ori_End)return New_End;
//		H = Reverse1(H);
//		H->next = New_End;
//		return newH;
//	}
//};
////------------------------------------------------------//
////Recursive, 減一長度法(V1). 4ms/PR100 
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	ListNode* reverseList(ListNode* L) {
//		if (L == Ori_End) return L;
//		if (L->next == Ori_End) return L;
//
//		ListNode* F = L->next;
//		ListNode* newH = reverseList(F);
//		F->next = L;
//		
//		L->next = New_End;
//		return newH;
//	}
//};
////Recursive, 減一長度法(V2). 8ms/PR15  
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	ListNode* Reverse(ListNode* L) {
//		if (L->next == Ori_End) return L;
//		ListNode* F = L->next;
//		ListNode* newH = Reverse(F);
//		F->next = L;
//		return newH;
//	}
//	ListNode* reverseList(ListNode* H) {
//		if (H == Ori_End)return New_End;
//		ListNode* newH = Reverse(H); // New_Begin
//		H->next = New_End;
//		return newH;
//	}
//};
//
//int main() {
//	Solution az;
//	vector<ListNode*>d(5);
//	for (int i = 0; i <= 4; i++) {
//		d[i] = new ListNode(i + 1);
//	}
//	for (int i = 0; i < 4; i++) {
//		d[i]->next = d[i + 1];
//	}
//	az.reverseList(d[0]);
//	system("pause");
//	return 0;
//} 