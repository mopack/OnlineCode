//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int Val) : val(Val), left(NULL), right(NULL) {}
//};
////Sol: . Present: AC: 52Lines/16ms/PR98.96 (PR100 is cheating)
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Codec {
//public:
//	// Encodes a tree to a single string.
//	string serialize(TreeNode* root) {
//		string s = "";
//		vector<TreeNode*> a = { root }, b;
//		while (!a.empty()) {
//			b.clear();
//			for (int i = 0; i < a.size(); i++)
//				if (!a[i]) s.push_back(0);
//				else {
//					string t = to_string(a[i]->val);
//					s += char(t.size()) + t;
//					b.push_back(a[i]->left);
//					b.push_back(a[i]->right);
//				}
//				swap(a, b);
//		}
//		while (s.size()>0 && s.back() == 0)s.pop_back();
//		return s;
//	}
//	// Decodes your encoded data to tree.
//	TreeNode* deserialize(string s) {
//		int id = 0, N, Val;
//		// Creating Root
//		if (s.empty() || s[0] == 0) return NULL; // No Root!
//		N = s[id++];
//		Val = stoi(s.substr(id, N));
//		id += N;
//		TreeNode* root = new TreeNode(Val);
//
//		vector<TreeNode*> a = { root }, b;
//		while (!a.empty()) {
//			b.clear();
//			for (int i = 0; i < a.size(); i++)
//				for (int lr = 0; lr <= 1; lr++) {
//					if (id >= s.size())return root;
//					if (N = s[id++]) {  // not NULL
//						Val = stoi(s.substr(id, N));
//						id += N;
//						TreeNode* t = new TreeNode(Val);
//						((lr) ? a[i]->right : a[i]->left) = t;
//						b.push_back(t);
//					}
//				}
//			swap(a, b);
//		}
//		return root;
//	}
//};
//
//int main() {
//	Codec az;
//	//vector <int> Val = { 41, 37, 44, 24, 39, 42, 48, 1, 35, 38, 40, -1, 43, 46, 49, 0, 2, 30, 36, -1, -1, -1, -1, -1, -1, 45, 47, -1, -1, -1, -1, -1, 4, 29, 32, -1, -1, -1, -1, -1, -1, 3, 9, 26, -1, 31, 34, -1, -1, 7, 11, 25, 27, -1, -1, 33, -1, 6, 8, 10, 16, -1, -1, -1, 28, -1, -1, 5, -1, -1, -1, -1, -1, 15, 19, -1, -1, -1, -1, 12, -1, 18, 20, -1, 13, 17, -1, -1, 22, -1, 14, -1, -1, 21, 23 };
//	//string s = "";
//	//for (int i = 0; i < Val.size(); i++) {
//	//	if (Val[i] == -1) { s += char(0); }
//	//	else s += az.n2s(Val[i]);
//	//}
//	////s = az.serialize(az.deserialize(s));
//
//	TreeNode * t = new TreeNode(1);
//	TreeNode * t2 = new TreeNode(2);
//	t->right = t2;
//	TreeNode * t3 = az.deserialize(az.serialize(t));
//
//	system("pause");
//	return 0;
//}