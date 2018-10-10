//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//using namespace std;
//
//struct ListNode {
//	int val;
//	ListNode *next;
//	ListNode(int x) : val(x), next(NULL) {}
//};
////Sol: Coding: min. Present: AC: Lines/ms/PR
////Sol: . Present: AC: Lines/32ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	int N = 0, SN = 1;
//	ListNode* S;
//	void go(ListNode* t) {
//		if (t->next) go(t->next);
//
//		if (SN < N) { // S->t->S0N
//			SN += 2;
//			ListNode* S0N = S->next;
//			S->next = t;
//
//			if (SN == N) {
//				t->next = S0N;
//				S0N->next = NULL;
//			}else if (SN > N) {
//				t->next = NULL;
//			}else {
//				t->next = S0N;
//				S = S0N;
//			}
//		}
//	}
//	void reorderList(ListNode* H) {
//		if (!H)return;
//		ListNode* t;
//		for (t = H; t; t = t->next)N++;
//		S = H;
//		go(H);
//	}
//};
//
//int main() {
//    //freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	class Solution az;
//	system("pause");
//	return 0;
//} 