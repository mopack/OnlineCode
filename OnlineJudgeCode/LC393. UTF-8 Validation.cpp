//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <bitset>
//
//using namespace std;
//
////Sol: . Present: AC: 22Lines/4ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	inline int find0(string &s) {
//		for (int i = 0; i <= 4; i++)if (s[i] == '0')return i;
//		return 1;
//	}
//	bool validUtf8(vector<int>& A) {
//		string s;
//		for (int i = 0; i < A.size();i++) {
//			s = bitset<8>(A[i]).to_string();
//			int n = find0(s); if (n == 1)return 0;
//			for (int j = 1; j < n; j++) {
//				if (i + j >= A.size())return 0;
//				s = bitset<8>(A[i+j]).to_string();
//				if (s[0] != '1' || s[1] != '0')return 0;
//			}
//			if (n)i += n - 1;
//		}
//		return 1;
//	}
//};
//
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	bool validUtf8(vector<int>& A) {
//		for (int i = 0; i < A.size(); i++) {
//			int Z = 0, n;
//			for (n = 7; (A[i] >> n) & 1; n--, Z++);
//			if (Z == 1 || Z > 4) return 0;
//
//			for (int j = 2; j <= Z; j++) {
//				i++;
//				if ((A[i] >> 6) != 2) return 0;
//			}
//		}
//		return 1;
//	}
//};
//
//
////Sol: . Present: AC: 17Lines/4ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	bool validUtf8(vector<int>& A) {
//		for (int i = 0; i < A.size(); i++) {
//			int Z = 0; // Find First Zero
//			for (int n = 7; (A[i] >> n) & 1; n--, Z++);
//			if (Z == 1 || Z > 4) return 0;
//
//			for(int j = 2; j <= Z; j++){
//				i++;
//				if (!((A[i] >> 7) & 1) || (A[i] >> 6) & 1) return 0;
//			}
//		}
//		return 1;
//	}
//};
//
//int main() {
//	Solution az;
//	vector<int> x = { 197,130,1 };
//	cout << az.validUtf8(x)<< endl;
//
//	system("pause");
//	return 0;
//} 