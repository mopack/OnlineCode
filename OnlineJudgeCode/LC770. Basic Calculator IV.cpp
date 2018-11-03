//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <unordered_map>
//#include <stack>
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//using namespace std;
////Sol: Coding: min. Present: AC: Lines/ms/PR
////Sol: . Present: AC: Lines/ms/PR
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//
//enum priority { BOTTOM, EOL, LEFT_PAR, RIGHT_PAR, PLUS_MINUS, MUL_DIV, NOTFOUND };
//int pri(char c) {
//	switch (c) {
//		case '\1':  return BOTTOM;
//		case '\2':	return EOL;
//		case '(':	return LEFT_PAR;
//		case ')':	return RIGHT_PAR;
//		case '+':
//		case '-':	return PLUS_MINUS;
//		case '*':
//		case '/':	return MUL_DIV;
//		default:	return NOTFOUND;
//	}
//}
//struct Ep{
//	int Coef, IDs[130];
//
//	Ep() {
//		Coef = 1;
//		for (int i = 0; i < 129; i++) IDs[i] = 0;
//	}
//	Ep(char C) {
//		IDs[0] = C;
//	}
//};
//class Solution {
//	int jump[128], pn;
//	void SetJump(string &p) {
//		pn = p.size();
//		for (int i = 1; i < 128; i++)jump[i] = pn;
//		for (int i = 0; i < pn - 1; i++)jump[p[i]] = pn - i - 1;
//	}
//	int subStringFind(string &t, string &p, int St) { // Find from St
//		int pi, ti;
//		for (int i = St + pn - 1; i < t.size(); i += jump[t[i]]) {
//			for (pi = pn - 1, ti = i; pi >= 0 && t[ti] == p[pi]; pi--, ti--);
//			if (pi < 0) return ti + 1;
//		}
//		return -1;
//	}
//public:
//	vector<string> basicCalculatorIV(string F, vector<string>& EvalS, vector<int>& EvalI) {
//		for (int i = 0; i < EvalS.size(); i++) {
//			SetJump(EvalS[i]); string x = '(' + to_string(EvalI[i]) + ')';
//			for (int st = 0, n; (n = subStringFind(F, EvalS[i], st)) != -1; st = n + 1) {
//				F = F.substr(0, n) + x + F.substr(n + pn, F.size() - n - pn);
//			}
//		}
//		// Trans Form to PRN
//		unordered_map<string, int> S2ID; int Nid = 0;//1~Nid
//		stack<Ep>s; F.push_back('\2'); s.push(Ep('\1')); Ep ep;
//		vector<Ep> PRN;
//		for (int i = 0; i < F.size(); i++) {
//			if (F[i] == ' ') {}
//			else if (F[i] == '(') {
//				s.push(Ep('('));
//			}else if(isdigit(F[i])){
//				int n = F[i] - 48;
//				while (i + 1 < F.size() && isalpha(F[i + 1]))i++, n = 10 * n + F[i] - 48;
//				//cout << n;
//				ep.Coef = n; PRN.push_back(ep); ep.Coef = 1;
//			}else if (isalpha(F[i])) {
//				string S = ""; S.push_back(F[i]);
//				while (i + 1 < F.size() && isalpha(F[i + 1]))i++, S.push_back(F[i]);
//				auto it = S2ID.find(S); int n;
//				if (it == S2ID.end()) S2ID[S] = Nid, n = ++Nid;
//				else n = it->second;
//				//cout << "[" << n << "]";
//				ep.IDs[n] = 1; ep.Coef = 1; PRN.push_back(ep); ep.IDs[n] = 0;
//			}else {
//				int t;
//				while (pri(t = s.top().IDs[0]) >= pri(F[i])) {
//					//cout << s.top();
//					PRN.push_back(s.top()); s.pop();
//				}
//				if (t == '(' && F[i] == ')') s.pop();
//				else s.push(Ep(F[i]));
//			}
//		}
//		//cout << '\n';
//
//		// Calc PRN
//		stack<vector<Ep>>r; vector<Ep> Ep1, Ep2;
//		for (auto &ep : PRN) {
//			switch (ep.IDs[0]) {
//			case   0: r.push({ ep }); break;
//			case '-':
//			case '+': 
//				Ep1 = r.top(); r.pop();
//				Ep2 = r.top(); r.pop();
//				if (ep.IDs[0] == '-')
//					for (auto &x : Ep2) x.Coef *= -1;
//
//				r.push(add(Ep1, Ep2)); break;
//			case '*':
//				Ep1 = r.top(); r.pop();
//				Ep2 = r.top(); r.pop();
//				r.push(mul(Ep1, Ep2));
//			}
//		}
//
//		return{};
//	}
//	vector<Ep> add(vector<Ep> &a, vector<Ep> &b) {
//
//	}
//	vector<Ep> mul(vector<Ep> &a, vector<Ep> &b) {
//
//	}
//};
//struct FE {
//	string F; vector<string> EvalS; vector<int> EvalI;
//	FE(){}
//	FE(vector<string> &S) {
//		F = S[0];
//		int N = S.size() / 2;
//		EvalS.resize(N); EvalI.resize(N);
//		for (int i = 0; i < N; i++) EvalS[i] = S[i + 1];
//		for (int i = 0; i < N; i++) EvalI[i] = stoi(S[i + 1 + N]);
//	}
//};
//int main() {
//    //freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	class Solution az; FE fe;
//	vector<string> t[10];
//	t[0] = { "e + 8 - a + 5", "e", "1" };
//	t[1] = { "(e + 8) * (e - 8)" };
//	t[2] = { "7 - 7" };
//	t[3] = { "a * b * c + b * a * c * 4" };
//	t[4] = { "((a - b) * (b - c) + (c - a)) * ((a - b) + (b - c) * (c - a))" };
//	
//	for (int i = 0; i <= 4; i++) {
//		fe = FE(t[i]);
//		az.basicCalculatorIV(fe.F, fe.EvalS, fe.EvalI);
//	}
//	system("pause");
//	return 0;
//} 