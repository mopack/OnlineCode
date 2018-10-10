//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//// 0ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	void BT(int N, int L, int R, string &An, vector<string> &Ans) { // L,R: how many Left/Right Parentheses Remain (we nned to Create)
//		if (L == 0 && R == 0) { Ans.push_back(An); return; }
//
//		int i = (N - L) * 2 - R;
//		if (L != 0) {
//			An[i] = '(';
//			BT(N, L - 1, R + 1, An, Ans);
//		}
//		if (R != 0) {
//			An[i] = ')';
//			BT(N, L, R - 1, An, Ans);
//		}
//	}
//	vector<string> generateParenthesis(int N) {
//		vector<string> Ans;
//		string An; An.resize(N * 2);
//		BT(N, N, 0, An, Ans);
//		return Ans;
//	}
//};
//
//// 0ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	void BT(int N, int L, int R, string&An, vector<string> &Ans) { // L,R: how many Left/Right Parentheses Created
//		if(L == N) { Ans.push_back( An + string(N - R, ')') ); return; }
//
//		// L < N, able to create L:
//		An.push_back('(');
//		BT(N, L + 1, R, An, Ans);
//		An.pop_back();
//
//		// L > R, able to create R
//		if (L > R) {
//			An.push_back(')');
//			BT(N, L, R + 1, An, Ans);
//			An.pop_back();
//		}
//	}
//	vector<string> generateParenthesis(int N) {
//		vector<string> Ans;
//		string An; An.reserve(N * 2);
//		BT(N, 0, 0, An, Ans);
//		return Ans;
//	}
//};
//
//int main() {
//	Solution az;
//	az.generateParenthesis(3);
//
//	system("pause");
//	return 0;
//}