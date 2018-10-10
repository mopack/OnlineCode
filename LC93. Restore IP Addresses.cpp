////#include <bits/stdc++.h>
//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
////並沒有練習到回朔的精神
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//static const vector<vector<vector<int>>>A = { {{4,0,0}}, {{3,1,0}}, {{3,0,1}, {2,2,0}}, {{2,1,1}, {1,3,0} }, { {2,0,2}, {1,2,1},{0,4,0} },
// {{1,1,2}, {0,3,1}}, {{1,0,3},{0,2,2} }, {{0,1,3}}, {{0,0,4}} };
//class Solution {
//public:
//	vector<string>Ans;
//	int pos[4];
//	void Print(string &s) {
//		string An = s; int i = -1;
//		for (auto &p : pos) {
//			i += p + 1;
//			An.insert(An.begin()+i, '.');
//		}
//		An.pop_back();
//		Ans.push_back(An);
//	}
//#define Valid(i) ( L==0 || (L==1 && s[i] != 48 && s[i]+s[i+1]!=96 ) || s[i] == '1' || (s[i] == '2' && ( (s[i+1]-48)*10 + s[i+2]-48 <= 55 ) ))
//	void go(int i, int si, string &s, vector<int>&d) {
//		if (i == 4) { Print(s); return; }
//		for (int L = 0; L <= 2; L++) {
//			if (d[L] && Valid(si)) {
//				pos[i] = L + 1;
//				d[L]--;
//				go(i + 1, si + L + 1, s, d);
//				d[L]++;
//			}
//		}
//	}
//	vector<string> restoreIpAddresses(string s) {
//		if (s.size() > 12 || s.size() < 4) return{};
//		for (auto &x : A[s.size() - 4]) {
//			vector<int> d = x;
//			go(0, 0, s, d);
//		}
//		return Ans;
//	}
//};
//
//
////class Solution {
////public:
////	vector<string> restoreIpAddresses(string s) {
////		int n = s.length();
////		vector<string> ans;
////		if (n == 0 || n > 12 || n < 4) return ans;
////		bt(s, ans, "", "", 0, 0);
////		return ans;
////	}
////
////	void bt(string s, vector<string> &ans, string cur, string newpart, int partcount, int index) {
////		//check if newpart is valid
////		//first check if it starts with 0 if its len is > 1
////		int newlen = newpart.length();
////		if (newlen > 1 && newpart[0] == '0') {
////			return;
////		}
////		//next check if newpart is > 255
////		if (newlen > 2 && stoi(newpart) > 255) return;
////		if (newlen >= 1 && newlen <= 3) {
////			cur += cur == "" ? newpart : "." + newpart;
////		}
////		if (partcount == 4 || index == s.length()) {
////			if (partcount == 4 && index == s.length()) {
////				ans.push_back(cur);
////			}
////			return;
////		}
////		newpart = "";
////		int i = 0, n = s.length();
////		while (i < 3 && index + i < n) {
////			newpart += s[index + i];
////			bt(s, ans, cur, newpart, partcount + 1, index + i + 1);
////			i++;
////		}
////	}
////};
//int main() {
//	class Solution az;
//	string s = "25525511135";
//	az.Print(s);
//	system("pause");
//	return 0;
//} 
//
//
