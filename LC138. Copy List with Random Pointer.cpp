//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <unordered_map>
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//using namespace std;
//
//struct RandomListNode {
//	int label;
//	RandomListNode *next, *random;
//	RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
//};
////Sol: Coding: min. Present: AC: Lines/ms/PR
////Sol: . Present: AC: Lines/ms/PR
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	RandomListNode *copyRandomList(RandomListNode *Root) {
//		if(!Root) return NULL;
//		int i; RandomListNode* t;
//
//		unordered_map<RandomListNode*, int> Map;
//		vector<RandomListNode*> v;
//		for (t = Root; t; t = t->next) {
//			v.push_back(new RandomListNode(t->label));
//			Map[t] = v.size() - 1;
//			if (v.size() >= 2) v[v.size() - 2]->next = v.back();
//		}
//
//		for (i = 0, t = Root; t; t = t->next, i++) {
//			if (t->random) {
//				v[i]->random = v[ Map[t->random] ];
//			}
//		}
//		return v[0];
//	}
//};
//
//int main() {
//    //freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	class Solution az;
//	system("pause");
//	return 0;
//} 