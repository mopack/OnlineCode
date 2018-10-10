//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//
//class Solution {
//public:
//	bool isIdealPermutation(vector<int>& A) {
//		int cmax = 0;
//		for (int i = 0; i + 2 < A.size(); i++) {
//			cmax = max(cmax, A[i]);
//			if (cmax > A[i + 2])return 0;
//		}
//		return 1;
//	}
//}ans;
//
//int main() {
//	vector<int> x={0};
//	cout<<ans.isIdealPermutation(x)<<endl;
//
//	system("pause");
//	return 0;
//}