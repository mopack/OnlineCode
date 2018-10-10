//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//class Solution {
//public:
//	vector<int> constructArray(int n, int k) {
//		vector<int> ans;
//		for (int i = 1, j = n; i <= j;) {
//			if (k > 1) ans.push_back( k-- % 2 ? i++ : j-- );
//			else ans.push_back(i++);
//		}
//		return ans;
//	}
//}az;
//
//int main() {
//	vector<int> aa = az.constructArray(92,80);
//	for (int i = 0; i < aa.size(); i++)cout << aa[i] << ' '; cout << endl;
//	system("pause");
//	return 0;
//}