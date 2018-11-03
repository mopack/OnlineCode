//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <unordered_map>
//using namespace std;
////0ms/PR100
//static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
//class Solution {
//public:
//	string fractionToDecimal(int numerator, int denominator) {
//		if (numerator == 0) return "0";
//		if (denominator == 0) return "";
//
//		string Ans = "";
//		if ((numerator < 0) ^ (denominator < 0)) Ans = "-"; // Neg Sign
//
//		long num = abs(long(numerator)), den = abs(long(denominator)); //Positive Part & Avoid Overflow
//		Ans += to_string(num / den); // Integer Part
//
//		long Rem = (num % den) * 10; // Floating Part
//		if (Rem == 0) return Ans; // No Floating Part
//		
//		Ans.push_back('.');
//		unordered_map<long, int>Map; // Floating Part
//		while (Rem) {
//			auto it = Map.find(Rem);
//			if (it != Map.end()) {
//				int pos = it->second; // Cycle Starting Index
//				string part1 = Ans.substr(0, pos);
//				string part2 = Ans.substr(pos);
//				return part1 + '(' + part2 + ')';
//			}
//
//			Map.emplace(Rem, Ans.size());
//			Ans += to_string(Rem / den);
//			Rem = (Rem % den) * 10;
//		}
//		return Ans; // No Cycle
//	}
//};
//
////0ms Other's
////class Solution {
////public:
////	string fractionToDecimal(int numerator, int denominator) {
////		if (numerator == 0) {
////			return "0";
////		}
////
////		string sign = (numerator > 0) ^ (denominator >= 0) ? "-" : "";
////		long num = abs((long)numerator);
////		long den = abs((long)denominator);
////
////		long intPart = num / den;
////		long rem = num % den;
////		if (rem == 0) {
////			return sign + to_string(intPart);
////		}
////
////		vector<char> fracPart;
////		unordered_map<long, size_t> memo;
////		int repeatBegin = -1;
////		while (true) {
////			memo.emplace(rem, fracPart.size());
////
////			rem *= 10;
////			fracPart.push_back(rem / den + '0');
////			rem %= den;
////			if (rem == 0) {
////				return sign + to_string(intPart) + "."
////					+ string(fracPart.begin(), fracPart.end());
////			}
////
////			auto search = memo.find(rem);
////			if (search != memo.end()) {
////				return sign + to_string(intPart) + "."
////					+ string(fracPart.begin(), fracPart.begin() + search->second)
////					+ "("
////					+ string(fracPart.begin() + search->second, fracPart.end())
////					+ ")";
////			}
////		}
////	}
////};
//int main() {
//	class Solution az;
//	cout << to_string(5/3);
//	system("pause");
//	return 0;
//} 
