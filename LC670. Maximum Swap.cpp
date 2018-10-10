//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <cstring>
//using namespace std;
//
//
//struct SI {
//	char s; int i;
//	bool operator<(SI t)const{
//		if (s == t.s) {
//			return i < t.i;
//		}
//		else {
//			return s > t.s;
//		}
//	}
//};
//class Solution {
//public:
//	int maximumSwap(int num) {
//		char s1[10]; int n;
//		SI s2[10];
//
//		sprintf(s1, "%d", num);
//		for (n = 0; n < 10 && s1[n]; n++);
//		for (int i = 0; i <= n; i++) {
//			s2[i].s = s1[i]; s2[i].i = i;
//		}
//
//		sort(s2, s2 + n);
//
//		//for (int i = 0; i <= n; i++)printf("%c", s2[i].s);
//		//cout << endl;
//
//		for (int i = 0; i < n; i++) {
//			//printf("(%c, %c) %d\n", s2[i].s, s1[i], s2[i].i);
//			if (s2[i].s > s1[i] && s2[i].i > i) {
//				int j = i + 1;
//				while (j < n && s2[j].s == s2[i].s)j++;
//				j--;
//
//				swap(s1[i], s1[s2[j].i]); break;
//			}
//		}
//		sscanf(s1,"%d", &n);
//		return n;
//	}
//}ans;
//
//int main() {
//	cout << ans.maximumSwap(1993) << endl;
//
//	system("pause");
//	return 0;
//}