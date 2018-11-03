//// V1 Double Link / 0ms
//#include <iostream>
//#include <vector>
//using namespace std;
//class Josephus {
//	struct Node {
//		int id;
//		Node *next, *prev;
//		Node(int _id) : id(_id), next(nullptr), prev(nullptr) {}
//	};
//	vector<Node*>d;
//	void InitD(int N) {
//		while (d.size() < N + 2)
//			d.emplace_back(new Node(0));
//	}
//	Node* Reset(int s, int N) {
//		for (int i = 1; i <= N; i++) d[i]->id = i;
//		for (int i = 1; i <= N; i++)
//			d[i]->next = d[i + 1], d[i]->prev = d[i - 1];
//		d[N]->next = d[1], d[1]->prev = d[N];
//		return d[s]->prev;
//	}
//	void Hide(Node *t) {
//		Node *B = t->prev, *F = t->next;
//		B->next = F, F->prev = B;
//	}
//	void UnHide(Node *t, int id) {
//		t->id = id;
//		t->prev->next = t;
//		t->next->prev = t;
//	}
//public:
//	int AliveStart(int N, int K) {
//		InitD(N);
//
//		for (int s = 1; 1; s++) {
//			Node *t = Reset(s, N), *m;
//			while(t!= t->next) {
//				for (int i = 1; i <= K; i++)t = t->next;
//				Hide(t);
//
//				m = t;
//				for (int i = 1; i <= K; i++)m = m->next;
//				UnHide(t, m->id);
//				Hide(m);
//			}
//			if (t->id == 1)  return s;
//		}
//	}
//};
//int main() {
//	int N, K; Josephus Jo;
//	while (cin >> N >> K && N) 
//		cout << Jo.AliveStart(N, K) << '\n';
//	return 0;
//}