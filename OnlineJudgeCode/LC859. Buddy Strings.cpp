//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//class Solution { //4ms PR99.75%
//public:
//	bool buddyStrings(string a, string b) {
//		if (a.size() != b.size())return 0;
//		int n = 0; char A, B;
//		for (int i = 0; i != a.size(); i++)
//			if (a[i] != b[i]){
//				if (n==2) return 0;
//				if(n++){
//					if (A != b[i] || B != a[i]) return 0;
//				}else A = a[i], B = b[i];
//			}
//		if (n == 2) return 1;
//		if (n == 1) return 0;
//
//		n = min(27, int(a.size()));
//		bool is[26] = {};
//		for (int i = 0; i != n; i++)
//			if (is[a[i]-97])return 1;
//			else is[a[i] - 97] = 1;
//		return 0;
//	}
//};
//int main() {
//	class Solution az;
//	string a = "ab", b= "ba";
//	cout<<az.buddyStrings(a, b);
//	system("pause");
//	return 0;
//} 