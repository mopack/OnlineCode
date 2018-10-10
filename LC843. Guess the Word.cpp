//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <ctime>
//
//using namespace std;
//class Master {
//public:
//	int guess(string word);
//};
//
////Sol: . Present: AC: Lines/ms/PR
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	int MatchN(string &a, string &s) {
//		int m = 0;
//		for (int i = 0; i != a.size(); i++)
//			if (a[i] == s[i])m++;
//		return m;
//	}
//	void findSecretWord(vector<string>&w, Master& master) {
//		vector<string> t;
//		for (int Count = 1; Count <= 10; Count++) {
//			string s = w[rand() % w.size()];
//			int M = master.guess(s);
//			// Delete Not Match
//			t.clear();
//			for (auto &x : w) 
//				if (MatchN(x, s) == M) t.push_back(x);
//			swap(w, t);
//		}
//	}
//};
//int main() {
//	
//	//for (int i = 1; i <= 10; i++)cout << rand() << ' ';
//	class Solution az;
//	system("pause");
//	return 0;
//} 