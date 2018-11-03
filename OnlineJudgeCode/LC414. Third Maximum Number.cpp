//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//class Solution {
//public:
//	int thirdMax(vector<int>& nums) {
//		long long m[3] = { 2147483649, 2147483649, 2147483649 }, temp, temp2; for (int i = 0; i <= 2; i++)m[i]*=-1;
//		for (int i = 0; i < nums.size(); i++) {
//			for (int j = 0; j <= 2; j++) {
//				if (m[j] < nums[i]) {
//					temp = m[j];
//					m[j] = nums[i];
//					while ( j + 1 <= 2) { 
//						temp2 = m[j + 1];
//						m[++j] = temp;
//						temp = temp2;
//					}
//					break; 
//				}
//				else if (m[j] == nums[i])break;
//			}
//		}
//		return ((m[2] + 2147483649 == 0) ? m[0] : m[2]);
//	}
//}az;
//
//int main() {
//	vector<int> x = { 2, 2,3,1 };
//	cout<< az.thirdMax(x);
//
//	system("pause");
//	return 0;
//} 