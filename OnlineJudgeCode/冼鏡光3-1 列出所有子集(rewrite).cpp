//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//class Solution {
//public:
//	vector<vector<int>> subsets(int n) { // powerset
//		int i; vector<bool>d(n, 0);
//		vector<vector<int>> ans = { {} }; vector<int>an;
//		while (1) {
//			for (i = 0; i < n; i++)
//				if (d[i]) d[i] = 0;
//				else { d[i] = 1; break; }
//			if (i==n) return ans;
//			
//			for (an = {}; i < n; i++)
//				if (d[i]) an.push_back(i + 1);
//			ans.push_back(an);
//		}
//	}
//};
//
//int main() {
//	int n;
//	Solution az;
//	while (cin >> n) {
//		vector<vector<int>> a = az.subsets(n);
//		for (int i = 0; i < a.size(); i++){
//			for (int j = 0; j < a[i].size(); j++)cout << a[i][j] << ' ';
//			cout << endl;
//		}
//	}
//	return 0;
//}