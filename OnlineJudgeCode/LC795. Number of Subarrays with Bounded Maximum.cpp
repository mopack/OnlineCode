//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//class Solution {
//public:
//	int numSubarrayBoundedMax(vector<int>& A, int L, int R) {
//		int s, e, q, ans=0;
//		
//		for (s = 0; s < A.size(); s++/*skip original e (cause A[e]>R*/) {
//			// find the A[s]<=R
//			for (; s < A.size() && A[s] > R; s++); 
//			// find the A[e]>R
//			for (e = s; e < A.size() && A[e] <= R; e++);
//			e--;
//			//printf("[%d~%d]\n", s, e);
//
//			// check L in s~e
//			while(s <= e) {
//				// find the first A[q]>=L
//				for (q = s; q <= e && A[q] < L; q++); 
//
//				if(q<=e && A[q]>=L) { // found
//					ans += (e - q + 1) * (q - s + 1); // len(q~e) * number(s~q)
//					//printf("(s=%d,q=%d)=%d\n", s, q, (e - q + 1) * (q - s + 1));
//					s = q + 1;
//				}else{ 
//					s = e + 1; // original e
//				}
//			}
//			// check L end
//		}
//		return ans;
//	}
//}a;
//
//int main() {
//	vector<int> x = {100,100,100 };//{ 2,9,2,5,6 };
//	cout << a.numSubarrayBoundedMax(x, 32,69 ) << endl;
//	system("pause");
//	return 0;
//}