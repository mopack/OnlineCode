//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//class Solution {
//public:
//	vector<int> findDisappearedNumbers(vector<int>&N) {
//		for (auto x : N) {
//			if(N[abs(x) - 1]>0) N[abs(x) - 1] *= -1;
//		}
//		vector<int> ans;
//		for (int i = 0; i < N.size(); i++)
//			if (N[i] > 0)ans.push_back(i + 1);
//		return ans;
//	}
//}az;
//
//int main() {
//	system("pause");
//	return 0;
//} 