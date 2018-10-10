//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//class Solution {
//public:
//	void merge(vector<int>&N1, int n1, vector<int>&N2, int n2) {
//		int i = n1 + n2 - 1, i1 = n1 - 1, i2 = n2 - 1;
//		while(i1>=0 && i2>=0)
//			N1[i--] = (N1[i1] > N2[i2]) ? N1[i1--] : N2[i2--];
//
//		while(i1 >= 0) N1[i--] = N1[i1--];
//		while(i2 >= 0) N1[i--] = N2[i2--];
//	}
//};
//int main() {
//	class Solution az;
//	vector<int> N1 = {0}, N2 = { 1 };
//	az.merge(N1, 0, N2, 1);
//	system("pause");
//	return 0;
//} 