//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//// 4ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	bool isPali(string &s) {
//		for (int L = 0, R = s.size() - 1; L < R; L++, R--) {
//			if (s[L] != s[R]) return 0;
//		}
//		return 1;
//	}
//	void go(int st, string &s, vector<string>&An, vector<vector<string>> &Ans) {
//		if (st == s.size()) { 
//			Ans.push_back(An); 
//			return; 
//		}
//		
//		string x = { s[st] };
//		An.push_back(x);
//		go(st + 1, s, An, Ans);
//		An.pop_back();
//
//		for (int i = st + 1; i != s.size(); i++) {
//			x.push_back(s[i]);
//			if (isPali(x)) {
//				An.push_back(x);
//				go(i + 1, s, An, Ans);
//				An.pop_back();
//			}
//		}
//	}
//	vector<vector<string>> partition(string s) {
//		vector<vector<string>> Ans;
//		vector<string>An;
//		go(0, s, An, Ans);
//		return Ans;
//	}
//};
//
//// Other's 4ms/PR100
//class Solution {
//public:
//	vector<vector<string>> partition(string s) {
//		int n = s.length();
//
//		vector<vector<int> > isPalin(n, vector<int>(n, 0));
//		for (int l = 1; l <= n; l++) {
//			for (int i = 0, j = i + l - 1; j<n; j++, i++) {
//				if (l == 1) {
//					isPalin[i][j] = 1;
//				}
//				else if (l == 2) {
//					if (s[i] == s[j])
//						isPalin[i][j] = 1;
//				}
//				else {
//					if (s[i] == s[j] && isPalin[i + 1][j - 1])
//						isPalin[i][j] = 1;
//				}
//			}
//		}
//
//		vector<vector<string>> res;
//		vector<string> tmp;
//		part(0, tmp, res, isPalin, s, n);
//		return res;
//	}
//
//	void part(int i, vector<string>& tmp, vector<vector<string>>& res, vector<vector<int>>& isPalin, string& s, int& n) {
//		if (i == n) {
//			vector<string> t(tmp.begin(), tmp.end());
//			res.push_back(t);
//			return;
//		}
//
//		for (int j = i; j<n; j++) {
//			if (isPalin[i][j]) {
//				tmp.push_back(s.substr(i, j - i + 1));
//				part(j + 1, tmp, res, isPalin, s, n);
//				tmp.pop_back();
//			}
//		}
//	}
//};
//int main() {
//	class Solution az;
//	az.partition("efe");
//	
//	system("pause");
//	return 0;
//} 
