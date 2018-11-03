//// 0ms
//#include <iostream>
//#include <string>
//#include <chrono>
//#include <vector>
//#include <algorithm>
//using namespace std;
//using namespace chrono;
//
//struct Range {
//	minutes S, E;
//	Range(int s, int e) : S(hours(s)), E(hours(e)) {}
//	Range(minutes s, minutes e) : S(s), E(e){}
//};
//const Range N1(0, 8), D(8, 18), E(18, 22), N2(22, 24);
//
//class FeeCounter {
//public:
//	minutes Day, Evening, Night;
//	double FeeCount(int h1, int m1, int h2, int m2, const vector<double>&fee) {
//		Day = Evening = Night = minutes(0);
//		Range R1(minutes(h1 * 60 + m1), minutes(h2 * 60 + m2));
//		if (R1.E <= R1.S) {
//			Calculate(Range(R1.S, hours(24)));
//			Calculate(Range(hours(0), R1.E));
//		}else
//			Calculate(R1);
//
//		return fee[0] * Day.count() + fee[1] * Evening.count() + fee[2] * Night.count();
//	}
//	void Calculate(Range R) {
//		Day += Intersect(R, D);
//		Evening += Intersect(R, E); 
//		Night += Intersect(R, N1) + Intersect(R, N2);
//	}
//	minutes Intersect(Range A, Range B) {
//		minutes ret = min(A.E, B.E) - max(A.S, B.S);
//		return (ret > minutes(0)) ? ret : minutes(0);
//	}
//};
//
//int main() {
//	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	const vector<vector<double>> fee = {
//		{0.1, 0.06, 0.02},
//		{0.25, 0.15, 0.05},
//		{0.53, 0.33, 0.13},
//		{0.87, 0.47, 0.17},
//		{1.44, 0.8, 0.3}
//	};
//	FeeCounter FC;
//	char C; string s; int h1, m1, h2, m2; double Total;
//	while (cin >> C && C != '#') {
//		cin >> s >> h1 >> m1 >> h2 >> m2;
//		Total = FC.FeeCount(h1, m1, h2, m2, fee[C - 65]);
//
//		printf("%10s", s.c_str());
//		printf("%6d%6d%6d%3c", FC.Day.count(), FC.Evening.count(), FC.Night.count(), C);
//		printf("%8.2lf\n", Total);
//	}
//	return 0;
//}