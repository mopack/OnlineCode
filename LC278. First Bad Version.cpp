//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//bool isBadVersion(int version) {
//	return version >= 1702766719;
//}
//
//bool isBadVersion(int version);
//class Solution { //0ms PR100%
//public:
//	int firstBadVersion(int e) {
//		long long s = 1; int m;
//		while (s < e) {
//			m = (s + e) / 2;
//			if (isBadVersion(m)) e = m;
//			else s = m + 1;
//		}
//		return e;
//	}
//};
//int main() {
//	class Solution az;
//	cout<<az.firstBadVersion(2126753390);
//	system("pause");
//	return 0;
//} 