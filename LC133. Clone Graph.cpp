//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <unordered_map>
//
//using namespace std;
//struct UndirectedGraphNode {
//	int label;
//	vector<UndirectedGraphNode *> neighbors;
//	UndirectedGraphNode(int x) : label(x) {};
//};
//
//class Solution {
//public:
//	unordered_map<UndirectedGraphNode*, UndirectedGraphNode*> map;
//
//	UndirectedGraphNode* go(UndirectedGraphNode* t) {
//		if (map[t]) return map[t];
//		UndirectedGraphNode* s = new UndirectedGraphNode(t->label);
//		map[t] = s;
//		s->neighbors = vector<UndirectedGraphNode *>();
//		for (int i = 0; i < t->neighbors.size(); i++) {
//			s->neighbors.push_back(go(t->neighbors[i]));
//		}
//		return s;
//	}
//	UndirectedGraphNode *cloneGraph(UndirectedGraphNode *r1) {
//		if (r1 == nullptr)return nullptr;
//		return go(r1);
//	}
//};
//
//int main() {
//	system("pause");
//	return 0;
//} 