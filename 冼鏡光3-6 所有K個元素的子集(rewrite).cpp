//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//class Solution {
//public:
//	vector<vector<int>> NSelectK(int n, int k) {
//		vector<int>set(k, 0); for (int i = 0; i < k; i++)set[i] = i + 1;
//		int pos = k - 1;
//		vector<vector<int>> ans = { set };
//		do{
//			pos = (set[k - 1] == n) ? (pos - 1) : (k - 1);
//			set[pos]++;
//			for (int i = pos + 1; i < k; i++) set[i] = set[i - 1] + 1;
//			ans.push_back(set);
//		} while (set[0] <= n - k);
//		return ans;
//	}
//}az;
//int main() {
//	int n, k; vector<vector<int>>ans;
//	while (cin >> n>>k) {
//		ans = az.NSelectK(n, k);
//		for (auto &i : ans){
//			for (auto j : i) cout << j << ' ';
//			cout << endl;
//		}
//	}
//	return 0;
//}