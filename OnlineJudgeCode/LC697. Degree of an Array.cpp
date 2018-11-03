//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//struct A {
//	int i, v;
//	bool operator<(A t)const{
//		return v < t.v;
//	}
//};
//class Solution {
//public:
//	int findShortestSubArray(vector<int>&N) {
//		vector<A>a(N.size());
//		for (int i = 0; i < N.size(); i++)a[i].i = i, a[i].v = N[i];
//		sort(a.begin(), a.end());
//		int len = 1;
//		for (int i = 1; i < a.size(); i++)
//			while (i - len >= 0 && a[i - len].v == a[i].v)len++;
//
//		if (len == 1)return 1;
//		int ans = 50001, L, ma, mi;
//		for (int i = 0; i + 1 < a.size(); i++)
//			if(a[i].v == a[i+1].v){
//				ma = mi = a[i].i;
//				for (L = i; i + 1 < a.size() && a[i + 1].v == a[i].v; i++) {
//					ma = max(ma, a[i + 1].i);
//					mi = min(mi, a[i + 1].i);
//				}
//				if (len == i - L + 1) ans = min(ans, ma - mi + 1);
//			}
//		return ans;
//	}
//}az;
//
//int main() {
//	system("pause");
//	return 0;
//} 