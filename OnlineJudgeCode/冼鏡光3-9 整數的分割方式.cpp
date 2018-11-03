//#include <iostream>
//#include <cstdlib>
//
//using namespace std;
//
//int part[21], mult[21], pi;
//int sum, Size, Remainder, Count, n;
//
//void display() {
//	cout << endl;
//	for (int i = 1; i <= pi; i++)
//		for (int j = 1; j <= mult[i]; j++)
//			printf("%3d", part[i]);
//}
//
//int main() {
//	while (cin >> n && n) { // n>=2
//		part[1] = n;
//		mult[1] = 1;
//		pi = Count = 1;
//		//display();
//
//		do {
//			sum = (part[pi] == 1) ? (mult[pi--] + 1 ) : 1;
//			Size = part[pi] - 1;
//			if (mult[pi] != 1) mult[pi++]--;
//			part[pi] = Size;
//			mult[pi] = sum / Size + 1;
//
//			if ((Remainder = sum % Size) != 0) {
//				part[++pi] = Remainder;
//				mult[pi] = 1;
//			}
//			Count++;
//			//display();
//		} while (mult[pi] != n);
//
//		cout <<endl << "Count = " << Count << endl;
//
//	}
//	return 0;
//}