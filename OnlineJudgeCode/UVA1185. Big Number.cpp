// floor(log10(N!)) + 1
//  = floor(logN + logN-1 +...+ log1) + 1

//V1
//#include <iostream>
//#include <cmath>
//using namespace std;
//int main() {
//	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	int TaskN, N;
//	cin >> TaskN;
//	while (TaskN--) {
//		cin >> N;
//		double Sum = 0;
//		for (int i = 2; i <= N; i++)
//			Sum += log10(i);
//		cout << int(Sum) + 1 << '\n';
//	}
//	return 0;
//}

//V2
//#include <iostream>
//#include <cmath>
//#include <vector>
//using namespace std;
//int main() {
//	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	// PreRun
//	vector<int>d(1e7 + 1);
//	double Sum = 0;
//	for (int i = 1; i <= 1e7; i++) {
//		Sum += log10(i);
//		d[i] = int(Sum) + 1;
//	}
//	
//	int TaskN, N;
//	cin >> TaskN;
//	while (TaskN--) {
//		cin >> N;
//		cout << d[N] << '\n';
//	}
//	return 0;
//}

// V3 Stirling's Formula
//#include <iostream>
//#include <cmath>
//using namespace std;
//int main() {
//	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	int TaskN, N;
//	const double pi2 = 2 * acos(-1); //2pi
//	const double Le = 1 / log(10);   //1/loge10
//	cin >> TaskN;
//	while (TaskN--) {
//		cin >> N;
//		if (N == 1) cout << "1\n";
//		else {
//			double Ans = log10(sqrt(pi2 * N)) + N * (log10(N) - Le);
//			cout << int(Ans) + 1 << '\n';
//		}
//	}
//	return 0;
//}