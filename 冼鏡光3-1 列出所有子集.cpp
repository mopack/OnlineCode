//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//int main() {
//	bool d[20];
//	int n, i;
//	while(cin >> n && n){
//		for (int i = 0; i < n; i++) d[i] = 0;
//		cout << "\n{}";
//		while (1) {
//			for (i = 0; i < n && d[i] == 1; d[i] = 0, i++);
//			if (i == n) break;
//			d[i] = 1;
//			for (i = 0; i < n && d[i] == 0; i++);
//
//			printf("\n{%d", i + 1);
//			for (int j = i + 1; j < n; j++)
//				if (d[j]) cout << "," << (j + 1);
//			printf("}");		
//		}
//	}
//	return 0;
//}