//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//class Solution {
//public:
//	vector<int> intersect(vector<int>&N1, vector<int>&N2) {
//		sort(N1.begin(), N1.end()); sort(N2.begin(), N2.end());
//		int f1 = 0, f2 = 0;
//		vector<int> ans;
//		while (f1 < N1.size() && f2 < N2.size()) 
//			if (N1[f1] > N2[f2]) f2++;
//			else if (N1[f1] < N2[f2])f1++;
//			else {
//				ans.push_back(N1[f1]);
//				f1++; f2++;
//			}
//		return ans;
//	}
//}az;
//
//int main() {
//	system("pause");
//	return 0;
//} 