//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <unordered_map>
//#include <bitset>
////#define max(a,b) (((a) > (b)) ? (a) : (b))
//using namespace std;
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
////Sol: Coding: min. Present: AC: Lines/ms/PR
////Sol: . Present: AC: Lines/0ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	TreeNode* At = NULL;
//	int MaxH = 0, All; vector<TreeNode*> Ma; // log2(500)<9, N < 9. All = 2^N - 1
//
//	int Find(TreeNode* t) {
//		if (!t) return 0;
//		int L = Find(t->left), R = Find(t->right);
//		
//		int Ret = 0;
//		for (int i = 0; i != Ma.size(); i++)
//			if (t == Ma[i]) { Ret = 1 << i; break; }
//		Ret |= L | R;
//		if (At == NULL && Ret == All) At = t;
//		return Ret;
//	}
//
//	void H(TreeNode* t, int dep) {
//		if (!t)return;
//		if (dep > MaxH) { MaxH = dep; Ma = { t }; }
//		else if (dep == MaxH) Ma.push_back(t);
//
//		H(t->left, dep + 1);
//		H(t->right, dep + 1);
//	}
//
//	TreeNode* subtreeWithAllDeepest(TreeNode* R) {
//		H(R, 0);
//		All = (1 << Ma.size()) - 1;
//		Find(R);
//		return At;
//	}
//};
//void Print(TreeNode *R) {
//	if (!R) return;
//	vector<TreeNode*>a = { R }, b;
//	while (!a.empty()) {
//		b = {};
//		for (auto &t : a) {
//			cout << t->val << ' ';
//			if (t->left) b.push_back(t->left);
//			if (t->right) b.push_back(t->right);
//		}
//		swap(a, b);
//	}
//}
//int main() {
//    //freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	vector<int> x = { 3,5,1,6,2,0,8,-1,-1,7,4, -1};
//	vector<TreeNode*>t(x.size() + 1);
//	for (int i = 0; i < x.size();i++) {
//		if (x[i] == -1) t[i + 1] = NULL;
//		else t[i+ 1] = new TreeNode(x[i]);
//	}
//	for (int i = 1; i * 2 + 1 < t.size(); i++) {
//		t[i]->left = t[i * 2];
//		t[i]->right = t[i * 2 + 1];
//	}
//	//Print(t[1]);
//	class Solution az;
//	TreeNode* u = az.subtreeWithAllDeepest(t[1]);
//	cout << u->val;
//	system("pause");
//	return 0;
//} 