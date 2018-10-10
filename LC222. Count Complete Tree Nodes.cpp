//#include <iostream>
//#include <vector>
//#include <unordered_map>
//#include <algorithm>
//
//using namespace std;
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
////Sol: . Present: AC: 26Lines/16ms/PR99.90
////static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
////class Solution {
////public:
////	int LeftH(TreeNode* t) {
////		int h = -1;
////		for (; t; t = t->left) h++;
////		return h;
////	}
////	int countNodes(TreeNode* root) {
////		if (!root)return 0;
////		int H = LeftH(root), ans = (1 << H) - 1;
////		if (H == 0) return 1;
////
////		TreeNode* t = root;
////		for (int h = H; h >= 2; h--) { 
////			// check Right Hand: RightSubTreeH = LeftH(t->right).
////			if (LeftH(t->right) + 1 == h) { // must at right side
////				ans += 1 << h - 1;
////				t = t->right;
////			}else t = t->left; // must at left  side
////		}
////		// know h=1
////		if (t->left) ans++;
////		if (t->right) ans++;
////
////		return ans;
////	}
////};
//
////Sol: . Present: AC: 17Lines/16ms/PR99.90
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	int LeftH(TreeNode* t) {
//		int h = -1;
//		for (; t; t = t->left) h++;
//		return h;
//	}
//	int C(TreeNode* t, int h) { // Count
//		if (!t) return 0;
//		if (LeftH(t->right) + 1 == h) return (1 << h) + C(t->right, h - 1);
//		return (1 << (h - 1)) + C(t->left, h - 1);
//	}
//	int countNodes(TreeNode* root) {
//		return C(root, LeftH(root));
//	}
//};
//
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	int LeftH(TreeNode* t, unordered_map<TreeNode*, int>& LH) {
//		auto it = LH.find(t);
//		if (it != LH.end()) return it->second;
//		
//		int h = -1;
//		for (; t; t = t->left, h++);
//		if (h == -1) return -1;
//
//		LH.emplace(t, h);
//		return h;
//	}
//	int C(TreeNode* t, int h, unordered_map<TreeNode*, int>& LH) { // Count
//		if (!t) return 0;
//		if (LeftH(t->right, LH) + 1 == h) return (1 << h) + C(t->right, h - 1, LH);
//		return (1 << (h - 1)) + C(t->left, h - 1, LH);
//	}
//	int countNodes(TreeNode* root) {
//		unordered_map<TreeNode*, int> LH;
//		LH.emplace(nullptr, -1);
//		return C(root, LeftH(root, LH), LH);
//	}
//};
//
//
//
//int main() {
//	Solution az;
//	TreeNode* root = new TreeNode(1);
//	cout << az.countNodes(root) << endl;
//
//	system("pause");
//	return 0;
//} 