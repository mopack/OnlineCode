//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <queue>
//#include <unordered_map>
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//using namespace std;
////40ms / PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	bool isPossible(vector<int>&A) {
//		unordered_map<int, int>F, Tail;
//		for (auto a : A)F[a]++;
//		for (auto a : A) {
//			if (F[a] == 0) continue;
//			F[a]--;
//			if (Tail[a - 1] > 0) {
//				Tail[a - 1]--;
//				Tail[a]++;
//			}else if(F[a + 1] && F[a + 2]){
//				F[a + 1]--;
//				F[a + 2]--;
//				Tail[a + 2]++;
//			}
//			else return 0;
//		}
//		return 1;
//	}
//};
//int main() {
//    //freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	//class Solution az;
//	tuple<int, int, int> a(1, 2, 3), b(2, 1, 3);
//	cout << int(a < b);
//	system("pause");
//	return 0;
//} 