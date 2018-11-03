//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <stack>
//
//using namespace std;
//struct Point {
//	int x, y, dirction;
//	Point() {}
//	Point(int x0, int y0) {
//		x = x0; y = y0, dirction = 0;
//	}
//};
//
//
//int n;
//vector<vector<int>> board;
//stack<Point> s;
//vector<Point> walk = { Point(2,1), Point(1,2), Point(-1,2), Point(-2,1), Point(-2,-1), Point(-1,-2), Point(1,-2), Point(2,-1) };
//
//void init() {
//	board.clear();
//	for (int i = 0; i <= n; i++) board.push_back(vector<int>(n + 1, -1));
//}
//void display() {
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) printf("%2d ", board[i][j]);
//		cout << endl;
//	}
//	cout << endl;
//}
//
//inline bool onBoardandEmpty(int x, int y) {
//	if (x<1 || x>n || y<1 || y>n) return 0;
//	return (board[x][y] == -1);
//}
//int k(int x, int y) {
//	bool found;
//	int x1, y1;
//
//	s.push(Point(x, y)); board[s.top().x][s.top().y] = s.size() - 1;
//
//	while (s.size() < n*n) {
//		found = 0;
//		while (s.top().dirction < 8) {
//			x1 = s.top().x + walk[s.top().dirction].x;
//			y1 = s.top().y + walk[s.top().dirction].y;
//			if (onBoardandEmpty(x1, y1)) {
//				s.push(Point(x1, y1)); board[s.top().x][s.top().y] = s.size() - 1;
//				found = 1; break;
//			}
//			else
//				s.top().dirction++;
//		}
//
//		if (found == 0) {
//			if (s.size()<2) return 0; // not found
//			
//			board[s.top().x][s.top().y] = -1;
//			s.pop();
//			s.top().dirction++;
//		}
//	}
//	return 1;
//}
//
//int main() {
//	int row, col;
//	while (cin >> n >> row >> col) {
//		init();
//		if (k(row, col) == 0)
//			cout << "No Solution\n";
//		else
//			display();
//	}
//	system("pause");
//	return 0;
//}