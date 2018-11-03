//#include <bits/stdc++.h>
//#include <unordered_set>
//#include <bitset>
//using namespace std;
//
//// Using bitset /16ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
//		int AmB = 0; // AmB = (ASum - BSum)/2
//		for (auto a : A) AmB += a;
//		for (auto b : B) AmB -= b;
//		AmB >>= 1;
//
//		bitset< 100001 > BHas;
//		for (auto b : B) BHas.set(b);
//
//		for (auto a : A) {
//			int b = a - AmB;
//			if (b >= 1 && b <= 100000 && BHas.test(b)) {
//				return{ a, b };
//			}
//		}
//	}
//};
//
//// Using bool-vector/20ms/PR99
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
//		int AmB = 0; // AmB = (ASum - BSum)/2
//		for (auto a : A) AmB += a;
//		for (auto b : B) AmB -= b;
//		AmB >>= 1;
//
//		vector<bool>BHas(100001);
//		for (auto b : B) BHas[b] = 1;
//
//		for (auto a : A) {
//			int b = a - AmB;
//			if (b >= 1 && b <= 100000 && BHas[b]) {
//				return{ a, b };
//			}
//		}
//	}
//};
//
//// Using Unordered_set/32ms/PR99
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
//		unordered_set<int>BSet(B.begin(), B.end());
//		int AmB = 0; // AmB = (ASum - BSum)/2
//		for(auto a : A) AmB += a;
//		for (auto b : B) AmB -= b;
//		AmB >>= 1;
//
//		for (auto a : A) {
//			int b = a - AmB;
//			if (BSet.find(b) != BSet.end()) {
//				return{ a, b };
//			}
//		}
//	}
//};
//
//int main() {
//	class Solution az;
//	vector<int> a, b;
//	int x;
//	while (1) {
//		a.clear(); b.clear();
//		cout << "\nA:";
//		while (cin >> x && x) a.push_back(x);
//		cout << "\nB:";
//		while (cin >> x && x) b.push_back(x);
//
//		vector<int> ans = az.fairCandySwap(a, b);
//		cout <<"\nAns: "<< ans[0] << ' ' << ans[1]<<'\n';
//	}
//
//	return 0;
//} 