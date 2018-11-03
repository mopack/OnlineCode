//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
////0ms/PR100/32Lines
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//	void BT(int Last, int N, int K, vector<bool>&An, vector<string>&Ans) { // C(n=10, k) 0~9
//		if (K == 0) { Print(An, Ans); return; }
//		for (int i = Last + 1; i <= N - K; i++) { // (K - 1) <= N - (i+1)
//			An[i] = 1;
//			BT(i, N, K - 1, An, Ans);
//			An[i] = 0;
//		}
//	}
//	void Print(vector<bool>&An, vector<string>&Ans) {
//		int H = 0, M = 0;
//		for (int i = 0, two = 1; i < 4; i++, two <<= 1) {
//			if (An[i]) H += two;
//		}
//		for (int i = 4, two = 1; i < 10; i++, two <<= 1) {
//			if (An[i]) M += two;
//		}
//		if (H >= 12 || M >= 60) return;
//
//		string h, m;
//		if (H >= 10) { h.push_back(H / 10 + '0'); } h.push_back(H % 10 + '0');
//		m.push_back(M / 10 + '0'); m.push_back(M % 10 + '0');
//		Ans.push_back(h + ":" + m);
//	}
//public:
//	vector<string> readBinaryWatch(int k) { 
//		vector<string> Ans;
//		vector<bool>An(10, 0);
//		BT(10, k, -1, An, Ans);
//		return Ans;
//	}
//};
//
//int main() {
//	Solution az;
//	vector<string> Ans = az.readBinaryWatch(1);
//	for (auto &s : Ans) cout << s << ',';
//	system("pause");
//	return 0;
//} 