//#include <iostream>
//#include <cstdlib>
//#include <string>
//using namespace std;
//
//
//class Solution {
//public:
//	string multiply(string num1, string num2){
//		string s1(num1.size(), 0);
//		string s2(num2.size(), 0);
//		for (int i = 0; i < num1.size(); i++)s1[num1.size()-i-1] = num1[i] - 48;
//		for (int j = 0; j < num2.size(); j++)s2[num2.size()-j-1] = num2[j] - 48;
//
//		string s(num1.size() + num2.size(), 0);
//		string s3 = s;
//
//		for (int i = 0; i < s1.size(); i++) {
//			for (int j = 0; j < s2.size(); j++) {
//				s[i + j] += s1[i] * s2[j];
//				int k = i + j;
//				while (s[k] >= 10) {
//					s[k+1] += s[k] / 10;
//					s[k] %= 10;
//					k++;
//				}
//			}
//		}
//
//		int n = s.size();
//		while( n >= 2 && s[n-1] == 0)n--;
//		for (int i = 0; i < n; i++)s3[n- i - 1] = s[i] + 48;
//		
//		return s3;
//	}
//}a;
//
//int main() {
//	cout << a.multiply("123", "456") << endl;
//	system("pause");
//	return 0;
//}