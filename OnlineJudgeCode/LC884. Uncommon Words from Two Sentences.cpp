//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <unordered_map>
//#include <unordered_set>
//#include <sstream>
//using namespace std;
//// 0ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	vector<string> uncommonFromSentences(string A, string B) {
//		vector<string> Ans;
//		unordered_set<string>SingleA, MultiA, SingleB, MultiB;
//		string s;
//
//		stringstream ss(A);
//		while (getline(ss, s, ' ')) {
//			if (MultiA.count(s)) continue;
//			if (SingleA.count(s)) {
//				SingleA.erase(s); MultiA.insert(s);
//			}else{
//				SingleA.insert(s);
//			}
//		}
//
//		ss.clear(); ss.str(B);
//		while (getline(ss, s, ' ')) {
//			if (MultiB.count(s)) continue;
//			if (SingleB.count(s)) {
//				SingleB.erase(s); MultiB.insert(s);
//			}
//			else {
//				SingleB.insert(s);
//			}
//		}
//
//		for (auto &w : SingleA) {
//			if (!SingleB.count(w) && !MultiB.count(w)) {
//				Ans.push_back(w);
//			}
//		}
//
//		for (auto &w : SingleB) {
//			if (!SingleA.count(w) && !MultiA.count(w)) {
//				Ans.push_back(w);
//			}
//		}
//
//		return Ans;
//	}
//};
// //Other's ²V¤JÆ[©À
////class Solution {
////public:
////	vector<string> uncommonFromSentences(string A, string B) {
////		unordered_map<string, int>ctr;
////		vector<string>ans;
////		stringstream con;
////		con << A << " " << B;
////		//cout<<con.str();
////		string words;
////		while (con >> words) {
////			ctr[words]++;
////		}
////		for (auto w : ctr) {
////			if (w.second == 1) { ans.push_back(w.first); }
////		}
////		return ans;
////	}
////};
//
//int main() {
//	class Solution az;
//	az.uncommonFromSentences("s z z z s", "s z ejt");
//	system("pause");
//	return 0;
//} 
