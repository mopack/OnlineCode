//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <stack>
//
//using namespace std;
//
//vector<vector<int>> m = { {0,0,0,0,0},
//						  {0,2,4,1,3},
//						  {0,3,1,4,2},
//						  {0,2,3,1,4},
//						  {0,4,1,3,2} };
//vector<vector<int>> w = { {0,0,0,0,0},
//						  {0,2,1,4,3},
//						  {0,4,3,1,2},
//						  {0,1,4,3,2},
//						  {0,2,1,4,3} };
//
//vector<int> mAns, wAns;
//stack<int> wait;
//vector<vector<int>> wRank;
//vector<int> mNext;
//
//
//int main() {
//	// input m, w
//
//	// init
//	mAns = vector<int>(m.size(), -1);  //ans
//	wAns = vector<int>(w.size(), -1);
//
//	wRank = vector<vector<int>>(w.size(), vector<int>());
//	for (int i = 0; i < w.size(); i++) {
//		wRank.push_back(vector<int>());
//		for (int j = 0; j < m.size(); j++)wRank[i].push_back(0);
//	}
//
//	for (int j = 1; j <= w.size() - 1; j++) {
//		for (int i = 1; i <= m.size() -1; i++) wRank[j][w[j][i]] = i;
//	}
//
//	mNext = vector<int>(m.size(), 1);
//
//	wait = stack<int>();
//	for (int i = m.size() - 1; i >= 1; i--)wait.push(i);
//
//	// go
//	while (wait.empty() == 0) {
//		int boy = wait.top();
//		int girl = m[boy][(mNext[boy])++];
//		if (wAns[girl] == -1) {
//			wAns[girl] = boy; mAns[boy] = girl;
//			wait.pop();
//		}
//		else if( wRank[girl][boy] < wRank[girl][wAns[girl]]) {
//			wait.pop(); wait.push(wAns[girl]);
//			wAns[girl] = boy; mAns[boy] = girl;
//		}
//	}
//
//	// output
//	for (int i = 1; i <= mAns.size() - 1; i++) printf("(%d, %d)\n", i, mAns[i]);
//
//	system("pause");
//	return 0;
//}