//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//using namespace std;
////Sol: Coding: min. Present: AC: Lines/ms/PR
////Sol: . Present: AC: Lines/ms/PR
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//struct Node {
//	int i;
//	Node *prev = NULL, *next = NULL;
//	Node() {}
//	Node(int _i) :i(_i) {}
//};
//#define Link(B, F){ B->next = F, F->prev = B; }
//class Solution {
//public:
//	vector<pair<int, int>> reconstructQueue(vector<pair<int, int>>&A) {
//		if (A.size() <= 1)return A;
//		sort(A.begin(), A.end(), [](pair<int, int>a, pair<int, int>b) {
//			return (a.first == b.first) ? (a.second > b.second) : (a.first < b.first);
//		});
//
//		int i = A.size() - 1;
//		Node *Front = new Node(i), *Tail = Front, *t, *x, *L;
//		for (i--; i >= 0; i--) {
//			x = new Node(i);
//
//			int k = A[i].second;
//			for (t = Front; k--; t = t->next);
//
//			if (t == Front) {
//				Link(x, Front);
//				Front = x;
//			}else if (t == NULL) {
//				Link(Tail, x);
//				Tail = x;
//			}else {
//				L = t->prev;
//				Link(L, x);
//				Link(x, t);
//			}
//		}
//
//		vector<pair<int, int>>Ans;
//		for (t = Front; t; t = t->next) {
//			Ans.push_back(A[t->i]);
//		}
//		return Ans;
//	}
//};
////
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	vector<pair<int, int>> reconstructQueue(vector<pair<int, int>>&A) {
//		sort(A.begin(), A.end(), [](pair<int, int>a, pair<int, int>b) {
//			return (a.first == b.first) ? (a.second < b.second) : (a.first > b.first);
//		});
//
//		vector<pair<int, int>> Ans;
//		for (auto &a : A) {
//			Ans.insert(Ans.begin() + a.second, a);
//		}
//		return Ans;
//	}
//};
//
//
//int main() {
//    //freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	class Solution az;
//	vector<pair<int, int>> x = { { 8,2 },{ 4,2 },{ 4,5 },{ 2,0 },{ 7,2 },{ 1,4 },{ 9,1 },{ 3,1 },{ 9,0 },{ 1,0 } };
//	az.reconstructQueue(x);
//	system("pause");
//	return 0;
//} 