//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//class Solution { //Sol1 : AC 12ms PR98.92%
//public:
//	inline int count(int len) {
//		if (len <= 0) return 0; // len must >=0
//		if (len & 1) len++;
//		return len >> 1;
//	}
//	bool canPlaceFlowers(vector<int>&f, int n) {
//		if (f.empty()) return n == 0;
//		if (!f.back()) { f.push_back(0); f.push_back(1); }
//		int L = (f.front()) ? 0 : -2;
//
//		for (int i = 0; i != f.size(); i++)
//			if (f[i]) n -= count(i - L - 3), L = i;
//		return n <= 0;
//	}
//};
//int main() {
//	class Solution az;
//	vector<int> x = { 1,2,3 };
//	cout << x.back();
//	system("pause");
//	return 0;
//} 