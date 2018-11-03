//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//int main() {
//	vector<int> x = { 1,1,1,2,1,1,2 }; // smallest abs diff = 5-4 =1
//	int ansStart, ansEnd, ansLen;
//
//	int diff = 0, absDiff;
//	for (int i = 0; i < x.size(); i++) diff -= x[i];
//	absDiff = -diff;
//	printf("total = %d\n", absDiff);
//
//	ansLen = -diff; ansStart = 0; ansEnd = 0;
//	
//	int start = 0, end = 0;		// end = lead start = follow (in book)
//	while (end < x.size()) {
//		if (ansLen > absDiff) {
//			ansLen = absDiff; ansStart = start; ansEnd = end;
//		}else if(diff > 0){
//			diff -= 2 * x[start++];
//		}
//		else { // diff<0
//			diff += 2 * x[end++];
//		}
//		absDiff = abs(diff);
//	}
//
//	// output
//	int sum = 0; for (int i = ansStart; i < ansEnd; i++)sum += x[i];
//	printf("x[%d~%d]=%d\n", ansStart, ansEnd, sum);
//
//	system("pause");
//	return 0;
//}