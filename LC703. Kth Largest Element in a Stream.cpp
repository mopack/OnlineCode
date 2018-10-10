//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <queue>
//#include <functional>
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//using namespace std;
////Sol: Coding: min. Present: AC: Lines/ms/PR
////Sol: . Present: AC: Lines/24ms/PR99.21
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class KthLargest {
//public:
//	priority_queue<int, vector<int>, greater<int>>q;
//	int K;
//	KthLargest(int k, vector<int> nums) {
//		K = k;
//		for (auto x : nums)
//			add(x);
//	}
//	int add(int val) {
//		q.push(val);
//		if (q.size() > K) q.pop();
//		return q.top();
//	}
//};
//int main() {
//    //freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	priority_queue<int, vector<int>, greater<int>>q;
//	for (int i = 1; i <= 10; i++)q.push(i);
//	cout << q.top();
//	system("pause");
//	return 0;
//} 