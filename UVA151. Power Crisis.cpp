//#include <iostream>
//#include <vector>
//using namespace std;
//class Josephus {
//	struct Node {
//		int id;
//		Node *prev, *next;
//		Node(int _id) : id(_id), prev(nullptr), next(nullptr) {}
//	};
//	vector<Node*>d;
//	void InitD(int N) {
//		d.resize(N + 2);
//		for (int i = 1; i <= N; i++) d[i] = new Node(i);
//	}
//	Node* Reset(int N) {
//		for (int i = 1; i <= N; i++) d[i]->prev = d[i - 1], d[i]->next = d[i + 1];
//		d[1]->prev = d[N], d[N]->next = d[1];
//		return d[1];
//	}
//	void Hide(Node *t) {
//		Node *B = t->prev, *F = t->next;
//		B->next = F, F->prev = B;
//	}
//public:
//	int MinM(int N) {
//		InitD(N);
//		for (int M = 1; 1; M++) {
//			Node* t = Reset(N);
//			while (t != t->next) {
//				Hide(t);
//				for (int k = 1; k <= M; k++) t = t->next;
//			}
//			if (t->id == 13) return M;
//		}
//	}
//};
//int main() {
//	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	Josephus Jo;
//	int N;
//	while (cin >> N && N) 
//		cout << Jo.MinM(N) << '\n';
//	return 0;
//}
