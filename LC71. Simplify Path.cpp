//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <sstream>
//#include <stack>
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//using namespace std;
////Sol: Coding: min. Present: AC: Lines/ms/PR
////Sol: . Present: AC: Lines/ms/PR
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	string simplifyPath(string path) {
//		stringstream ss(path); string s;
//		vector<string> Stack;
//		while (getline(ss, s, '/')) {
//			if (s == "..") { 
//				if(!Stack.empty())
//					Stack.pop_back();
//			}
//			else if (!s.empty() && s != ".") Stack.push_back(s);
//		}
//
//		string Ret = "";
//		for(auto &S : Stack)
//			Ret += "/" + S;
//		return Ret.empty()?"/":Ret;
//	}
//};
//int main() {
//    //freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	class Solution az;
//	string s = "/a/./b/..//../c/";
//	az.simplifyPath(s);
//	system("pause");
//	return 0;
//} 