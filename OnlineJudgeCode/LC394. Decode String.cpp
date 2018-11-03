//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <stack>
//#include <algorithm>
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//using namespace std;
////Sol: . Present: AC: 36Lines/0ms/PR100
////static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
////struct SI {
////	bool isS;
////	string s; int n;
////	SI(){}
////	SI(bool is, string S, int N) : n(N), s(S), isS(is) {}
////};
////class Solution {
////public:
////	string decodeString(string F) {
////		F = "1[" + F + "]";
////		vector<SI> s;
////		for (int i = 0; i < F.size(); i++) {
////			if (isdigit(F[i])) {
////				int n = 0;
////				for (; F[i] != '['; n = n * 10 + F[i] - 48, i++);
////				s.push_back(SI(0, "", n));
////			}else if(F[i] == ']'){
////				int j, n;
////				for (j = s.size() - 1; s[j].isS; j--);
////				n = s[j].n;
////
////				string x = "", y = "";
////				for (int k = j + 1; k < s.size(); k++) x += s[k].s;
////				for (int k = 1; k <= n; k++) y += x;
////				s[j] = SI(1, y, 0); 
////				s.resize(j + 1);
////			}else{
////				string x = ""; x.push_back( F[i]);
////				while (i + 1 < F.size() && F[i + 1] != ']' && !isdigit(F[i + 1])) x.push_back(F[++i]);
////				s.push_back(SI(1, x, 0));
////			}
////		}
////		return s[0].s;
////	}
////};
//
////Sol2: . Present: AC: 23Lines/0ms/PR100
////static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
////class Solution {
////public:
////	int i = 0;
////	string go(string &s) {
////		string ret = "";
////		for (; i < s.size() && s[i]!=']'; i++) {
////			if (!isdigit(s[i])) ret.push_back(s[i]);
////			else {
////				int j;
////				for (j = i + 1; isdigit(s[j]); j++);
////				int n = stoi(s.substr(i, j - i));
////				i = j + 1;
////				string x = go(s);
////				while (n--) ret += x;
////			}
////		}
////		return ret;
////	}
////	string decodeString(string s) {
////		return go(s);
////	}
////};
//
////Sol2: . Present: AC: 22Lines/0ms/PR100
////static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
////class Solution {
////public:
////	int i = 0;
////	string go(string &s) {
////		string ret = "";
////		for (; i < s.size() && s[i] != ']'; i++) {
////			if (!isdigit(s[i])) ret.push_back(s[i]);
////			else {
////				int j, n = 0;
////				for (j = i; isdigit(s[j]); n = 10 * n + s[j] - 48, j++);
////				i = j + 1;
////				string x = go(s);
////				while (n--) ret += x;
////			}
////		}
////		return ret;
////	}
////	string decodeString(string s) {
////		return go(s);
////	}
////};
//int main() {
//  //freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	string s = "3[a]2[bc]";// "3[a2[c]]";
//	class Solution az;
//	cout << az.decodeString(s);
//
//	//int n; char line[12]; string s = "ajdisofj01234";
//	//sscanf(s.c_str(), "%[a-z]%d",line, &n);
//	//cout << n;
//	system("pause");
//	return 0;
//} 