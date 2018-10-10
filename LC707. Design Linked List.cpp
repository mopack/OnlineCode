//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <list>
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//using namespace std;
////Sol: Coding: min. Present: AC: Lines/ms/PR
////Sol: . Present: AC: 67Lines/16ms/PR99.89
//struct Node {
//	int val;
//	Node *next;
//	Node() {}
//	Node(int _val) :val(_val), next(NULL) {}
//};
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class MyLinkedList {
//public:
//	int Size = 0;
//	Node *Front = NULL, *Tail = NULL;
//	int get(int index) { //O(n)
//		if (index >= Size || index < 0) return -1;
//		Node* t = Front;
//		for (int i = 1; i <= index; i++)t = t->next;
//		return t->val;
//	}
//	void addAtHead(int val) { //O(1)
//		Node* t = new Node(val);
//		if (Size == 0) {
//			Front = Tail = t;
//		}else{
//			t->next = Front;
//			Front = t;
//		}
//		Size++;
//	}
//	void addAtTail(int val) { //O(1)
//		Node* t = new Node(val);
//		if (Size == 0) {
//			Front = Tail = t;
//		}else{
//			Tail->next = t;
//			Tail = t;
//		}
//		Size++;
//	}
//	void addAtIndex(int index, int val) { //O(n)
//		if (index > Size || index < 0) return;
//		if (index == 0) {
//			addAtHead(val);
//		}else if (index == Size) {
//			addAtTail(val);
//		}else{
//			Node* t = Front;
//			for (int i = 1; i <= index - 1; i++)t = t->next;
//			Node* v = new Node(val);
//			v->next = t->next;
//			t->next = v;
//			
//			Size++;
//		}
//	}
//	void deleteAtIndex(int index) { //O(n)
//		if (index >= Size || index < 0) return;
//		if (index == 0) {
//			Front = Front->next;			
//		}else {
//			Node *t = Front;
//			for(int i = 1; i <= index - 1; i++)t = t->next;
//
//			if (index == Size - 1) // Cut Tail
//				Tail = t;
//			t->next = t->next->next;	
//		}
//		Size--;
//	}
//};
//
////Sol: 12ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class mylinkedlist {
//	vector<int>list;
//public:
//	int get(int index) {
//		if (index < 0 || index >= list.size()) return -1;
//		return list.at(index);
//	}
//	void addathead(int val) {
//		list.insert(list.begin(), val);
//	}
//	void addattail(int val) {
//		list.push_back(val);
//	}
//	void addatindex(int index, int val) {
//		if (index < 0 || index > list.size()) return;
//		if (index == list.size())
//			list.push_back(val);
//		else
//			list.insert(list.begin() + index, val);
//	}
//	void deleteatindex(int index) {
//		if (index >= list.size() || index < 0) return;
//		list.erase(list.begin() + index);
//	}
//};
//
//
//int main() {
//    //freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	MyLinkedList L;
//	vector<string> s1 = { "MyLinkedList","addAtHead","get","addAtTail","deleteAtIndex","addAtHead","deleteAtIndex","get","addAtTail","addAtHead","addAtTail","addAtTail","addAtTail","addAtIndex","get","addAtIndex","addAtHead","deleteAtIndex","addAtIndex","addAtHead","addAtIndex","deleteAtIndex","get","addAtTail","deleteAtIndex","deleteAtIndex","addAtTail","addAtTail","addAtIndex","addAtHead","get","get","addAtTail","addAtTail","addAtTail","addAtTail","addAtIndex","addAtIndex","addAtHead","addAtIndex","addAtTail","addAtHead","addAtHead","addAtHead","addAtHead","addAtHead","addAtHead","addAtTail","addAtHead","deleteAtIndex","addAtHead","get","addAtHead","get","addAtHead","addAtHead","addAtHead","addAtIndex","deleteAtIndex","addAtTail","deleteAtIndex","get","addAtIndex","addAtHead","addAtTail","deleteAtIndex","addAtHead","addAtIndex","deleteAtIndex","deleteAtIndex","deleteAtIndex","addAtHead","addAtTail","addAtTail","addAtHead","addAtTail","addAtIndex","deleteAtIndex","deleteAtIndex","addAtIndex","addAtHead","addAtHead","addAtTail","get","addAtIndex","get","addAtHead","addAtHead","addAtHead","addAtIndex","addAtIndex","get","addAtHead","get","get","addAtTail","addAtHead","addAtHead","addAtTail","addAtTail","get","addAtTail" };
//	vector<vector<int>> x1 = { {},{ 8 },{ 1 },{ 81 },{ 2 },{ 26 },{ 2 },{ 1 },{ 24 },{ 15 },{ 0 },{ 13 },{ 1 },{ 6,33 },{ 6 },{ 2,91 },{ 82 },{ 6 },{ 4,11 },{ 3 },{ 7,14 },{ 1 },{ 6 },{ 99 },{ 11 },{ 7 },{ 5 },{ 92 },{ 7,92 },{ 57 },{ 2 },{ 6 },{ 39 },{ 51 },{ 3 },{ 22 },{ 5,26 },{ 9,52 },{ 69 },{ 5,58 },{ 79 },{ 7 },{ 41 },{ 33 },{ 88 },{ 44 },{ 8 },{ 72 },{ 93 },{ 18 },{ 1 },{ 9 },{ 46 },{ 9 },{ 92 },{ 71 },{ 69 },{ 11,54 },{ 27 },{ 83 },{ 12 },{ 20 },{ 19,97 },{ 77 },{ 36 },{ 3 },{ 35 },{ 16,68 },{ 22 },{ 36 },{ 17 },{ 62 },{ 89 },{ 61 },{ 6 },{ 92 },{ 28,69 },{ 23 },{ 28 },{ 7,4 },{ 0 },{ 24 },{ 52 },{ 1 },{ 23,3 },{ 7 },{ 6 },{ 68 },{ 79 },{ 45,90 },{ 41,52 },{ 28 },{ 25 },{ 9 },{ 32 },{ 11 },{ 90 },{ 24 },{ 98 },{ 36 },{ 34 },{ 26 } };
//	
//	vector<string> s = { "MyLinkedList","addAtHead","addAtIndex","get","get","get" };
//	vector<vector<int>> x = { {},{ 1 },{ 1,2 },{ 1 },{ 0 },{ 2 } };
//
//	
//	for (int i = 1; i < s.size(); i++) {
//		if (s[i] == "addAtHead") L.addAtHead(x[i][0]);
//		else if (s[i] == "get")   L.get(x[i][0]);
//		else if (s[i] == "addAtTail") L.addAtTail(x[i][0]);
//		else if (s[i] == "deleteAtIndex") L.deleteAtIndex(x[i][0]);
//		else L.addAtIndex(x[i][0], x[i][1]);
//
//		//cout << s[i] << "(" << x[i][0];
//		//if (x[i].size() > 1) cout << "," << x[i][1];
//		//cout << "): ";
//		//for (Node* t = L.Front; t; t = t->next) {
//		//	cout << t->val << ',';
//		//}
//		//cout << " Front=" << L.Front->val << " " << " Tail=" << L.Tail->val << " Size=" << L.Size;
//		//cout << endl;
//	}
//	system("pause");
//	return 0;
//} 