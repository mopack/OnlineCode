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
////Sol: . Present: AC: Lines/8ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	int numComponents(ListNode* Head, vector<int>&G) {
//		int N = *max_element(G.begin(), G.end());
//		vector<bool>Gb(N+1, 0);
//		for (auto g : G)Gb[g] = 1;
//
//		int Ans = 0; bool Con = 0;
//		for (ListNode* t = Head; t; t = t->next) {
//			if (t->val <= N && Gb[t->val]) {
//				if (!Con) {
//					Con = 1; Ans++;
//				}
//			}else
//				Con = 0;
//		}
//		return Ans;
//	}
//};
//
//int main() {
//    //freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	class Solution az;
//	system("pause");
//	return 0;
//} 