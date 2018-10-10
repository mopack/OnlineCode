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
////#define Ori_begin H
////#define Ori_End   NULL
////#define New_End   NULL
////------------------------------------------------------//
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	ListNode* Reverse(ListNode* Ori_begin, int K/*Steps*/) { // New_Begin -> New_End -> Ori_End+1
//		ListNode *F, *L, *F0N;
//		for (F = Ori_begin, L = NULL/*Nothing just an Init*/; K--; L = F, F = F0N) {
//			F0N = F->next; // Temp
//			F->next = L;
//		}
//		Ori_begin->next = F; // New_End -> Ori_End+1
//		return L; // New_Begin (Ori_End)
//	}
//	ListNode* reverseBetween(ListNode* H, int M, int N) { // Ori_Begin-1 -> New_Begin -> New_End -> Ori_End+1
//		if (M == 1) return Reverse(H, N - M + 1); // Skip Ori_Begin-1 -> New_Begin
//		ListNode* t = H;
//		for (int i = 1; i <= M - 2; i++) t = t->next;
//		t->next = Reverse(t->next, N - M + 1);
//		return H;
//	}
//};
//
////static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
////class Solution {
////public:
////	ListNode* reverseBetween(ListNode* H, int M, int N) {
////		int I = 1;
////		ListNode *SL = NULL, *SF = H, *F0N = NULL, *L, *F;
////
////		for (; I < M; I++)
////			SL = SF, SF = SF->next;
////		L = SF; F = SF->next;
////
////		for (; I < N; I++, L = F, F = F0N) {
////			F0N = F->next;
////			F->next = L;
////		}
////
////		SF->next = F;
////		if (M == 1) {
////			return L;
////		}else{
////			SL->next = L;
////			return H;
////		}
////	}
////};
//
//
//int main() {
//    //freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	class Solution az;
//	int M = 2, N = 4;
//	vector<ListNode*>d(5);
//	for (int i = 0; i <= 4; i++) {
//		d[i] = new ListNode(i + 1);
//	}
//	for (int i = 0; i < 4; i++) {
//		d[i]->next = d[i + 1];
//	}
//	az.reverseBetween(d[0], M, N);
//
//	system("pause");
//	return 0;
//} 