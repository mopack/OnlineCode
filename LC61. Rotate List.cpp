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
////Sol: . Present: AC: Lines/8ms/PR97
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	ListNode* Start;
//	int go(ListNode* t, int K) {
//		if (!t) return 0;
//		int x = go(t->next, K);
//		if (x == K) {
//			Start = t->next;
//			t->next = NULL;
//		}
//		return x + 1;
//	}
//	ListNode* rotateRight(ListNode* H, int K) {
//		if (!H) return H;
//		int N = 1;
//		ListNode *E;
//		for (E = H; E->next; E = E->next) N++;
//		K %= N;
//		if (K == 0) return H;
//		go(H, K);
//		E->next = H;
//		return Start;
//	}
//};
//int main() {
//    //freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	class Solution az;
//	system("pause");
//	return 0;
//} 