//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//class Solution { // Sol1(Àu¤Æ)
//public:
//	string convertToTitle(int n) {
//		string s = ""; 
//		for(;n; n/=26)
//			s.push_back(65 + (--n%26));
//		reverse(s.begin(), s.end());
//		return s;
//	}
//};
//class Solution { // Sol1
//public:
//	string convertToTitle(int n) {
//		string s = "";
//		do {
//			n--;
//			s.push_back(65 + (n % 26));
//			n /= 26;
//		} while (n);
//		reverse(s.begin(), s.end());
//		return s;
//	}
//};
//int main() {
//	class Solution az;
//	for (int i = 1; i <= 260; i++) {
//		printf("%3d: ", i); cout << az.convertToTitle(i) << '\t';
//		if (i % 13 == 0)cout << endl;
//	}
//	system("pause");
//	return 0;
//} 