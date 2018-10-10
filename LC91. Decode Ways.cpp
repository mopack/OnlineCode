//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//// 0ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//#define Two(x, y) ( s[x] == '1' || (s[x] == '2' && s[y] <= '6'))
//#define One(x) (s[x] != '0')
//	int numDecodings(string s) {
//		int a[2] = { 1, One(0) }; bool f = 0;
//		for (int i = 1; i < s.size(); i++, f = !f) {
//			a[f] = One(i)*a[!f] + Two(i - 1, i) * a[f];
//		}
//		return a[!f];
//	}
//};
//
//int main() {
//	class Solution az;
//	cout << az.numDecodings("17");
//	system("pause");
//	return 0;
//} 
//
//
