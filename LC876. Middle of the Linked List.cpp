//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//using namespace std;
////Sol: Coding: min. Present: AC: Lines/ms/PR
////Sol: . Present: AC: Lines/0ms/PR100
//struct ListNode {
//	int val;
//	ListNode *next;
//	ListNode(int x) : val(x), next(NULL) {}
//};
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	ListNode* middleNode(ListNode* Root) {
//		int N = 0;
//		ListNode* t;
//		for (t = Root; t; t = t->next)N++;
//		N = N / 2;
//		
//		t = Root;
//		for (int i = 1; i <= N; i++)t = t->next;
//		return t;
//	}
//};
//
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	ListNode* middleNode(ListNode* Root) {
//		ListNode *t = Root, *m = Root;
//		while (t->next && t->next->next) {
//			t = t->next->next;
//			m = m->next;
//		}
//		if (t->next) m = m->next;
//		return m;
//	}
//};
//
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	ListNode* middleNode(ListNode* Root) {
//		ListNode *t, *m = Root;
//		for (t = Root; t->next && t->next->next; t = t->next->next) {
//			m = m->next;
//		}
//		if (t->next) m = m->next;
//		return m;
//	}
//};
//
//int main() {
//    //freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	class Solution az;
//	system("pause");
//	return 0;
//} 