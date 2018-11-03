//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <bitset>
//#include <queue>
//using namespace std;
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
////Sol: . Present: AC: 27Lines/4ms/PR99
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	int widthOfBinaryTree(TreeNode* root) {
//		if (!root) return 0;
//		vector<TreeNode*> a = { root }, b;
//		vector<string> as = { "1" }, bs;
//		int ans = 0;
//		while (1) {
//			b = {}; bs = {};
//			for (int i = 0; i < a.size(); i++) {
//				if (a[i]->left) {
//					b.push_back(a[i]->left);
//					bs.push_back(as[i] + '0');
//				}
//				if (a[i]->right) {
//					b.push_back(a[i]->right);
//					bs.push_back(as[i] + '1');
//				}
//			}
//			bitset<32> u(as.front()), v(as.back());
//			ans = max(ans, 1 + abs(int(u.to_ulong()) - int(v.to_ulong())));
//			if (b.size() == 0) return ans;
//			a = b; as = bs;
//		}
//	}
//};
//
////Sol: . Present: AC: 29Lines/4ms/PR99
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	int widthOfBinaryTree(TreeNode* root) {
//		if (!root) return 0;
//		int ans = 0;
//		queue<TreeNode*>q; int N; TreeNode* t;
//		queue<string> qs; string s;
//		q.push(root); qs.push("1");
//		while(!q.empty()) {
//			N = q.size();
//			int u = bitset<32>(qs.front()).to_ulong(), v;
//			for (int i = 0; i < N; i++) {
//				t = q.front(); s = qs.front();
//				if (i + 1 == N) v = bitset<32>(s).to_ulong();
//				q.pop(); qs.pop();
//
//				if (t->left) {
//					q.push(t->left); qs.push(s + '0');
//				}
//				if (t->right) {
//					q.push(t->right); qs.push(s + '1');
//				}
//			}
//			ans = max(ans, abs(u - v) + 1);
//		}
//		return ans;
//	}
//};
//
////Sol: . Present: AC: 28Lines/0ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	int widthOfBinaryTree(TreeNode* root) {
//		if (!root) return 0;
//		int ans = 0;
//		queue<TreeNode*>q; int N; TreeNode* t;
//		queue<int> qs; int s;
//		q.push(root); qs.push(1);
//		while (!q.empty()) {
//			N = q.size();
//			int u = qs.front();
//			for (int i = 0; i < N; i++) {
//				t = q.front(); s = qs.front();
//				q.pop(); qs.pop();
//
//				if (t->left) {
//					q.push(t->left); qs.push(s<<1); //+0
//				}
//				if (t->right) {
//					q.push(t->right); qs.push((s<<1)+1);
//				}
//			}
//			ans = max(ans, abs(u - s) + 1);
//		}
//		return ans;
//	}
//};
//
//
//int main() {
//	string s = "100", s2= "111";
//	bitset<32> x(s), y(s2);
//	cout << abs(int(x.to_ulong()) - int(y.to_ulong())) << endl;
//
//	system("pause");
//	return 0;
//} 