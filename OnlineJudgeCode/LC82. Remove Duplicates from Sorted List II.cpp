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
//	ListNode* deleteDuplicates(ListNode* H) {
//		ListNode *R = new ListNode(0), *L = R, *t, *t0N;
//		for (t = H; t;) {
//			if (!t->next) L->next = t, t = NULL;
//			else if (t->next->val == t->val) {
//				int SV = t->val;
//				while (t && t->val == SV) t = t->next;
//			}else {
//				t0N = t->next;
//				L->next = t;
//				L = L->next;
//				L->next = NULL;
//				t = t0N;
//			}
//		}
//		return R->next;
//	}
//};
//int main() {
//    //freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	class Solution az;
//	vector<int>x = { 1,2,3,3,4,4,5};
//	ListNode *S = new ListNode(x[0]), *t = S;
//	for (int i = 1; i != x.size(); i++) {
//		t->next = new ListNode(x[i]);
//		t = t->next;
//	}
//	az.deleteDuplicates(S);
//	system("pause");
//	return 0;
//} 