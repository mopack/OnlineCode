//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//struct ListNode {
//	int val;
//	ListNode *next;
//	ListNode(int x) : val(x), next(NULL) {}
//};
//// 12ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	pair<ListNode*, ListNode*> Reverse(ListNode* Ori_begin, ListNode* Ori_End) { // New_Begin -> New_End
//		ListNode *F, *L, *F0N;
//		for (F = Ori_begin, L = Ori_End; F != Ori_End; L = F, F = F0N) {
//			F0N = F->next; // Temp
//			F->next = L;
//		}
//		return{ L, F }; // New_begin, Ori_End+1
//	}
//	ListNode* reverseKGroup(ListNode* H, int K) {
//		ListNode *D = new ListNode(0); D->next = H; // Dummy
//		ListNode *OB = D;
//		// Ori_Begin-1 -> New_Begin -> New_End -> Ori_End+1
//		while (H) {
//			ListNode *E = H;
//			for (int i = 1; i < K; i++) {
//				E = E->next;
//				if (E == NULL) return D->next;
//			}
//			pair<ListNode*, ListNode*> Ret = Reverse(H, E->next);
//			OB->next = Ret.first;
//			OB = H; // Ori_Begin-1 = NewEnd
//			H = Ret.second;
//		}
//		return D->next;
//	}
//};
//
//// Another Question. If Tail Still Reverse
////static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
////class Solution {
////public:
////	pair<ListNode*, ListNode*> Reverse(ListNode* Ori_begin, int K/*Steps*/) { // New_Begin -> New_End
////		ListNode *F, *L, *F0N;
////		for (F = Ori_begin, L = NULL/*Nothing just an Init*/; F && K--; L = F, F = F0N) {
////			F0N = F->next; // Temp
////			F->next = L;
////		}
////		return{ L, F }; // New_Begin, New_End+1
////	}
////	ListNode* reverseKGroup(ListNode* H, int K) {
////		ListNode *D = new ListNode(0); // Dummy
////		ListNode *OB = D;
////		// Ori_Begin-1 -> New_Begin -> New_End -> Ori_End+1
////		while (H) {
////			pair<ListNode*, ListNode*> Ret = Reverse(H, K);
////			OB->next = Ret.first;
////			OB = H;
////			H = Ret.second;
////		}
////		return D->next;
////	}
////};
//
//int main() {
//	class Solution az;
//	vector<ListNode*>d(5);
//	for (int i = 0; i <= 4; i++) {
//		d[i] = new ListNode(i + 1);
//	}
//	for (int i = 0; i < 4; i++) {
//		d[i]->next = d[i + 1];
//	}
//	az.reverseKGroup(d[0], 2);
//	system("pause");
//	return 0;
//} 
//
//
