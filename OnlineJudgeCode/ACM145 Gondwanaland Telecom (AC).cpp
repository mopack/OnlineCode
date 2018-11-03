//#include <iostream>
//#include <cstdlib>
//#include <sstream>
//#include <string>
//using namespace std;
//
//double charge[][3]  = { { 0.1, 0.06,0.02 },
//			   		    { 0.25,0.15,0.05 },
//					    { 0.53,0.33,0.13 },
//					    { 0.87,0.47,0.17 },
//				  	    { 1.44,0.80,0.30 } };
//
//string s, phonenumber;
//int userate;
//int Mden[3];
//
//inline int comtime(int h1, int m1, int h2, int m2) {// 1 => time1 < time2
//	if (h1 > h2 || (h2 == h1 && m1 > m2))
//		return -1;
//	else if (h1 == h2 && m1 == m2)
//		return 0;
//	else
//		return 1;
//
//}
//// n d  e  n
////0-8-18-22-24
//inline int diff(int h1, int m1, int h2, int m2) {
//	int ans = m2 + (h2 - h1) * 60;
//	return (ans - m1);
//}
//void addtime(int h1, int m1, int h2, int m2) {
//	int hs=h1, ms=m1;
//
//	// test
//	if (comtime(h2, m2, 8, 0) != -1) { //time1 <= time2 
//		Mden[2] += diff(h1, m1, h2, m2); // 0-8 n
//		return;
//	}
//	else {
//		if (comtime(h1, m1, 8, 0) != -1) {
//			Mden[2] += diff(h1, m1, 8, 0);// 0-8 n
//			hs = 8; ms = 0;
//		}
//
//		// test
//		if (comtime(h2, m2, 18, 0) != -1) {
//			Mden[0] += diff(hs, ms, h2, m2); // 8-18 d
//			return;
//		}else{
//			if (comtime(hs, ms, 18, 0) != -1) {
//				Mden[0] += diff(hs, ms, 18, 0); // 8-18 d
//				hs = 18; ms = 0;
//			}
//
//			//test
//			if (comtime(h2, m2, 22, 0) != -1) { //time1 <= time2
//				Mden[1] += diff(hs, ms, h2, m2); // 18-22 e
//				return;
//			}
//			else {
//				if (comtime(hs, ms, 22, 0) != -1) {
//					Mden[1] += diff(hs, ms, 22, 0); // 8-18 e
//					hs = 22; ms = 0;
//				}
//
//				Mden[2] += diff(hs, ms, h2, m2); // 22-24 n
//				return;
//			}
//		}
//	}
//}
//int main() {
//	int h1, m1, h2, m2;
//
//	while (getline(cin,s)) {
//		// input
//		if (s == "#")break;
//
//		stringstream ss(s);
//
//		getline(ss, s, ' ');
//		userate = s[0] - 65;
//		
//		getline(ss, phonenumber, ' ');
//
//		getline(ss, s, ' ');
//		h1 = (s[0] - 48) * 10 + s[1] - 48;
//
//		getline(ss, s, ' ');
//		m1 = (s[0] - 48) * 10 + s[1] - 48;
//
//		getline(ss, s, ' ');
//		h2 = (s[0] - 48) * 10 + s[1] - 48;
//
//		getline(ss, s, ' ');
//		m2 = (s[0] - 48) * 10 + s[1] - 48;
//
//		//
//		Mden[0] = 0; Mden[1] = 0; Mden[2] = 0;
//		if (comtime(h1,m1,h2,m2) !=1){
//			// cross day
//			addtime(h1, m1, 24, 00);
//			addtime(0, 0, h2, m2);
//		}
//		else 
//			addtime(h1, m1, h2, m2);
//
//		double Total = 0;
//		for (int i = 0; i <= 2; i++)Total += Mden[i] * charge[userate][i];
//
//
//		printf("%10s", phonenumber.c_str());
//		printf("%6d", Mden[0]);
//		printf("%6d", Mden[1]);
//		printf("%6d", Mden[2]);
//		printf("%3c", char(userate + 65));
//		printf("%8.2lf\n", Total);
//		
//	}
//	//system("pause");
//	return 0;
//}