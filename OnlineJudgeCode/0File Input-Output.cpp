// 本身ADHD，想法對但寫錯字(例如 某行 A[i]=i，下一行應寫B[i]=i，卻誤寫A[i]=i)，檢查時應留意

//#include <bits/stdc++.h>

// For Debug
// First Thing, Think about Error by Code(Mistakes). Then about Error by Logic

//static int flash = []() {ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL); return 0; }();
//1. ios_base::sync_with_stdio(false); //關閉stdin/out同步。注意要是關掉了，scanf/printf就不能用
//2. endl改'\n' // endl == '\n'<<flush
//3. cin.tie(0);  //解除cin和cout之間的綁定。當綁定交錯使用時，會強制執行flush

//#include <iostream>
//#include <cstdlib>
//#include <fstream>
//
//using namespace std;
//
//int main() {
//	//FILE *fin = fopen("in.txt", "rt"); 
//	//FILE *fout= fopen("out.txt","wt");
//	//int a;
//	//fscanf(fin, "%d", &a);
//	//fprintf(fout, "%d", a);
//
//	//fclose(fin);
//	//fclose(fout);
//
//	fstream fin("in.txt", fstream::in);
//	fstream fout("out.txt", fstream::out);
//	int a;
//	fin >> a;
//	fout << a << endl;
//	
//	freopen
// #pragma warning( disable : 4996 )
//
//	//system("pause");
//	return 0;
//}