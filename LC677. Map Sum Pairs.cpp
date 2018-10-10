//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <unordered_map>
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//using namespace std;
////AC 0ms
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class MapSum {
//public:
//	unordered_map<string, int>Map, Original;
//	void insert(string key, int val) {
//		auto it = Original.find(key);
//		if (it != Original.end()) val -= it->second, it->second += val;
//		else Original.insert({ key, val });
//
//		string s="";
//		for (auto &c : key) {
//			s.push_back(c);
//			Map[s] += val;
//		}
//	}
//	int sum(string prefix) {
//		return Map[prefix];
//	}
//};
////AC 4ms
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class MapSum {
//public:
//	unordered_map<string, int>Map, Original;
//	void insert(string key, int val) {
//		val -= Original[key];
//		Original[key] += val;
//
//		string s = "";
//		for (auto &c : key) {
//			s.push_back(c);
//			Map[s] += val;
//		}
//	}
//	int sum(string prefix) {
//		return Map[prefix];
//	}
//};
//int main() {
//    //freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	system("pause");
//	return 0;
//} 