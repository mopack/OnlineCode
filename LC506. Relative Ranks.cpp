//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//struct A {
//	int v, i;
//	bool operator<(A t)const {
//		return v < t.v;
//	}
//};
//class Solution {
//public:
//	vector<string> findRelativeRanks(vector<int>&N) {
//		vector<A>a(N.size());
//		vector<string>ans(N.size());
//		char line[6];
//		for (int i = 0; i < N.size(); i++)a[i].i = i, a[i].v = N[i];
//		sort(a.begin(), a.end());
//		int i = a.size();
//		if (--i >= 0) ans[a[i].i] = "Gold Medal"; else return ans;
//		if (--i >= 0) ans[a[i].i] = "Silver Medal"; else return ans;
//		if (--i >= 0) ans[a[i].i] = "Bronze Medal"; else return ans;
//		for (i--; i >= 0; i--) {
//			sprintf(line, "%d", N.size() - i);
//			ans[a[i].i] = string(line);
//		}
//		return ans;
//	}
//}az;
//
//int main() {
//	system("pause");
//	return 0;
//} 