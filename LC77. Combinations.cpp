//#include <iostream>
//#include <vector>
//using namespace std;
//
////44ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	void BT(int n, int k, vector<int> &An, vector<vector<int>> &Ans) {
//		if (An.size() == k) { Ans.push_back(An); return; }
//		if (n + An.size() < k) return; // Same Meaning: An.size() > n - k, i > n - k
//
//		BT(n - 1, k, An, Ans);
//
//		An.push_back(n);
//		BT(n - 1, k, An, Ans);
//		An.pop_back();
//	}
//	vector<vector<int>> combine(int n, int k) {
//		vector<vector<int>> Ans;
//		vector<int>An;
//		BT(n, k, An, Ans);
//		return Ans;
//	}
//};
//
////44ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	void BT(int n, int k, vector<int> &An, vector<vector<int>> &Ans) {
//		if (k == 0) { Ans.push_back(An); return; }
//
//		int Last = (An.empty()) ? (0) : (An.back());
//		for (int i = Last + 1; i <= n - k + 1; i++) { // (k - 1) <= (n - i)
//			An.push_back(i);
//			BT(n, k - 1, An, Ans);
//			An.pop_back();
//		}
//	}
//	vector<vector<int>> combine(int n, int k) {
//		vector<vector<int>> Ans;
//		vector<int>An;
//		BT(n, k, An, Ans);
//		return Ans;
//	}
//};
//
//int main() {
//	Solution az;
//	int n, k; vector<vector<int>>Ans;
//	while (cin >> n>>k) {
//		Ans = az.combine(n, k);
//		for (auto &i : Ans){
//			for (auto j : i) cout << j << ' ';
//			cout << '\n';
//		}
//	}
//	return 0;
//}