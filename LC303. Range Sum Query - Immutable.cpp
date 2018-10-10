//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//class NumArray { //Sol2: 稀疏表法 AC(136 ms)
//	vector<vector<int>>d;
//public:
//	int k2(int n) { // find max k st. (2^k)<=n, return k; 
//					//input n must >=1
//		int k;
//		for (k = 1; (1 << k) <= n; k++);
//		return k - 1;
//	}
//	NumArray(vector<int>a) {
//		int len = a.size();
//		int L = k2(len);
//		d = vector<vector<int>>(len, vector<int>(L+1));
//
//		for (int i = 0; i != len; i++)d[i][0] = a[i];
//
//		for (int j = 1; j <= L; j++)
//			for (int i = 0; i + (1 << j) - 1 < len; i++)
//				d[i][j] = d[i][j - 1] + d[i + (1 << (j-1))][j - 1];
//
//		//for (int j = 0; j <= L; j++){
//		//	cout << "len=" << (1 << j)<< ':';
//		//	for (int i = 0; i + (1 << j) - 1 < len; i++)
//		//		cout << d[i][j] << ' ';
//		//	cout << endl;
//		//}
//	}
//	int sumRange(int i, int j) {
//		int sum = 0, L;
//		for (int len = j - i + 1; len ; i += (1 << L), len -= (1 << L)) {
//			L = k2(len);
//			sum += d[i][L];
//		}
//		return sum;
//	}
//};
//class NumArray { //Sol1: 平方法 WA: 記憶體限制(Memory Limit Exceeded)
//	vector<vector<int>>d;
//	int N;
//public:
//	NumArray(vector<int>a) {
//		N = a.size(); if (N <= 0)return;
//		d = vector<vector<int>>(N, vector<int>(N));
//		for (int i = 0; i != N; i++)d[i][i] = a[i];
//		for (int i = 0; i != N; i++)
//			for (int j = i + 1; j != N; j++)
//				d[i][j] = d[i][j - 1] + a[j];
//	}
//
//	int sumRange(int i, int j) {
//		return d[i][j];
//	}
//};
//int main() {
//	vector<int> nums = { -2,0,3,-5,2,-1 };
//	NumArray x = NumArray(nums);
//	//for (int i = 1; i <= 64; i++)
//	//	cout << i << ' ' << x.k2(i) << endl;
//
//	cout << x.sumRange(0, 2) << endl;
//	system("pause");
//	return 0;
//} 