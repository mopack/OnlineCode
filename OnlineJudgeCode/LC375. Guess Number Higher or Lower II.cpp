//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//
////Sol2: AC 0ms PR100.00%
//const int a[201] = {0,0,1,2,4,6,8,10,12,14,16,18,21,24,27,30,34,38,42,46,49,52,55,58,61,64,67,70,73,76,79,82,86,90,94,98,102,106,110,114,119,124,129,134,139,144,149,154,160,166,172,178,182,186,190,194,198,202,206,210,214,218,222,226,230,234,238,242,246,250,254,258,262,266,270,274,278,282,286,290,295,300,305,310,315,320,325,330,335,340,345,350,355,360,365,370,376,382,388,394,400,406,412,418,424,430,436,442,448,454,460,466,473,480,487,494,501,508,515,522,529,536,543,550,555,560,565,570,575,580,585,590,595,600,605,610,615,620,625,630,635,640,645,650,655,660,666,674,680,686,692,698,703,708,713,718,723,728,733,738,743,748,753,758,763,768,773,778,783,788,793,798,803,808,813,818,823,828,833,838,843,848,853,858,863,868,873,878,883,888,893,898,904,910,916,922,928,934,940,946,952 };
//class Solution { 
//public:
//	int getMoneyAmount(int n) {
//		return a[n];
//	}
//};
//
////Sol: . Present: AC: Lines/16ms/PR99
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//int d[201][201] = {}; //input data max (n <= 200)
//class Solution {
//public:
//	int g(int s, int e) {
//		if (s >= e)return 0;
//		if (d[s][e]) return d[s][e];
//		int Min = INT_MAX, Max;
//		for (int k = s; k <= e; k++) {
//			Max = k + max(g(s, k - 1), g(k + 1, e));
//			Min = min(Min, Max);
//		}
//		return d[s][e] = Min;
//	}
//	int getMoneyAmount(int n) {
//		return g(1, n);
//	}
//};

//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
//class Solution {
//public:
//	int MinPay(int s, int e, vector<vector<int>>&d) {
//		if (s >= e) return 0;
//		if (d[s][e]) return d[s][e];
//
//		int minPay = INT_MAX, Pay;
//		for (int k = s; k <= e; k++) {
//			Pay = k + max(MinPay(s, k - 1, d), MinPay(k + 1, e, d));
//			minPay = min(minPay, Pay);
//		}
//		return d[s][e] = minPay;
//	}
//	int getMoneyAmount(int N) {
//		vector<vector<int>>d(N + 1, vector<int>(N + 1, 0));
//		return MinPay(1, N, d);
//	}
//};
//
//int main() {
//	Solution az;
//	
//	for (int i = 1; i <= 200; i++)
//		cout << az.getMoneyAmount(i) << ',';
//
//
//	system("pause");
//	return 0;
//} 