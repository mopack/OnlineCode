//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
////Sol: . Present: AC: 35Lines/28ms/PR98
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	int leastInterval(vector<char>& tasks, int n) {
//		int Time[26] = {}; // Time
//		int a[26] = {}; // amount
//		for (int i = 0; i < tasks.size(); i++) a[tasks[i] - 65]++;
//
//		int RTime = 0;
//		while (1) {
//			// find smallest idle with amount>0
//			int mi = -1, mv = INT_MAX;
//			for (int i = 0; i < 26; i++)
//				if (a[i]) {
//					if (Time[i] < mv) { mv = Time[i]; mi = i; }
//					else if (Time[i] == mv && a[i] > a[mi]) { mi = i; }
//				}
//
//			//printf("t:%d %d a=%d %c\n", RTime, Time[mi], a[mi], mi + 65);
//			if (mi == -1)break;
//			a[mi]--;
//
//			int diff = 1;
//			if (RTime < Time[mi]) diff += Time[mi] - RTime;
//
//			RTime += diff;
//			Time[mi] = RTime + n;
//			for (int i = 0; i < 26; i++) Time[i] = max(Time[i], RTime);
//
//			//printf("t:%d %d a=%d %c\n\n", RTime, Time[mi], a[mi], mi + 65);
//		}
//
//		return RTime;
//	}
//};
////Sol: . Present: AC: 35Lines/8ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	static int leastInterval(vector<char>& tasks, int n) {
//		vector<int> map(26, 0);
//		int res = 0, count = 0;
//		for (char c : tasks) map[c - 65]++;
//		for (int i = 0; i < 26; i++) count = max(count, map[i]);
//
//		res = (n + 1)*(count - 1);
//		for (int i = 0; i<26; i++) {
//			if (map[i] == count)
//				res++;
//		}
//		return max(res, int(tasks.size()));
//	}
//};
//int main() {
//	Solution az;
//	vector<char> x = { 'A','A','A','B','B','B' }; int n = 2;
//	cout<<az.leastInterval(x, n)<<endl;
//	system("pause");
//	return 0;
//}