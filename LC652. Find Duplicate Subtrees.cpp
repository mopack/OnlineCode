//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <unordered_map>
//
//using namespace std;
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
////Sol: . Present: AC: 16Lines/16ms/PR94
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	unordered_map<string, int>map;
//	vector<TreeNode*>ans;
//	string go(TreeNode* t) {
//		if (!t) return "#";
//		string s = to_string(t->val) + "," + go(t->left) + "," + go(t->right);
//		if (map[s]++ == 1) ans.push_back(t);
//		return s;
//	}
//	vector<TreeNode*> findDuplicateSubtrees(TreeNode* t) {
//		go(t);
//		return ans;
//	}
//};
//
////Sol: . Present: AC: 16Lines/16ms/PR94
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	string go(TreeNode* t, unordered_map<string, int>&map, vector<TreeNode*>&ans) {
//		if (!t) return "#";
//		string s = to_string(t->val) + "," + go(t->left, map, ans) + "," + go(t->right, map, ans);
//		if (map[s]++ == 1) ans.push_back(t);
//		return s;
//	}
//	vector<TreeNode*> findDuplicateSubtrees(TreeNode* t) {
//		unordered_map<string, int>map;
//		vector<TreeNode*>ans;
//		go(t, map, ans);
//		return ans;
//	}
//};
//
////Sol: . Present: AC: 23Lines/8ms/PR100 (Let N < 32767, use 16bits (a short to present a Tree)
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//	unordered_map<long, pair<short, bool>> map;
//	vector<TreeNode*>ans;
//	short ID = 1;
//	short go(TreeNode* t) {
//		if (t == nullptr) return 0;
//		long key = long(t->val) << 32 | go(t->left) << 16 | go(t->right);
//		auto it = map.find(key);
//		if (it == map.end())
//			it = map.insert({ key,{ ID++, 0 } }).first;
//		else if (it->second.second == 0) {
//			it->second.second = 1;
//			ans.push_back(t);
//		}
//		return it->second.first;
//	}
//public:
//	vector<TreeNode*> findDuplicateSubtrees(TreeNode* t) {
//		go(t);
//		return ans;
//	}
//};
//
//int main() {
//	//string s = { 1,'2',1, '2',1, '2',1, '3',0, 1,'3',0 };
//	//az.findDuplicateSubtrees(deserialize(s));
//	system("pause");
//	return 0;
//} 