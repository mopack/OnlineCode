//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <stack>
//#include <unordered_map>
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//using namespace std;
////Sol: Coding: min. Present: AC: Lines/ms/PR
////Sol: . Present: AC: Lines/ms/PR
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//struct AtomNum{
//	string s; int n;
//	AtomNum(){}
//	AtomNum(string S, int N): s(S), n(N){}
//	bool operator<(AtomNum t) const {
//		return s < t.s;
//	}
//};
//class Solution {
//public:
//	string countOfAtoms(string F) {
//		vector<AtomNum> s;
//		string S = ""; int Times = 0;
//		for (int i = 0; i < F.size(); i++) {
//			if (isupper(F[i])) {
//				if (S != "")s.push_back(AtomNum(S, Times));
//				S = F[i]; Times = 1;
//			}else if(islower(F[i])){
//				S.push_back(F[i]);
//			}else if(F[i] == '('){
//				if (S != "")s.push_back(AtomNum(S, Times));
//				s.push_back(AtomNum("(", 0));
//				S = ""; Times = 0;
//			}else if(F[i] == ')'){ // ) + num -> * & pop
//				if (S != "")s.push_back(AtomNum(S, Times));
//				int n = F[++i] - 48;
//				while (i + 1 < F.size() && isdigit(F[i + 1])) i++, n = 10 * n + F[i] - 48;
//
//				int j = s.size() - 1;
//				for (; s[j].s != "("; j--) {
//					s[j].n *= n;
//				}
//				swap(s[j], s.back()); s.pop_back();
//				S = ""; Times = 0;
//			}else {//num -> * 
//				int n = F[i] - 48;
//				while (i + 1 < F.size() && isdigit(F[i + 1])) i++, n = 10 * n + F[i] - 48;
//				Times = n;
//			}
//		}
//		if (S != "")s.push_back(AtomNum(S, Times));
//
//		unordered_map<string, int> Map;
//		for (auto &x : s) 
//			Map[x.s] += x.n;
//		s.clear();
//		for (auto &x : Map) 
//			s.push_back(AtomNum(x.first, x.second));
//		sort(s.begin(), s.end());
//		string Ret = "";
//		for (auto &an : s) {
//			Ret += an.s;
//			if (an.n > 1) Ret += to_string(an.n);
//		}
//		return Ret;
//	}
//};
//int main() {
//    //freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	class Solution az;
//	string s = "K4(ON(SO3)2)2";
//	cout << az.countOfAtoms(s) << '\n';
//	system("pause");
//	return 0;
//} 