//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//class Solution {
//public:
//	vector<int> intersection(vector<int>&N1, vector<int>&N2) {
//		sort(N1.begin(), N1.end()); sort(N2.begin(), N2.end());
//		vector<int> ans;
//		int f1 = 0, f2 = 0;
//		while (f1 < N1.size() && f2 < N2.size()) 
//			if (N1[f1] < N2[f2]) f1++;
//			else if (N1[f1] > N2[f2]) f2++;
//			else {
//				ans.push_back(N1[f1]);
//				while (f1 + 1 < N1.size() && N1[f1] == N1[f1 + 1])f1++;
//				while (f2 + 2 < N2.size() && N2[f2] == N2[f2 + 1])f2++;
//				f1++; f2++;
//			}
//		return ans;
//	}
//}az;
//
//int main() {
//	vector<int> x = {39, 6, 85, 38, 22, 89, 57, 93, 58, 69, 65, 80, 24, 27, 37, 26, 88, 2, 7, 5, 74, 45, 56, 55, 25, 33, 78, 49, 79, 64, 73, 98, 72, 87, 66, 75, 4, 21, 47};
//	sort(x.begin(), x.end());
//	for (auto u : x)cout << u << ',';
//
//	system("pause");
//	return 0;
//} 