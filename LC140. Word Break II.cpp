//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
////4ms/PR99
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	void Print(int i, int N, string &An, vector<vector<pair<int, int>>>&d, vector<string> &Ans, vector<string>&Word) {
//		if (i == 0) {
//			Ans.push_back(An);
//			return; 
//		}
//		string An0 = An;
//		for (auto &p : d[i]) {
//			An = Word[p.first] + ((i == N) ? "" : " ") + An0;
//			Print(p.second, N, An, d, Ans, Word);
//		}
//	}
//	vector<string> wordBreak(string s, vector<string>&Word) {
//		int N = s.size();
//		vector<vector<pair<int, int>>>d(N+1); // d[i]'s { wi, Lastdi(si) }
//		d[0].emplace_back(-1,-1);
//		for (int di = 0; di < N; di++) {
//			if (d[di].empty()) continue;
//			for (int wi = 0; wi < Word.size(); wi++) {
//				int dj = di + Word[wi].size();
//				if (dj > N) continue;
//				if (s.substr(di, Word[wi].size()) == Word[wi]) {
//					d[dj].emplace_back(wi, di);
//				}
//			}
//		}
//
//		vector<string> Ans;
//		string An = "";
//		Print(N, N, An, d, Ans, Word);
//		return Ans;
//	}
//};
//
//
////Others 4ms
//class Solution {
//public:
//	vector<string> wordBreak(string s, vector<string>& wordDict) {
//		std::unordered_set<string> mySet(wordDict.begin(), wordDict.end());
//
//		int n = s.size();
//		vector<bool> dp(n + 1, 0);
//
//		dp[0] = 1;
//
//		for (int i = 1; i <= n; i++) {
//			for (int j = i - 1; j >= 0; j--) {
//				if (dp[j] && mySet.count(s.substr(j, i - j))) {
//					dp[i] = 1;
//					break;
//				}
//			}
//		}
//
//		vector<string> ans;
//
//		if (dp[n]) {
//			reconstructSentence(s, 0, dp, mySet, "", ans);
//		}
//
//		return ans;
//	}
//
//	void reconstructSentence(string & s, int pos, vector<bool> & dp, unordered_set<string> & dict, string cur, vector<string> & ans) {
//		for (int i = pos + 1; i < dp.size(); i++) {
//			if (dp[i]) {
//				string newWord = s.substr(pos, i - pos);
//				if (dict.count(newWord)) {
//					if (i + 1 == dp.size()) {
//						ans.emplace_back(cur + newWord);
//						return;
//					}
//
//					reconstructSentence(s, i, dp, dict, cur + newWord + " ", ans);
//				}
//			}
//		}
//	}
//
//};
//
////0ms
//static
//auto unused = [] {
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	return 0;
//}();
//
//class Solution {
//public:
//
//	using memo_type
//		= std::unordered_map<
//		int,
//		std::vector< std::string > >;
//
//	std::vector<std::string>
//		wordBreak(
//			const std::string                   &S,
//			int                                 lb,
//			const std::vector< std::string >    &Ws,
//			memo_type                           * pMemo) {
//
//		std::vector< std::string >  sentences;
//
//		auto lb_sentences__iter = pMemo->find(lb);
//		if (pMemo->cend() != lb_sentences__iter)
//		{
//			sentences = lb_sentences__iter->second;
//		}
//		else
//		{
//			for (const std::string &w : Ws)
//			{
//				if (0 == std::strncmp(S.c_str() + lb, w.c_str(), w.length()))
//				{
//					if (w.length() == S.length() - lb)
//					{
//						// word `w` ends the sentence
//						sentences.emplace_back(w);
//					}
//					else
//					{
//						// characters still left after word `w`
//						for (const std::string &t
//							: wordBreak(S, lb + w.length(), Ws, pMemo))
//						{
//							sentences.emplace_back(w + " " + t);
//						}
//					}
//				}
//			}
//
//			pMemo->emplace(lb, sentences);
//		}
//
//		return sentences;
//	}
//
//	std::vector<std::string>
//		wordBreak(
//			const std::string                   &S,
//			const std::vector< std::string >    &Ws) {
//
//		memo_type   memo;
//		return wordBreak(S, 0, Ws, &memo);
//	}
//};
//
//int main() {
//	class Solution az;
//	vector<string> Word = { "cat","cats","and","sand","dog" };
//	vector<string> Ans = az.wordBreak("catsanddog", Word);
//	cout << "Ans=\n";
//	for (auto &a : Ans) {
//		cout << a << '\n';
//	}
//
//
//	system("pause");
//	return 0;
//} 
