//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//using namespace std;
////Sol: Coding: min. Present: AC: Lines/ms/PR
////Sol: . Present: AC: Lines/ms/PR
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	string pushDominoes(string s) {
//		int N = s.size(), j, n;
//		vector<int>d(N, 0);
//		for(int i = 0; i != N; i++){
//			if (s[i] == 'L') {
//				j = i - 1; n = N;
//				for (; j >= 0 && s[j] == '.'; j--, n--) d[j] += -n;
//			}else if(s[i]=='R'){
//				j = i + 1; n = N;
//				for (; j < s.size() && s[j] == '.'; j++, n--) d[j] += n;
//			}
//		}
//
//		for(int i = 0; i != N; i++){
//			if (d[i] > 0) s[i] = 'R';
//			else if (d[i] < 0) s[i] = 'L';
//		}
//		return s;
//	}
//};
//int main() {
//    //freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	class Solution az;
//	system("pause");
//	return 0;
//} 