//#include <iostream>
//#include <vector>
//#include <string>
//#include <bitset>
//
//using namespace std;
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//#define max(a,b) (((a) > (b)) ? (a) : (b))
////Sol: . Present: AC: Lines/ms/PR
////static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
////int pow2[] = { 1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144,524288,1048576,2097152,4194304,8388608,16777216,33554432,67108864,134217728,268435456,536870912,1073741824 };
////class Solution {
////public:
////	string ns(int n) {
////		char line[12];
////		sprintf(line, "%d", n);
////		return string(line);
////	}
////	vector<vector<string>> printTree(TreeNode* root) {
////		if (!root)return{};
////		vector<TreeNode*> a = { root }, b;
////		vector<vector<string>> s;
////		vector<string> sa = {"0"}, sb;
////		vector<vector<int>> v;
////		vector<int> v0 = { root->val };
////
////		v.push_back(v0); s.push_back(sa);
////		while (1) {
////			b = {}; sb = {}; v0 = {};
////			for (int i = 0; i < a.size(); i++) {
////				if (a[i]->left) { 
////					b.push_back(a[i]->left); 
////					sb.push_back(sa[i] + "0"); 
////					v0.push_back(a[i]->left->val); }
////				if (a[i]->right) { b.push_back(a[i]->right); sb.push_back(sa[i] + "1"); v0.push_back(a[i]->right->val); }
////			}
////			if (b.size() == 0)break;
////			s.push_back(sb);
////			v.push_back(v0);
////			a = b; sa = sb;
////		}
////		bitset<100> bs;
////		int dis, d, id, c, st;
////		vector<vector<string>> ans(s.size(), vector<string>(pow2[s.size()]-1, ""));
////		for (int i = s.size() - 1; i >= 0; i--) {
////			d = s.size() - i - 1;
////			st = pow2[d] - 1;
////			dis = pow2[d+1];
////			
////			for (int j = 0; j < s[i].size(); j++) {
////				bs = bitset<100>(s[i][j]);
////				c = bs.to_ulong();
////				id = st + c*dis;
////				ans[i][id] = ns(v[i][j]);
////			}
////		}
////		return ans;
////	}
////};
//
////Sol: . Present: AC: 27Lines/0ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	int H(TreeNode *t) {
//		if (!t) return 0;
//		int L = H(t->left), R = H(t->right);
//		return max(L, R) + 1;
//	}
//	int W(TreeNode *t) {
//		if (!t) return 0;
//		int L = W(t->left), R = W(t->right);
//		return max(L, R) * 2 + 1;
//	}
//	void go(TreeNode* t, int dep, int L, int R, vector<vector<string>>&ans){
//		if (!t)return;
//		int M = (L + R) / 2;
//		ans[dep][M] = to_string(t->val);
//		go(t->left, dep + 1, L, M - 1, ans);
//		go(t->right, dep + 1, M + 1, R, ans);
//	}
//	vector<vector<string>> printTree(TreeNode* t) {
//		int h = H(t), w = W(t);
//		vector<vector<string>> ans(h, vector<string>(w, ""));
//		go(t, 0, 0, w - 1, ans);
//		return ans;
//	}
//};
//int main() {
//	Solution az;
//	TreeNode *t[10];
//	for (int i = 1; i <= 7; i++) {
//		t[i] = new TreeNode(i);
//	}
//	//t[5]->left = t[3];
//	//t[5]->right = t[6];
//	//t[3]->left = t[2];
//	//t[3]->right = t[4];
//	//t[6]->right = t[7];
//	t[1]->left = t[2];
//	az.printTree(t[1]);
//
//	system("pause");
//	return 0;
//} 