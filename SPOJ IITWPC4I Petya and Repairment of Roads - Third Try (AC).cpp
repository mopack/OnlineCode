//#include <bits/stdc++.h>
//#define ll long long
//
//using namespace std;
//
//// core dataset
//vector<pair<ll, ll>> v[100001]; // list-like graph
//priority_queue<pair<ll, ll>> pq;
//bool visited[100001];
//
//// input data
//int nn, mm, tasknumber;
//bool ismilkman[100001];
//
//// counter
//ll mstsum;
//
//int main() {
//	cin >> tasknumber;
//	while (tasknumber--) {
//		// init: clear
//		memset(visited, 0, sizeof(visited));
//		memset(v, 0, sizeof(v));
//		mstsum = 0;
//
//		// input 
//		cin >> nn >> mm;
//
//		for (int i = 1; i <= nn; i++) {
//			cin >> ismilkman[i];
//		}
//
//		ll x, y, z;
//		for (int i = 1; i <= mm; i++) {
//			cin >> x >> y >> z;
//			v[x].push_back(make_pair(z, y));
//			v[y].push_back(make_pair(z, x));
//		}
//
//		// init: push starter into pq
//		for (int i = 1; i <= nn; i++) {
//			if (ismilkman[i]) {
//				visited[i] = 1;
//				for (int j = 0; j < v[i].size(); j++) {
//					pq.push(make_pair(-v[i][j].first, v[i][j].second));
//				}
//			}
//		}
//
//		// pop every pq for prim's algorithm
//		while (pq.empty()==0) {
//			pair<ll,ll> t = pq.top();
//			pq.pop();
//
//			if (visited[t.second]==0) {
//				visited[t.second] = 1;
//				mstsum += -t.first;
//				for (int i = 0; i < v[t.second].size(); i++) {
//					pq.push(make_pair(-v[t.second][i].first, v[t.second][i].second));
//				}
//			}
//		}
//
//		// print result
//		bool allvisited = 1;
//		for (int i = 1; i <= nn; i++) {
//			if (visited[i] == 0) {
//				allvisited = 0;
//				break;
//			}
//		}
//
//		if (allvisited) cout << mstsum << endl;
//		else cout << "impossible\n";
//	}
//	return 0;
//}