//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//class Solution { // Sol4(V2): Still 4ms
//public:
//	int repeatedStringMatch(string a, string b) {
//		string c = a; int q = 1;
//		for (; c.size() < b.size(); c += a, q++);
//
//		int jump[128], bi , ti;
//		for (int i = 1; i != 128; i++)jump[i] = b.size();
//		for (int i = 0; i != b.size() - 1; i++)jump[b[i]] = b.size() - i - 1;
//
//		for (int i = b.size() - 1; i < c.size(); i += jump[c[i]]) {
//			for (bi = b.size() - 1, ti = i; bi >= 0 && c[ti] == b[bi]; bi--, ti--);
//			if (bi < 0) return q;
//		}
//		c += a;
//		for (int i = b.size() - 1; i < c.size(); i += jump[c[i]]) {
//			for (bi = b.size() - 1, ti = i; bi >= 0 && c[ti] == b[bi]; bi--, ti--);
//			if (bi < 0) return q + 1;
//		}
//		return -1;
//	}
//};
//
//class Solution { // Sol4: 4ms PR99.91% 
//public:
//	bool subStringFind(string t, string p) { // BM-method if p is t's subString
//		int jump[128], pn = p.size();
//		for (int i = 1; i != 128; i++)jump[i] = pn;
//		for (int i = 0; i != pn - 1; i++)jump[p[i]] = pn - i - 1;
//
//		int pi, ti;
//		for (int i = pn - 1; i < t.size(); i += jump[t[i]]) {
//			for (pi = pn - 1, ti = i; pi >= 0 && t[ti] == p[pi]; pi--, ti--);
//			if (pi < 0) return 1;
//		}
//		return 0;
//	}
//	int repeatedStringMatch(string a, string b) {
//		string c = a; int q = 1;
//		for (; c.size() < b.size(); c += a, q++);
//		if (subStringFind(c,b)) return q;
//		if (subStringFind(c + a, b)) return q + 1;
//		return -1;
//	}
//};
//
//class Solution { // Sol3: 8ms PR85 Ad-Hoc 
//public:
//	//關鍵：若S = A*k為B的最小子字串，則有性質k = int(blen / alen)或int(blen / alen) + 1
//	// O(alen*(alen+blen))，alen+blen為c的長度，尋找時間複雜度為兩者相乘。
//	int repeatedStringMatch(string a, string b) {
//		string c = a; int q = 1;
//		for (; c.size() < b.size(); c += a, q++);
//		if (c.find(b)!=-1) return q;
//		c += a;
//		if (c.find(b)!=-1) return q + 1;
//		return -1;
//	}
//};
//
//class Solution { //Sol2: 72ms PR24 (自己寫的函數 反而最慢。結論STL並不慢，用STL就好)
//public:
//	string A, B;
//	inline bool abNEql(int sa, int sb, int len) {
//		for (; len--; sa++, sb++)
//			if (A[sa] != B[sb])return 1;
//		return 0;
//	}
//	int repeatedStringMatch(string a, string b) {
//		A = a; B = b;
//		if (b.size() <= a.size()) {
//			for (int i = 0; i + b.size() <= a.size(); i++)
//				if (!abNEql(i, 0, b.size())) return 1;
//		}
//
//		int M = min(a.size(), b.size()), R, Len, bi;
//		for (int L = 0; L <= M; L++) {
//			if (abNEql(a.size() - L, 0, L)) continue;
//			R = (b.size() - L) % a.size();
//			if (abNEql(0, b.size() - R, R)) continue;
//
//			Len = b.size() - L - R;
//			for (bi = L; bi < Len; bi += a.size())
//				if (abNEql(0, bi, a.size())) goto NextTry;
//			Len /= a.size();
//			if (L)Len++; if (R)Len++;
//			return Len;
//		NextTry:;
//		}
//		return -1;
//	}
//};
//class Solution { // Sol1: AC (Speed: 12ms PR79)
//public:
//	int repeatedStringMatch(string a, string b) {
//		if (b.size() <= a.size()) {
//			for (int i = 0; i + b.size() <= a.size(); i++)
//				if (b == a.substr(i, b.size())) return 1;
//		}
//
//		int M = min(a.size(), b.size()), R, Len, bi;
//		for (int L = 0; L <= M; L++) {
//			if (b.substr(0, L) != a.substr(a.size() - L, L)) continue;
//			R = (b.size() - L) % a.size();
//			if (a.substr(0, R) != b.substr(b.size() - R, R)) continue;
//
//			Len = b.size() - L - R;
//			for (bi = L; bi < Len; bi += a.size())
//				if (b.substr(bi, a.size()) != a) goto NextTry;
//
//			Len /= a.size();
//			if (L)Len++; if (R)Len++;
//			return Len;
//		NextTry:;
//		}
//		return -1;
//	}
//};
//int main() {
//	class Solution az;
//	string a = "abcd", b = "cdabcdab";
//	cout<<az.repeatedStringMatch(a, b);
//	system("pause");
//	return 0;
//} 