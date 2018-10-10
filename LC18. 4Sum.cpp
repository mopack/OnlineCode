//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <unordered_set>
//#include <set>
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//using namespace std;
////Sol: Coding: min. Present: AC: Lines/ms/PR
//////Sol: . Present: AC: Lines/ms/PR
////static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
////class Solution {
////public:
////	vector<vector<int>> fourSum(vector<int>&A, int Target) {
////		if (A.size() < 4) return{};
////		vector<vector<int>>Ans;
////		sort(A.begin(), A.end());
////		for (int i = 0; i < A.size() - 3; i++) {
////			if (i != 0 && A[i] == A[i - 1])continue;
////			for (int j = i + 1; j < A.size() - 2; j++) {
////				if (j != i + 1 && A[j] == A[j - 1]) continue;
////				int L = j + 1, R = A.size() - 1;
////				while (L < R) {
////					int Now = A[L] + A[R] + A[i] + A[j];
////					if (Now == Target) {
////						vector<int>an({ A[i], A[j], A[L], A[R] });
////						if (Ans.empty() || Ans.back()!=an) Ans.push_back(an);
////						if (L < i) L++; else R--;
////					}else if (Now < Target) L++;
////					else R--;
////				}
////			}
////		}
////		return Ans;
////	}
////};
//int main() {
//    //freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	class Solution az;
//	vector<int>x = { -2,-1,0,1,2 }; int t = 0;
//	az.fourSum(x, t);
//	system("pause");
//	return 0;
//} 