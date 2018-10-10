//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <queue>
//using namespace std;
//struct ListNode {
//	int val;
//	ListNode *next;
//	ListNode(int x) : val(x), next(NULL) {}
//};
//// 16ms/PR99
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	ListNode* mergeKLists(vector<ListNode*>& A) {
//		auto compareNodes = [](ListNode* a, ListNode* b) ->bool {
//			if (a == nullptr) return 0;
//			else if (b == nullptr) return 1;
//			return a->val > b->val;
//		};
//
//		ListNode *R = new ListNode(0), *t = R;
//		make_heap(A.begin(), A.end(), compareNodes);
//		while (!A.empty()) {
//			pop_heap(A.begin(), A.end(), compareNodes);
//			if (A.back() == nullptr) { A.pop_back(); continue;}
//
//			t->next = A.back();
//			t = t->next;
//
//			if (A.back()->next == nullptr) A.pop_back();
//			else {
//				*(A.rbegin()) = A.back()->next;
//				push_heap(A.begin(), A.end(), compareNodes);
//			}
//		}
//		return R->next;
//	}
//};
//
////static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
////class Solution {
////	struct Comp{
////		bool operator()(ListNode* x, ListNode* y)const {
////			return x->val > y->val;
////		}
////	};
////public:
////	ListNode* mergeKLists(vector<ListNode*>& Lists) {
////		priority_queue<ListNode*, vector<ListNode*>, Comp> q;
////		ListNode *R = new ListNode(0), *t = R;
////		for (auto &L : Lists) {
////			if (L) q.push(L);
////		}
////
////		while (!q.empty()) {
////			t->next = q.top(); q.pop();
////			t = t->next;
////			if (t->next)  q.push(t->next);
////		}
////		return R->next;
////	}
////};
//
//int main() {
//	class Solution az;
//	vector<ListNode*>x;
//	for (int i = 0; i <= 1; i++)
//		x.push_back(nullptr);
//	az.mergeKLists(x);
//	system("pause");
//	return 0;
//} 
//
//
