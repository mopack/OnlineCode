//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <unordered_map>
//#include <map>
//using namespace std;
//
////UnionFind + Hash(Record FirstAppear for Union), 36ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	struct UnionFind {
//		int UN;
//		vector<int>P, Size;
//		UnionFind(int N) {
//			UN = N;
//			Size = vector<int>(N, 1);
//			P.resize(N);
//			for (int i = 0; i < N; i++)P[i] = i;
//		}
//		int Find(int x) {
//			if (x == P[x]) return x;
//			return P[x] = Find(P[x]);
//		}
//		void Union(int x, int y) {
//			int Ux = Find(x), Uy = Find(y);
//			if (Ux == Uy)return;
//			if (Size[Ux] < Size[Uy]) swap(Ux, Uy);
//			Size[Ux] += Size[Uy];
//			P[Uy] = Ux; UN--;
//		}
//	};
//	vector<vector<string>> accountsMerge(vector<vector<string>>&Ac) {
//		UnionFind UF(Ac.size());
//		unordered_map<string, int>MailStoI; // MailName to First Id in Ac
//		unordered_map<string, int>::iterator k;
//		for (int i = 0; i < Ac.size(); i++) {
//			for (auto j = Ac[i].begin() + 1; j < Ac[i].end(); j++) {
//				if ((k = MailStoI.find(*j)) == MailStoI.end()) MailStoI.emplace(*j, i);
//				else UF.Union(i, k->second);
//			}
//		}
//		
//		// Allocate
//		vector<vector<string>>Ans(UF.UN); int AnsN = 0;
//		vector<int>UtoAnsId(Ac.size(), -1);
//		for (auto &mail : MailStoI) {
//			int U = UF.Find(mail.second);
//			if (UtoAnsId[U] == -1) {
//				Ans[AnsN] = {Ac[U][0]};
//				UtoAnsId[U] = AnsN++;
//			}
//			Ans[UtoAnsId[U]].push_back(mail.first);
//		}
//		for (auto &ans : Ans) {
//			sort(ans.begin() + 1, ans.end());
//		}
//		return Ans;
//	}
//};
//
//// UnionFind + Map(using BinarySearch), 96ms
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	struct UnionFind {
//		int UN;
//		vector<int>P, Size;
//		UnionFind(int N) {
//			UN = N;
//			Size = vector<int>(N, 1);
//			P.resize(N);
//			for (int i = 0; i < N; i++)P[i] = i;
//		}
//		int Find(int x) {
//			if (x == P[x]) return x;
//			return P[x] = Find(P[x]);
//		}
//		void Union(int x, int y) {
//			int Ux = Find(x), Uy = Find(y);
//			if (Ux == Uy)return;
//			if (Size[Ux] < Size[Uy]) swap(Ux, Uy);
//			Size[Ux] += Size[Uy];
//			P[Uy] = Ux; UN--;
//		}
//	};
//	vector<vector<string>> accountsMerge(vector<vector<string>>&Ac) {
//		int AcN = Ac.size();
//		// Creating a sorted & unique MailName Dataset
//		map<string, int> MailName; int MailNameN = 0; // MailString & MailId
//		for (auto &ac : Ac) {
//			for (auto it = ac.begin() + 1; it < ac.end(); it++) {
//				if (!MailName.count(*it)) MailName.emplace(*it, MailNameN++);
//			}
//		}
//		// BinarySearch to set up the Union Relationship
//		vector<vector<int>> Mail(MailNameN); // MailName Id's list of Ac's Id, which exists this MailName
//		for (int i = 0; i < AcN; i++) {
//			for (int j = 1; j < Ac[i].size(); j++) {
//				Mail[ MailName[Ac[i][j]] ].push_back(i);
//			}
//		}
//			
//		// Union-Find
//		UnionFind UF(AcN);
//		for (auto &mail : Mail) {
//			int U0 = UF.Find(mail[0]);
//			for (int i = 1; i < mail.size(); i++) {
//				UF.Union(U0, UF.Find(mail[i]));
//			}
//		}
//
//		// Allocate
//		vector<vector<string>> Ans(UF.UN); 
//		vector<int> UtoAnsId(AcN, -1); int AnsN = 0;
//		for (auto &mail : MailName) {
//			int U = UF.Find( Mail[mail.second][0] );
//			if (UtoAnsId[U] == -1) {
//				Ans[AnsN] = { Ac[U][0] };
//				UtoAnsId[U] = AnsN++;
//			}
//			Ans[UtoAnsId[U]].push_back(mail.first);
//		}
//		return Ans;
//	}
//};
//
//int main() {
//	vector<vector<string>> a, t = { { "John","johnsmith@mail.com","john_newyork@mail.com" },{ "John","johnsmith@mail.com","john00@mail.com" }, { "Mary","mary@mail.com" },{ "John","johnnybravo@mail.com" }};
//
//    // s = { { "Ethan","Ethan1@m.co","Ethan2@m.co","Ethan0@m.co" },{ "David","David1@m.co","David2@m.co","David0@m.co" },{ "Lily","Lily0@m.co","Lily0@m.co","Lily4@m.co" },{ "Gabe","Gabe1@m.co","Gabe4@m.co","Gabe0@m.co" },{ "Ethan","Ethan2@m.co","Ethan1@m.co","Ethan0@m.co" } };
//	class Solution az;
//	a = az.accountsMerge(t);
//	for (auto &x : a) {
//		cout << endl;
//		for (auto &s : x)cout << s << ',';
//	}
//	system("pause");
//	return 0;
//} 