//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <unordered_map>
//using namespace std;
////0ms/PR100
//unordered_map<int, vector<string>> Len_Pow2;
//static int fast = []() {
//	for (unsigned int n = 1; n <= INT_MAX; n <<= 1) {
//		string s = to_string(n);
//		sort(s.begin(), s.end());
//		auto it = Len_Pow2.find(s.size());
//		if (it != Len_Pow2.end()) it->second.push_back(s);
//		else {
//			Len_Pow2.insert({ s.size(), {s} });
//		}
//	}
//	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	bool reorderedPowerOf2(int N) {
//		string s = to_string(N);
//		sort(s.begin(), s.end());
//		for (auto &w : Len_Pow2[s.size()]) {
//			if (w == s) return 1;
//		}
//		return 0;
//	}
//};
//
////Other's 0ms/PR100
////class Solution {
////public:
////	bool reorderedPowerOf2(int N) {
////		vector<int> con(10, 0);
////		consider(N, con);
////		for (int i = 0; i<32; i++)
////		{
////			vector<int> con1(10, 0);
////			consider(1 << i, con1);
////			if (con == con1)
////				return true;
////		}
////		return false;
////	}
////	void consider(int N, vector<int> &con)
////	{
////		while (N>0)
////		{
////			con[N % 10]++;
////			N = N / 10;
////		}
////	}
////};
//int main() {
//	class Solution az;
//
//	system("pause");
//	return 0;
//} 
