//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//
////4ms/PR99
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	string largestNumber(vector<int>& nums) {
//		vector<string>A;
//		for (auto &x : nums) A.emplace_back(to_string(x));
//		sort(A.begin(), A.end(), [](const string &s1, const string &s2) { return (s1 + s2) > (s2 + s1); });
//
//		string Ans;
//		for (auto &a : A) Ans += a;
//
//		int i;
//		for (i = 0; i + 1 < Ans.size() && Ans[i] == '0'; i++);
//		return Ans.substr(i);
//	}
//};
//
//int main() {
//	class Solution az;
//	system("pause");
//	return 0;
//} 
