//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <queue>
//#include <cstring>
//
//using namespace std;
//typedef long long ll;
//
//
//// core dataset
//vector<pair<ll,ll>> con[100001];
//priority_queue <pair<ll, ll>> pq;
//bool visited[100001];
//
//// input data
//int TastNum;
//int nn, mm;
//bool ismilkman[100001];
//ll mstsum;
//
//int main() {
//	cin >> TastNum;
//	while (TastNum--) {
//		// init
//		memset(con, 0, sizeof(con));
//		memset(visited, 0, sizeof(visited));
//		mstsum = 0;
//
//		// input
//		cin >> nn >> mm;
//		for (int i = 1; i <= nn; i++)
//			cin >> ismilkman[i];
//		
//		ll x, y, z;
//		for (int i = 1; i <= mm; i++) {
//			cin >> x >> y >> z;
//			con[x].push_back(make_pair(z, y));
//			con[y].push_back(make_pair(z, x));
//		}
//
//		// push milkman into pq
//		for (int i = 1; i <= nn; i++) 
//			if (ismilkman[i]) {
//				visited[i] = 1;
//				for (int j = 0; j < con[i].size(); j++) 
//					pq.push(make_pair(-con[i][j].first, con[i][j].second));
//			}
//		
//		//prim's algorithm
//		while (pq.empty() == 0) {
//			pair<ll, ll> t = pq.top();
//			pq.pop();
//
//			if (visited[t.second] == 0) {
//				visited[t.second] = 1;
//				mstsum += -t.first;
//
//				for (int i = 0; i < con[t.second].size(); i++) 
//					pq.push(make_pair(-con[t.second][i].first, con[t.second][i].second));
//			}
//		}
//
//		// check allvisited
//		bool allvisited = 1;
//		for(int i=1; i<=nn;i++)
//			if (visited[i] == 0) {
//				allvisited = 0;
//				break;
//			}
//
//		// output
//		if (allvisited) cout << mstsum << endl;
//		else cout << "impossible\n";
//	}
//
//	return 0;
//}