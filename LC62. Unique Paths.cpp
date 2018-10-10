//#include <iostream>
//#include <array>
//using namespace std;
////0ms/PR100
//array<array<unsigned int, 199>, 199>c; //int c[199][199]; // C(m,n) = c[m][n]
//static int fast = []() {
//	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	for (int i = 0; i <= 198; i++) {
//		c[i][0] = c[i][i] = 1;
//		for (int j = 1; j < i; j++)
//			c[i][j] = c[i - 1][j - 1] + c[i - 1][j];
//	}
//	return 0; 
//}(); 
//class Solution {
//public:
//	int uniquePaths(int m, int n) {
//		return c[m + n - 2][n - 1];
//	}
//};
//int main() {
//	class Solution az;
//	cout<<az.uniquePaths(3, 2);
//	cout <<' '<< az.uniquePaths(7, 3);
//	system("pause");
//	return 0;
//}