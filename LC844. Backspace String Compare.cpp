//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <stack>
//using namespace std;
//
////Sol3: (So11Àu¤Æ). Present: AC: Lines/0ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	bool Delete(string &S, int &B, int &I) {
//		for (; I >= 0; I--) {
//			if (S[I] == '#') B++;
//			else {
//				if (B) B--;
//				else return 1; // Fail (Remain something)
//			}
//		}
//		return 0; // End in Succeed (Nothing left)
//	}
//	bool backspaceCompare(string S, string T) {
//		int sB = 0, tB = 0, sI = S.size() - 1, tI = T.size() - 1;
//		while(Delete(S, sB, sI) && Delete(T, tB, tI))
//			if (S[sI--] != T[tI--]) return 0;
//
//		if (Delete(S, sB, sI)) return 0;
//		if (Delete(T, tB, tI)) return 0;
//		return 1;
//	}
//};
////Sol: (So11Àu¤Æ). Present: AC: Lines/ms/PR
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution { 
//public:
//	bool backspaceCompare(string S, string T) {
//		int sB = 0, tB = 0, sI = S.size() - 1, tI = T.size() - 1;
//		for (; 1 ; sI--, tI--) {
//			for (; sI >=0 ; sI--) 
//				if (S[sI] == '#') sB++;
//				else { if (sB) sB--; else break; }
//			for (; tI >= 0; tI--)
//				if (T[tI] == '#') tB++;
//				else { if (tB) tB--; else break; }
//			if (sI < 0 || tI < 0) break;
//			if (S[sI] != T[tI]) return 0;
//		}
//
//		for (; sI >= 0; sI--)
//			if (S[sI] == '#') sB++;
//			else { if (sB) sB--; else return 0; }
//		for (; tI >= 0; tI--)
//			if (T[tI] == '#') tB++;
//			else { if (tB) tB--; else return 0;}
//		return 1;
//	}
//};
//// Sol1: AC
////class Solution { 
////public:
////	bool backspaceCompare(string S, string T) {
////		int sB = 0, tB = 0, sI = S.size() - 1, tI = T.size() -1;
////		for (; sI >= 0 && tI >= 0; sI--,tI--) {
////			for (; sB || (sI >= 0 && S[sI]=='#'); sI--) {
////				if (sI < 0) { sB = 0; goto CheckOne; }
////				if (S[sI] == '#') sB++; else sB--; 
////			}
////			for (; tB || (tI >= 0 && T[tI] == '#'); tI--) {
////				if (tI < 0) { tB = 0; goto CheckOne; }
////				if (T[tI] == '#') tB++; else tB--;
////			}
////			if (sI < 0 || tI < 0) goto CheckOne;
////			if (S[sI] != T[tI]) return 0;
////		}
////	CheckOne:;
////		for (; sI >= 0; sI--) 
////			if (S[sI] == '#') sB++;
////			else { if (sB <= 0) return 0; else sB--; }
////		for (; tI >= 0; tI--)
////			if (T[tI] == '#') tB++;
////			else{ if (tB <= 0) return 0; else tB--; }
////		return 1;
////	}
////};
//
//// using stack method AC 0ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	bool backspaceCompare(string S, string T) {
//		stack<char>s, t;
//		for (auto c : S) {
//			if (c != '#') s.push(c);
//			else if(!s.empty()) s.pop();
//		}
//		for (auto c : T) {
//			if (c != '#') t.push(c);
//			else if (!t.empty()) t.pop();
//		}
//		return s == t;
//	}
//};
//int main() {
//	Solution az;
//	cout<<az.backspaceCompare("xywrrmp", "xywrrmu#p");
//	system("pause");
//	return 0;
//} 