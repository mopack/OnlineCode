//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <queue>
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//using namespace std;
////Sol: Coding: min. Present: AC: Lines/ms/PR
////Sol: . Present: AC: Lines/ms/PR
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//struct Node{
//	int val;
//	Node *next, *prev;
//	Node(){}
//	Node(int _val) : val(_val) { next = prev = NULL; }
//};
//class MyCircularQueue {
//	Node *front, *rear;
//	int MaxSize, Size;
//public:
//	MyCircularQueue(int k) {
//		MaxSize = k; Size = 0;
//	}
//	bool enQueue(int value) {
//		if (Size == MaxSize) return 0;
//		Node* t = new Node(value);
//		if (Size == 0) front = rear = t;
//		else {
//			rear->prev = t;
//			t->next = rear;
//			rear = t;
//		}
//		Size++;
//		return 1;
//	}
//	bool deQueue() {
//		if (Size == 0) return 0;
//		front = front->prev;
//		Size--;
//		return 1;
//	}
//	int Front() {
//		if (Size == 0) return -1;
//		return front->val;
//	}
//	int Rear() {
//		if (Size == 0) return -1;
//		return rear->val;
//	}
//	bool isEmpty() {
//		return Size == 0;
//	}
//	bool isFull() {
//		return Size == MaxSize;
//	}
//};
//
//// Single LinkedList
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//struct Node {
//	int val;
//	Node *prev;
//	Node() {}
//	Node(int _val) : val(_val) { prev = NULL; }
//};
//class MyCircularQueue {
//	Node *front, *rear;
//	int MaxSize, Size;
//public:
//	MyCircularQueue(int k) {
//		MaxSize = k; Size = 0;
//	}
//	bool enQueue(int value) {
//		if (Size == MaxSize) return 0;
//		Node* t = new Node(value);
//		if (Size == 0) front = rear = t;
//		else {
//			rear->prev = t;
//			rear = t;
//		}
//		Size++;
//		return 1;
//	}
//	bool deQueue() {
//		if (Size == 0) return 0;
//		front = front->prev;
//		Size--;
//		return 1;
//	}
//	int Front() {
//		if (Size == 0) return -1;
//		return front->val;
//	}
//	int Rear() {
//		if (Size == 0) return -1;
//		return rear->val;
//	}
//	bool isEmpty() {
//		return Size == 0;
//	}
//	bool isFull() {
//		return Size == MaxSize;
//	}
//};
//int main() {
//   //freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//
//	system("pause");
//	return 0;
//} 