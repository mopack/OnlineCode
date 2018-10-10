//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
////0ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	void DFS(int i, string &s, string &An, vector<string> &Ans, const vector<string> &data) {
//		if (i == s.size()) {
//			Ans.push_back(An);
//			return;
//		}
//		int n = s[i] - '0' - 2; //0~7
//		for (auto &c : data[n]) {
//			An.push_back(c);
//			DFS(i + 1, s, An, Ans, data);
//			An.pop_back();
//		}
//	}
//	vector<string> letterCombinations(string s) {
//		if (s.empty()) return{};
//		static const vector<string> data = { "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
//		vector<string> Ans;
//		string An = "";
//		DFS(0, s, An, Ans, data);
//		return Ans;
//	}
//};
////Others
//class Solution {
//public:
//	vector<string> letterCombinations(string digits) {
//		vector<string> res({ "" });
//		if (digits.empty()) return{};
//		helper(digits, res);
//		return res;
//	}
//
//	void helper(string digits, vector<string>& res)
//	{
//		if (digits.empty()) return;
//		vector<string> temp = res;
//		vector<string> h({ "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" });
//		res.clear();
//		for (int i = 0; i < temp.size(); ++i)
//		{
//			for (char c : h[digits[0] - '0' - 2])
//			{
//				res.push_back(temp[i] + c);
//			}
//		}
//		helper(digits.substr(1), res);
//	}
//};
//int main() {
//	class Solution az;
//	system("pause");
//	return 0;
//} 
