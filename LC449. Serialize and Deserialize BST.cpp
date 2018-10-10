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
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
////Sol: . Present: AC: 35Lines/12ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Codec {
//public:
//	// Encodes a tree to a single string.
//	string serialize(TreeNode* t) { // Preorder
//		if (!t) return "";
//		string s = to_string(t->val);
//		return char(s.size()) + s + serialize(t->left) + serialize(t->right);
//	}
//	// Decodes your encoded data to tree.
//	TreeNode* deserialize(string s) {
//		if (s.empty()) return NULL;
//		int id = 0, N = s[id++], Val = stoi(s.substr(id, N));
//		id += N;
//		TreeNode* root = new TreeNode(Val); 
//		
//		while (id < s.size()) {
//			N = s[id++]; Val = stoi(s.substr(id, N));
//			id += N;
//			// Insert Val into root
//			TreeNode* t = root;
//			while (1) {
//				if (Val < t->val) {
//					if (t->left) t = t->left;
//					else { t->left = new TreeNode(Val); break; }
//				}else{
//					if (t->right) t = t->right;
//					else { t->right = new TreeNode(Val); break; }
//				}
//			}
//		}
//		return root;
//	}
//
//};
//int main() {
//	Codec az;
//	//vector <int> x = { 41, 37, 44, 24, 39, 42, 48, 1, 35, 38, 40, -1, 43, 46, 49, 0, 2, 30, 36, -1, -1, -1, -1, -1, -1, 45, 47, -1, -1, -1, -1, -1, 4, 29, 32, -1, -1, -1, -1, -1, -1, 3, 9, 26, -1, 31, 34, -1, -1, 7, 11, 25, 27, -1, -1, 33, -1, 6, 8, 10, 16, -1, -1, -1, 28, -1, -1, 5, -1, -1, -1, -1, -1, 15, 19, -1, -1, -1, -1, 12, -1, 18, 20, -1, 13, 17, -1, -1, 22, -1, 14, -1, -1, 21, 23 };
//	//string s = "";
//	//for (int i = 0; i < x.size(); i++) {
//	//	if (x[i] == -1) { s += char(0); }
//	//	else s += az.n2s(x[i]);
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