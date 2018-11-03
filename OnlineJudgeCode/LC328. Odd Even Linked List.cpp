//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//using namespace std;
////Sol: Coding: min. Present: AC: Lines/ms/PR
////Sol: . Present: AC: Lines/ms/PR
//struct ListNode {
//	int val;
//	ListNode *next;
//	ListNode(int x) : val(x), next(NULL) {}
//};
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	ListNode* oddEvenList(ListNode* t) {
//		if (!t || !t->next) return t;
//		ListNode *o = t, *e = t->next, *eSt = e, *oSt = o;
//
//		while (t->next && t->next->next ) {
//			t = t->next->next;
//			o->next = t, o = t;
//			e->next = t->next, e = t->next;
//		}
//		if(t) o->next = t, o = t;
//		o->next = eSt;
//
//		return oSt;
//	}
//};
//
////8ms/PR100
//#define Next(x, y) (x->next = y, x = x->next)
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	ListNode* oddEvenList(ListNode* t) {
//		if (!t || !t->next) return t;
//		ListNode *o = t, *e = t->next, *eSt = e, *oSt = o;
//
//		while (t->next && t->next->next) {
//			t = t->next->next;
//			Next(o, t);
//			Next(e, t->next);
//		}
//		if (t) Next(o, t);
//		o->next = eSt;
//
//		return oSt;
//	}
//};
//
//#define Next(x, y) (x->next = y, x = x->next)
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	ListNode* oddEvenList(ListNode* H) {
//		if (!H || !H->next) return H;
//		ListNode *t = H, *o = t, *e = t->next, *eSt = e;
//
//		while (t->next && t->next->next) {
//			t = t->next->next;
//			Next(o, t);
//			Next(e, t->next);
//		}
//		if (t) Next(o, t);
//		o->next = eSt;
//
//		return H;
//	}
//};
//
//int main() {
//    //freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	class Solution az;
//	system("pause");
//	return 0;
//} 