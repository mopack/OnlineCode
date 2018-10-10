//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <queue>
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//using namespace std;
//////Sol: Coding: min. Present: AC: Lines/ms/PR
//////Sol: . Present: AC: Lines/4ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//struct CF {
//	char c; int f = 0;
//	bool operator<(CF t)const {
//		return f > t.f;
//	}
//};
//class Solution {
//public:
//	string frequencySort(string s) {
//		vector<CF>f(128);
//		for (auto c : s) f[c].f++;
//		for (int i = 0; i < 127; i++)f[i].c = i;
//		sort(f.begin(), f.end());
//
//		string ans = "";
//		for (int i = 0; i < 128 && f[i].f; i++) {
//			ans += string(f[i].f, f[i].c);
//		}
//		return ans;
//	}
//};
//// AC / 4ms / PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	string frequencySort(string s) {
//		int f[128] = {};
//		for (auto c : s) f[c]++;
//		priority_queue<pair<int, char>>q;
//		for (int i = 0; i != 128; i++)  
//			if(f[i]) q.push({ f[i], i });
//
//		string ans = "";
//		while (!q.empty()) { 
//			auto x = q.top(); q.pop();
//			ans += string(x.first, x.second);
//		}
//		return ans;
//	}
//};
//int main() {
//    //freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	class Solution az;
//	priority_queue<pair<int, char>>q;
//	q.push({ 2,'2' }); q.push({ 3,'2' });
//	cout << bool(pair<int, int>({2,3}) <  pair<int, int>({ 3,2 }) ); //=true. first judge first
//	cout <<'\n'<< q.top().first; //=3. bigest out first
//	system("pause");
//	return 0;
//} 