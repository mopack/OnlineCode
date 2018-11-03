//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//using namespace std;
//struct ListNode {
//	int val;
//	ListNode *next;
//	ListNode(int x) : val(x), next(NULL) {}
//};
////Sol: Coding: min. Present: AC: Lines/ms/PR
////Sol: . Present: AC: Lines/ms/PR
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	ListNode *detectCycle(ListNode *H) {
//		if (!H || !H->next) return NULL;
//		ListNode *slow = H, *fast = H, *entry = H;
//		while (fast->next && fast->next->next) {
//			slow = slow->next;
//			fast = fast->next->next;
//			if (fast == slow) {
//				while (entry != slow) {
//					slow = slow->next;
//					entry = entry->next;
//				}
//				return entry;
//			}
//		}
//		return NULL;
//	}
//};
//int main() {
//    //freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	class Solution az;
//	system("pause");
//	return 0;
//} 