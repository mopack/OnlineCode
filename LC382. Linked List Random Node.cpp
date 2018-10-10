////#include <bits/stdc++.h>
//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//struct ListNode {
//	int val;
//	ListNode *next;
//	ListNode(int x) : val(x), next(NULL) {}
//};
////20ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	ListNode* H;
//	Solution(ListNode* _H) : H(_H){}
//
//	int getRandom() {
//		int Val = H->val;
//		ListNode* t = H;
//		for (int i = 1; t; i++, t = t->next) {
//			if (rand() % i == 0) Val = t->val;
//		}
//		return Val;
//	}
//};
//
////20ms/PR100
//#include <random>
//class Solution {
//public:
//	/** @param head The linked list's head.
//	Note that the head is guaranteed to be not null, so it contains at least one node. */
//	Solution(ListNode* head) :engine_(device_()) {
//		list_head_ = head;
//	}
//
//	/** Returns a random node's value. */
//	int getRandom() {
//		int res = list_head_->val;
//		ListNode *iter = list_head_->next;
//		int i = 1;
//		while (iter)
//		{
//			uniform_int_distribution<int> dist(0, i);
//			if (dist(engine_) == 0)
//				res = iter->val;
//			i++;
//			iter = iter->next;
//		}
//		return res;
//	}
//private:
//	ListNode *list_head_;
//	random_device  device_;
//	default_random_engine engine_;
//};
//int main() {
//	system("pause");
//	return 0;
//} 
