//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#define max(a,b) (((a) > (b)) ? (a) : (b))
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
//	vector<int>Ans; int K;
//	void PutDist(TreeNode* t, int N) {
//		if (!t) return;
//		if (N == 0) Ans.push_back(t->val);
//		else {
//			PutDist(t->left, N - 1);
//			PutDist(t->right, N - 1);
//		}
//	}
//
//	int DistTar(TreeNode* t, TreeNode* Target) {
//		if (!t) return -1;
//		
//		if (t == Target) return 0;
//		
//		TreeNode* NFind;
//		int Ret;
//		if ( (Ret = DistTar(t->left, Target)) != -1) 
//			NFind = t->right;
//		else if((Ret = DistTar(t->right, Target)) != -1)
//			NFind = t->left;
//		else return - 1;
//		Ret++;
//
//		if (Ret == K)Ans.push_back(t->val);
//		else if (Ret < K) {
//			PutDist(NFind, K - Ret - 1);
//		}
//		//cout << t->val << ':' << Ret << "\n";
//		return Ret;
//	}
//	vector<int> distanceK(TreeNode* Root, TreeNode* Target, int k) {
//		if (k == 0) return{ Target->val };
//
//		K = k;
//		PutDist(Target, K);
//		DistTar(Root, Target);
//
//		return Ans;
//	}
//};
//int main() {
//    //freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	vector<int> y;
//	vector<TreeNode*> t(6);
//	for (int i = 0; i != 6; i++) {
//		t[i] = new TreeNode(i);
//	}
//	t[0]->right = t[1];
//	t[1]->left = t[2];
//	t[1]->right = t[5];
//	t[2]->right = t[3];
//	t[3]->right = t[4];
//	
//	class Solution az; int K = 2;
//	y = az.distanceK(t[0],t[2], K);
//	cout << y[0] << '\n';
//	system("pause");
//	return 0;
//} 