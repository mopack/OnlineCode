//#include <iostream>
//#include <cstdlib>
//
//using namespace std;
//
//unsigned int ans[10001][101], w[10001], total, n; //unsigned long long 才是正確，但是測資錯誤，為了配合側資，故用unsigned int
//
//int main() {
//	freopen("pf3.in", "rt", stdin); freopen("pf.out", "wt", stdout);
//
//	while (cin >> n >> total) {
//		if (n == 0 && total == 0)break;
//		
//		
//		for (int j = 0; j <= n; j++) {
//			ans[0][j] = 1;
//			for (int i = 1; i <= total; i++) {
//				ans[i][j] = 0;
//			}
//		}
//
//		for (int i = 1; i <= n; i++) {
//			cin >> w[i];
//		}
//
//		for (int j = 1; j <= n; j++) {
//			//printf("ans[%d][%d](=%d)++\n", w[j], j, ans[w[j]][j]);
//			ans[w[j]][j]++;
//
//			for (int i = 1; i <= total; i++) {
//				ans[i][j] += ans[i][j-1];
//				//unsigned long long u = 0;
//				if (i > w[j]) {
//					ans[i][j] += ans[i - w[j]][j];
//					//u = ans[i - w[j]][j];
//				}
//
//				//printf("ans[%d][%d](=%d)+=ans[%d][%d](=%d) + ans[%d][%d](=%d)\n",i,j,ans[i][j],i,j-1, ans[i][j - 1], i - w[j],j ,u);
//			}
//			
//		}
//		for (int i = 1; i <= total; i++) {
//			printf("ans[%d][%d]=", i, n);
//			cout << ans[i][n] << endl;
//		}
//		printf("%lld\n", ans[total][n]);
//	}
//
//	return 0;
//}