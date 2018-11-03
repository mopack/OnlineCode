//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <set>
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//using namespace std;
////Sol: Coding: min. Present: AC: Lines/ms/PR
////Sol: . Present: AC: Lines/28ms/PR99.95
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Trie {
//public:
//	set<string>Set;
//	void insert(string word) {
//		Set.insert(word);
//	}
//	bool search(string word) {
//		return Set.find(word) != Set.end();
//	}
//	bool startsWith(string pre) {
//		auto it = Set.lower_bound(pre);
//		if (it == Set.end() || (*it).size() < pre.size()) return 0;
//		return ((*it).substr(0, pre.size()) == pre); //24ms(PR100) used handcheck to in prove speed
//	}
//};
//int main() {
//    //freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	system("pause");
//	return 0;
//} 