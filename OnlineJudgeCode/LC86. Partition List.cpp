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
//
//
////Sol: Coding: min. Present: AC: Lines/ms/PR
////Sol: . Present: AC: Lines/4ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//#define Next(x, y) (x->next = y, x = x->next)
//class Solution {
//public:
//	ListNode* partition(ListNode* t, int K) {
//		ListNode *DL = new ListNode(0), *DG = new ListNode(0), *L = DL, *G = DG; // D stands for Dummy
//		for (; t; t = t->next) {
//			if (t->val >= K) Next(G, t);
//			else Next(L, t);
//		}
//		G->next = NULL;
//		L->next = DG->next;
//		return DL->next;
//	}
//};
//void Print(ListNode *S) {
//	ListNode *t = S;
//	for (; t; t = t->next)cout << t->val << ' ';
//	cout << "\n";
//}
//
//int main() {
//    //freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	vector<int>x = { 1,4,3,2,5,2 }; int k = 3;
//	class Solution az;
//	ListNode *t = new ListNode(x[0]), *S = t;
//	for (int i = 1; i != x.size(); i++) {
//		t->next = new ListNode(x[i]);
//		t = t->next;
//	}
//	Print(S);
//	az.partition(S, k);
//	Print(S);
//	system("pause");
//	return 0;
//} 