//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <deque>
//using namespace std;
////Sol: Coding: min. Present: AC: Lines/ms/PR
////Sol: . Present: AC: Lines/ms/PR
////static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
////class MyCircularDeque {
////	deque<int> q;
////	int MaxSize;
////public:
////	MyCircularDeque(int k) {
////		MaxSize = k;
////	}
////	bool insertFront(int value) {
////		if (q.Size() == MaxSize) return 0;
////		q.push_front(value);
////		return 1;
////	}
////	bool insertLast(int value) {
////		if (q.Size() == MaxSize) return 0;
////		q.push_back(value);
////		return 1;
////	}
////	bool deleteFront() {
////		if (q.empty()) return 0;
////		q.pop_front();
////		return 1;
////	}
////	bool deleteLast() {
////		if (q.empty()) return 0;
////		q.pop_back();
////		return 1;
////	}
////	int getFront() {
////		if (q.empty()) return -1;
////		return q.front();
////	}
////	int getRear() {
////		if (q.empty()) return -1;
////		return q.back();
////	}
////	bool isEmpty() {
////		return q.empty();
////	}
////	bool isFull() {
////		return q.Size() == MaxSize;
////	}
////};
////
////// Double Linked List 16ms/PR100
////static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
////class Node {
////public:
////	int val;
////	Node *prev, *next;
////	Node() {}
////	Node(int _val) : val(_val) { prev = NULL; next = NULL; }
////};
////class MyCircularDeque {
////	Node *front, *back;
////	int Size, MaxSize;
////public:
////	MyCircularDeque(int k) {
////		front = back = NULL;
////		MaxSize = k; Size = 0;
////	}
////	bool insertFront(int value) {
////		if (Size == MaxSize) return 0;
////		Node* t = new Node(value);
////		if (Size == 0) { front = back = t;}
////		else {
////			t->next = front;
////			front->prev = t;
////			front = t;
////		}
////		Size++;
////		return 1;
////	}
////	bool insertLast(int value) {
////		if (Size == MaxSize) return 0;
////		Node* t = new Node(value);
////		if (Size == 0) { front = back = t; }
////		else {
////			back->next = t;
////			t->prev = back;
////			back = t;
////		}
////		Size++;
////		return 1;
////	}
////	bool deleteFront() {
////		if (Size == 0) return 0;
////		front = front->next;
////		Size--;
////		return 1;
////	}
////	bool deleteLast() {
////		if (Size == 0) return 0;
////		back = back->prev;
////		Size--;
////		return 1;
////	}
////	int getFront() {
////		if (Size == 0) return -1;
////		return front->val;
////	}
////	int getRear() {
////		if (Size == 0) return -1;
////		return back->val;
////	}
////	bool isEmpty() {
////		return Size == 0;
////		//return front == NULL; <-this form is also currect.
////	}
////	bool isFull() {
////		return Size == MaxSize;
////	}
////};
//
//// Deque using circular array 24ms/PR42
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class MyCircularDeque {
//	vector<int> d;
//	int front, back, Size, MaxSize;
//#define plusplus(x)   (x = (x == MaxSize - 1)?(0):(x+1))      //x = (x + MaxSize - 1) % MaxSize;  // this form is also acceptable
//#define minusminus(x) (x = (x == 0) ? (MaxSize - 1) : (x - 1))
//public:
//	MyCircularDeque(int k) {
//		Size = 0; MaxSize = k;
//		d = vector<int>(MaxSize);
//	}
//	bool insertFront(int value) {
//		if (Size == MaxSize) return 0;
//		if (Size == 0)
//			front = back = 0;
//		else
//			minusminus(front);
//		Size++;
//		d[front] = value;
//		return 1;
//	}
//	bool insertLast(int value) {
//		if (Size == MaxSize) return 0;
//		if (Size == 0)
//			front = back = 0;
//		else
//			plusplus(back);
//		Size++;
//		d[back] = value;
//		return 1;
//	}
//	bool deleteFront() {
//		if (Size == 0) return 0;
//		Size--;
//		plusplus(front);
//		return 1;
//	}
//	bool deleteLast() {
//		if (Size == 0) return 0;
//		Size--;
//		minusminus(back);
//		return 1;
//	}
//	int getFront() {
//		if (Size == 0) return -1;
//		return d[front];
//	}
//	int getRear() {
//		if (Size == 0) return -1;
//		return d[back];
//	}
//	bool isEmpty() {
//		return Size == 0;
//	}
//	bool isFull() {
//		return Size == MaxSize;
//	}
//};
//
//int main() {
//	//freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	//MyCircularDeque obj(10);
//	cout << ((-1) % 3) << '\n';
//	system("pause");
//	return 0;
//} 