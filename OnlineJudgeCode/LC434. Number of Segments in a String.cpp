//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//class Solution {
//public:
//	int countSegments(string a) {
//		int s = 0, E = a.size(), count = 0;
//		for (; s < E && a[s] == ' '; s++);
//		for (; s < E && a[E - 1] == ' '; E--);
//		if (s == E)return 0;
//
//		for (; s < E; s++)
//			if (a[s] == ' ') {
//				while (s + 1 < E && a[s + 1] == ' ')s++;
//				count++;
//			}
//		return count + 1;
//	}
//};
//int main() {
//	class Solution az;
//	system("pause");
//	return 0;
//} 