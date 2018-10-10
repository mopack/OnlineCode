//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//class Solution {
//public:
//	int matrixScore(vector<vector<int>>&a) {
//		for(auto &x : a)
//			if(x[0]==0){
//				for (auto &c : x) c = !c;
//			}
//
//		//for (int i = 0; i < a.size(); i++, cout << endl)
//		//	for (int j = 0; j < a[0].size(); j++)cout << a[i][j] << ' ';
//
//		int sum = 0, count, two = 1;
//		for (int c = a[0].size() - 1; c >= 0; c--, two <<= 1) {
//			count = 0;
//			for (int r = 0; r < a.size(); r++)
//				if (a[r][c])count++;
//			sum += max(count, int(a.size()) - count)*two;
//		}
//		return sum;
//	}
//};
//int main() {
//	vector<vector<int>> x = { { 0,0,1,1 },{ 1,0,1,0 },{ 1,1,0,0 } };
//	class Solution az;
//	cout << az.matrixScore(x);
//	system("pause");
//	return 0;
//} 