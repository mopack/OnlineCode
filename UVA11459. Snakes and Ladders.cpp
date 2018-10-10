//#include <algorithm>
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//main() {
//	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	int Case;
//	cin >> Case;
//	while (Case--) {
//		int PN, LN, DN, x, y;
//		cin >> PN >> LN >> DN;
//		vector<int>pos(PN + 1, 1);
//		vector<int>send(101, 0);
//		while (LN--) {
//			cin >> x >> y;
//			send[x] = y;
//		}
//
//		bool finish = 0;
//		for (int p = 1; DN--; p = p%PN + 1) {
//			cin >> x;
//			if (finish) continue;
//
//			pos[p] = min(pos[p] + x, 100);
//			if (send[pos[p]]) pos[p] = send[pos[p]];
//			if (pos[p] == 100) finish = 1;
//		}
//
//		for (int i = 1; i <= PN; i++)
//			cout << "Position of player "<<i<<" is "<<pos[i]<<".\n";
//	}
//}