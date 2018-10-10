//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//
//class Solution { //Sol2: AC
//public:
//	int findLHS(vector<int>&a) {
//		if (a.size() == 0)return 0;
//		sort(a.begin(), a.end());
//		
//		int ans = 0;
//		int t = a[0], sum = 1, lastSum = 0;
//		for (int i = 1; i < a.size();i++)
//			if (a[i] == t) sum++; 
//			else {
//				if (lastSum) ans = max(ans, sum + lastSum);
//				lastSum = (a[i] == t + 1 )? sum : 0;
//				t = a[i], sum = 1;
//			}
//		return (lastSum)? max(ans, sum + lastSum) : ans;
//	}
//};
//
//class Solution { //So1l: WA //寫成最長和諧連續序列 (題意是: 子序列) !!!!!!!!!!!!!!!!!!!!!!!!!!!!
//public:
//	int findLHS(vector<int>&n) {
//		if (n.size() == 0)return 0;
//		int s = n[0], si = 0, s2, ans = 1; bool sec = 0;
//		for(int i=1;i< n.size();i++)
//			if (sec) {
//				if (n[i] != s && n[i] != s2) {
//					ans = max(ans, i - si);
//					s = n[i]; si = i; sec = 0;
//				}
//			}else {
//				if (abs(n[i] - s) <= 1) {
//					if (n[i] != s) {
//						s2 = n[i]; sec = 1;
//					}
//				}
//				else {
//					ans = max(ans, i - si);
//					s = n[i]; si = i; sec = 0;
//				}
//			}
//		return max(ans, int(n.size() - si));
//	}
//}az;
//
//int main() {
//	system("pause");
//	return 0;
//} 