//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//using namespace std;
////Sol: Coding: min. Present: AC: Lines/ms/PR
////Sol: . Present: AC: Lines/ms/PR
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	vector<int> partitionLabels(string s) {
//		vector<int>L(26, -1);
//#define La(x) (L[s[x] - 97])
//		for (int i = s.size() - 1; i >= 0; i--) {
//			if (La(i) == -1) La(i) = i;
//		}
//
//		vector<int>Ans;
//		int start = 0, end = La(0);
//		for (int i = 0; i < s.size(); i++) {
//			end = max(end, La(i));
//			if (i == end) { // find a partition
//				Ans.push_back(end - start + 1);
//				start = end + 1;
//			}
//		}
//		return Ans;
//	}
//};
//int main() {
//    //freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	class Solution az;
//	system("pause");
//	return 0;
//} 