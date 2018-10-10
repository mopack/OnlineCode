//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <unordered_map>
//#include <set>
//using namespace std;
//// 8ms / PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	unordered_map<string, multiset<string>> G;
//	vector<string>Ans;
//
//	void DFS(const string &s) {
//		for (auto& E = G[s]; !E.empty();) {
//			string to = *E.begin();
//			E.erase(E.begin());
//			DFS(to);
//		}
//		Ans.push_back(s);
//	}
//	vector<string> findItinerary(vector<pair<string, string>> &tickets) {
//		for (auto &p : tickets)
//			G[p.first].insert(p.second);
//		DFS("JFK");
//
//		reverse(Ans.begin(), Ans.end());
//		return Ans;
//	}
//};
//
//// 8ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//struct TK {
//	int to, tid;
//	string tos;
//	TK() {}
//	TK(int TO, int TID, string TOS) {
//		to = TO; tid = TID;
//		tos = TOS;
//	}
//	bool operator<(TK t) {
//		return tos < t.tos;
//	}
//};
//class Solution {
//public:
//	int N = 0, TN;
//	unordered_map<string, int> s2n;
//	vector<vector<TK>> d;
//	vector<int> path, ansp; bool found = 0; // tid 
//	vector<bool> tvis; int Ntv = 0;
//	
//	void go(int Now) {
//		for (int i = 0; i < d[Now].size() && found == 0; i++) {
//			if (tvis[d[Now][i].tid] == 0) {
//				tvis[d[Now][i].tid] = 1; Ntv++; path.push_back(d[Now][i].tid);
//				if (Ntv == TN) { found = 1; ansp = path; return; }
//				go(d[Now][i].to);
//				tvis[d[Now][i].tid] = 0; Ntv--; path.pop_back();
//			}
//		}
//	}
//	vector<string> findItinerary(vector<pair<string, string>>&tickets) {	
//		TN = tickets.size();
//		for (int i = 0; i < TN; i++) {
//			if (s2n[tickets[i].first] == 0) s2n[tickets[i].first] = N++;
//			if (s2n[tickets[i].second] == 0) s2n[tickets[i].second] = N++;
//		}
//		d = vector<vector<TK>>(N);
//		for (int i = 0; i < TN; i++) {
//			d[s2n[tickets[i].first]].push_back(TK(s2n[tickets[i].second] , i, tickets[i].second));
//		}
//		for (int i = 0; i < N; i++) {
//			if (d[i].size() > 1) {
//				sort(d[i].begin(), d[i].end());
//			}
//		}
//		tvis = vector<bool>(tickets.size(), 0);
//		go(s2n["JFK"]);
//		vector<string> ans = { "JFK" };
//		for (int i = 0; i < ansp.size(); i++)ans.push_back(tickets[ansp[i]].second);
//		return ans;
//	}
//};
//
//int main() {
//	Solution az;
//	vector<pair<string, string>> tickets = { { "JFK","SFO" },{ "JFK","ATL" },{ "SFO","ATL" },{ "ATL","JFK" },{ "ATL","SFO" } };
//	vector<string> s = az.findItinerary(tickets);
//
//	system("pause");
//	return 0;
//} 