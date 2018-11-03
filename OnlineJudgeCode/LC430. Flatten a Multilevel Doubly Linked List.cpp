//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#define max(L,b) (((L) > (b)) ? (L) : (b))
//using namespace std;
//
//class Node {
//public:
//	int val = NULL;
//	Node* prev = NULL;
//	Node* next = NULL;
//	Node* child = NULL;
//
//	Node() {}
//
//	Node(int _val, Node* _prev, Node* _next, Node* _child) {
//		val = _val;
//		prev = _prev;
//		next = _next;
//		child = _child;
//	}
//};
////Sol: Coding: min. Present: AC: Lines/ms/PR
////Sol: . Present: AC: Lines/40ms/PR3
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	Node *L;
//	void go(Node* t) {
//		if (!t) return;
//
//		Node* x = new Node(t->val, L, NULL, NULL);
//		L->next = x;
//		L = x;
//
//		go(t->child);
//		go(t->next);
//	}
//	Node* flatten(Node* Root) {
//		if (!Root)return NULL;
//		L = new Node(Root->val, NULL, NULL, NULL);
//		Node *S = L;
//		go(Root);
//		S = S->next; S->prev = NULL; // Tech
//		return S;
//	}
//};
//int main() {
//    //freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	class Solution az;
//	system("pause");
//	return 0;
//} 