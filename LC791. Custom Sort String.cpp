//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//// 0ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	string customSortString(string S, string T) {
//		vector<int>pri(26, -1);
//		for (int i = 0; i != S.size(); i++) pri[S[i] - 97] = i;
//		sort(T.begin(), T.end(), [&pri](const char &a, const char &b) {return pri[a-97] < pri[b-97]; });
//		return T;
//	}
//};
//
//int main() {
//	class Solution az;
//	cout<<az.customSortString("cba", "abcd");
//	system("pause");
//	return 0;
//} 
