// C++11 / 31ms / 2100 KB
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main() {
//	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	int N;
//	cin >> N;
//	vector<int>A(N), d;
//	for (int i = 0; i < N; i++)cin >> A[i];
//	for (auto &a : A) {
//		auto it = lower_bound(d.begin(), d.end(), a);
//		if (it == d.end()) d.push_back(a);
//		else (*it) = a;
//	}
//	cout << d.size();
//	return 0;
//}


// C++
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main() {
//	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	// input 
//	int Len, N;
//	cin >> N;
//	vector<int>x(N + 1), L(N + 1);
//	for (int i = 1; i <= N; i++)cin >> x[i];
//
//	// init
//	L[1] = x[1];
//	Len = 1;
//
//	// lis
//	for (int i = 2; i <= N; i++) {
//		if (x[i] > L[Len]) {
//			L[++Len] = x[i];
//		}else if (x[i] < L[1]) {
//			L[1] = x[i];
//		}else { //binary-search
//			int left = 1, right = Len, mid;
//
//			while (left <= right) {
//				mid = (left + right) / 2;
//
//				if (x[i] > L[mid]) {
//					left = mid+1;
//				}
//				else if(x[i] < L[mid]){
//					right = mid-1;
//				}else{
//					L[mid] = x[i];
//					goto found;
//				}
//			}
//			L[left] = x[i];
//
//		found:;
//		}
//	}
//	cout << Len << '\n';
//	return 0;
//}

