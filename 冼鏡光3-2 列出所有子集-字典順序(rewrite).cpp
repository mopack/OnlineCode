//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//class Solution {
//public:
//	vector<vector<int>> dicSubset(int n) {
//		vector<vector<int>> ans; vector<int> an = {}; ans.push_back(an);
//		if (n <= 0)return ans;
//		vector<int> set(n, 0); int pos = 0; set[pos] = 1;
//
//		while (1) {
//			ans.push_back(vector<int>(set.begin(), set.begin()+pos+1)); //0~pos
//			if (set[pos] < n) {
//				set[pos + 1] = set[pos] + 1; pos++;
//			}
//			else if (pos) set[--pos]++;
//			else return ans;
//		}
//	}
//}az;
//int main() {
//	int n;
//	while (cin >> n) {
//		vector<vector<int>> a = az.dicSubset(n);
//		for (int i = 0; i < a.size(); i++) {
//			for (int j = 0; j < a[i].size(); j++)cout << a[i][j] << ' ';
//			cout << endl;
//		}
//	}
//	return 0;
//}