//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//using namespace std;
////Sol: Coding: min. Present: AC: Lines/ms/PR
////Sol: . Present: AC: Lines/4ms/PR
//struct ListNode {
//	int val;
//	ListNode *next;
//	ListNode(int x) : val(x), next(NULL) {}
//};
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	int go(ListNode* t, int n) {
//		if (!t) return 0;
//		int x = go(t->next, n);
//		if (x == n) {
//			t->next = t->next->next;
//		}
//		return x + 1;
//	}
//	ListNode* removeNthFromEnd(ListNode* t, int n) {
//		int x = go(t, n);
//		if (x == n) return t->next;
//		else 
//			return t;
//	}
//};
//int main() {
//    //freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	class Solution az;
//	system("pause");
//	return 0;
//} 