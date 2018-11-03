//#include <iostream>
//#include <cstdlib>
//
//using namespace std;
//
//
//int n, x[50001],last[50001];
//int len;
//
//int main() {
//	// input 
//	cin >> n;
//	for (int i = 1; i <= n; i++)cin >> x[i];
//
//	// init
//	last[1] = x[1];
//	len = 1;
//	//cout << "1 ";
//
//	// lis
//	for (int i = 2; i <= n; i++) {
//		if (x[i] > last[len]) {
//			last[++len] = x[i];
//			//cout << len << ' ';
//		}else if (x[i] < last[1]) {
//			last[1] = x[i];
//			//cout << "1 ";
//		}else { //binary-search
//			int left = 1, right = len, mid;
//
//			while (left <= right) {
//				mid = (left + right) / 2;
//
//				if (x[i] > last[mid]) {
//					left = mid+1;
//				}
//				else if(x[i] < last[mid]){
//					right = mid-1;
//				}else{
//					last[mid] = x[i];
//					//cout << mid << ' ';
//					goto found;
//				}
//			}
//			//cout << left << ' ';
//			last[left] = x[i];
//
//		found:;
//		}
//	}
//
//	//cout << endl;
//	cout << len << endl;
//	
//	//system("pause");
//	return 0;
//}