//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <numeric>
//using namespace std;
////玩字符串又是求極值的題，想都不要想直接上DP
////1
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	int minimumDeleteSum(string s1, string s2) {
//		vector<vector<int>>d(s1.size() + 1, vector<int>(s2.size() + 1, 0));
//		for (int j = 1; j <= s2.size(); j++) d[0][j] = d[0][j - 1] + s2[j - 1];
//
//		for (int i = 1; i <= s1.size(); i++) {
//			d[i][0] = d[i - 1][0] + s1[i - 1];
//			for (int j = 1; j <= s2.size(); j++) {
//				d[i][j] = (s1[i - 1] == s2[j - 1]) ? d[i - 1][j - 1] : min(d[i-1][j] + s1[i - 1], d[i][j-1] + s2[j -1]);
//			}
//		}
//		return d[s1.size()][s2.size()];
//	}
//};
////2
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	int minimumDeleteSum(string s1, string s2) {
//		vector<int>d(s2.size() + 1, 0);
//		for (int j = 1; j <= s2.size(); j++) d[j] = d[j - 1] + s2[j - 1];
//		for (int i = 1; i <= s1.size(); i++) {
//			int t1 = d[0];
//			d[0] += s1[i - 1];
//			for (int j = 1; j <= s2.size(); j++) {
//				int t2 = d[j];
//				d[j] = (s1[i - 1] == s2[j - 1]) ? t1 : min(d[j] + s1[i - 1], d[j - 1] + s2[j - 1]);
//				t1 = t2;
//			}
//		}
//		return d[s2.size()];
//	}
//};
////3
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	int minimumDeleteSum(string s1, string s2) {
//		vector<vector<int>>d(s1.size() + 1, vector<int>(s2.size() + 1, 0));
//		for (int i = 1; i <= s1.size(); i++) {
//			for (int j = 1; j <= s2.size(); j++) {
//				d[i][j] = (s1[i - 1] == s2[j - 1]) ?  d[i - 1][j - 1] + s1[i - 1] :  max(d[i - 1][j], d[i][j - 1]);
//			}
//		}
//		int Sum1 = accumulate(s1.begin(), s1.end(), 0);
//		int Sum2 = accumulate(s2.begin(), s2.end(), 0);
//		return Sum1 + Sum2 - 2 * d[s1.size()][s2.size()];
//	}
//};
//int main() {
//	class Solution az;
//	az.minimumDeleteSum("sea", "eat");
//	system("pause");
//	return 0;
//} 
