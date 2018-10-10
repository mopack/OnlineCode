////IITWPC4I - Petya and Repairment of Roads
////#include<bits/stdc++.h>
//#include <stdlib.h>
//#include <iostream>
//#include <vector>
//#include <queue>
//#include <cstring>
//
//using namespace std;
//#define ll long long
//bool arr[123456]; //is milkman or not
//bool vis[123456];
//vector <pair <ll, ll> > v[123456];
//int main()
//{
//	ll i, j;
//	ll T;
//	scanf("%lld", &T);
//	while (T--)
//	{
//		// input & init
//		priority_queue <pair<ll, ll> > pq;
//		ll N, M;
//		scanf("%lld%lld", &N, &M);
//		for (i = 0; i<123456; i++)
//			v[i].clear();
//		memset(vis, 0, sizeof(vis));
//		memset(arr, 0, sizeof(arr));
//		for (i = 1; i <= N; i++)
//			scanf("%lld", &arr[i]);
//		while (M--)
//		{
//			ll X, Y, Z;
//			scanf("%lld%lld%lld", &X, &Y, &Z);
//			//printf("x=%lld y=%lld z=%lld : ", X, Y, Z);
//			v[X].push_back(make_pair(Z, Y));
//			v[Y].push_back(make_pair(Z, X));
//			//printf("(%lld,%lld) ", v[X][v[X].size() - 1].first, v[X][v[X].size() - 1].second);
//			//printf("(%lld,%lld)\n", v[Y][v[Y].size() - 1].first, v[Y][v[Y].size() - 1].second);
//		}
//
//		//for (int i = 1; i <= 5; i++) {
//		//	cout << "v[" << i << "]:";
//		//	for (int j = 0; j < v[i].size(); j++) {
//		//		printf("(%lld,%lld)", v[i][j].first, v[i][j].second);
//		//	}
//		//	cout << endl;
//		//}
//
//		for (i = 1; i <= N; i++)
//		{
//			if (arr[i])
//			{
//				//cout << "p(" << i << "):";
//				vis[i] = 1;
//				for (j = 0; j<v[i].size(); j++){
//					pq.push(make_pair(-v[i][j].first, v[i][j].second));
//					//printf("(%lld,%lld) ", -v[i][j].first, v[i][j].second);
//				}
//				//cout << endl;
//			}
//		}
//
//		//priority_queue <pair<ll, ll> > pt;
//
//		ll ans = 0;
//		while (!pq.empty())
//		{	
//			//pt = pq;
//			
//			//cout << "p:";
//			//for (int u = 0; u < pq.size(); u++) {
//			//	pair<ll, ll> cc = pt.top();
//			//	pt.pop();
//			//	printf("(%lld,%lld) ", cc.first, cc.second);
//			//}
//			
//			//printf("pq(%lld,%lld)\n", t.first, t.second);
//			//cout << endl;
//
//			pair<ll, ll> t = pq.top();
//			pq.pop();
//
//			if (!vis[t.second])
//			{
//				vis[t.second] = 1;
//				ans += -t.first;
//				for (j = 0; j<v[t.second].size(); j++)
//					pq.push(make_pair(-v[t.second][j].first, v[t.second][j].second));
//			}
//		}
//
//		bool f = 0;
//		for (i = 1; i <= N; i++)
//		{
//			if (!vis[i])
//				f = 1;
//		}
//		if (f == 1)
//			printf("impossible\n");
//		else
//			printf("%lld\n", ans);
//	}
//	return 0;
//}