//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <unordered_map>
//#include <queue>
//#include <functional>
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//using namespace std;
////Sol1: 76L/16ms/PR100
////static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }(); 
////struct Account {
////	pair<int,int> post[10]; // {Time, TweetId}
////	int pi = 0;//0~9
////	vector<int>foll; // Followers
////};
////class Twitter {
////public:
////	unordered_map<int, int>id2a; // userId to Index of ACID
////	vector<Account>Ac;
////	int Time = 0; // Time>0 1,2,...
////
////	int CreateAccount(int userId) {
////		int AcId = Ac.size();
////		id2a.insert({ userId, AcId });
////		Account a;
////		a.foll = { AcId };
////		Ac.push_back(a);
////		return AcId;
////	}
////	void postTweet(int userId, int tweetId) {
////		Time++;
////		auto it = id2a.find(userId);
////		int i = (it == id2a.end()) ? (CreateAccount(userId)) : it->second;
////		
////		Ac[i].post[Ac[i].pi++] = { Time, tweetId };
////		if (Ac[i].pi == 10) Ac[i].pi = 0;
////	}
////	vector<int> getNewsFeed(int userId) {
////		auto it = id2a.find(userId);
////		int i = (it == id2a.end()) ? (CreateAccount(userId)) : it->second;
////
////		vector<pair<int, int>>Ans;
////		for (auto &f : Ac[i].foll) {
////			for (auto &p : Ac[f].post) {
////				if (p.first) Ans.push_back(p);
////			}
////		}
////		sort(Ans.begin(), Ans.end(), [](pair<int, int>a, pair<int, int>b) {return a.first > b.first; });
////		if (Ans.size() > 10) Ans.resize(10);
////
////		vector<int>Ans2;
////		for (auto &p : Ans) Ans2.push_back(p.second);
////		return Ans2;
////	}
////	/** Follower follows a followee. If the operation is invalid, it should be a no-op. */
////	void follow(int followerId, int followeeId) {
////		auto it = id2a.find(followerId);
////		int i = (it == id2a.end()) ? (CreateAccount(followerId)) : it->second;
////
////		it = id2a.find(followeeId);
////		int j = (it == id2a.end()) ? (CreateAccount(followeeId)) : it->second;
////
////		for (auto &x : Ac[i].foll) {
////			if (x == j) return;
////		}
////		Ac[i].foll.push_back(j);
////	}
////	/** Follower unfollows a followee. If the operation is invalid, it should be a no-op. */
////	void unfollow(int followerId, int followeeId) {
////		auto i1 = id2a.find(followerId);
////		auto i2 = id2a.find(followeeId);
////		if (i1 == id2a.end() || i2 == id2a.end()) return;
////		int i = i1->second, j = i2->second;
////		if (i == j) return;
////
////		for (auto &x : Ac[i].foll) {
////			if (x == j) {
////				x = Ac[i].foll.back();
////				Ac[i].foll.pop_back();
////				return;
////			}
////		}
////	}
////};
//
////Sol2: 68L/16ms/PR100
////static int fast = []() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
////struct Account {
////	pair<int, int> post[10]; // {Time, TweetId}
////	int pi = 0;//0~9
////	vector<int>foll; // Followers
////};
////class Twitter {
////public:
////	vector<Account>Ac;
////	unordered_map<int, int>id2a; // userId to Index of ACID
////	int Time = 0; // Time>0 1,2,...
////	
////	int Acid(int userId) { 
////		auto it = id2a.find(userId);
////		if (it != id2a.end()) return it->second;
////
////		// CreateAccount
////		int AcId = Ac.size();
////		id2a.insert({ userId, AcId });
////		Account a;
////		a.foll = { AcId };
////		Ac.push_back(a);
////		return AcId;
////	}
////	void postTweet(int userId, int tweetId) {
////		Time++;
////		int i = Acid(userId);
////		Ac[i].post[Ac[i].pi++] = { Time, tweetId };
////		if (Ac[i].pi == 10) Ac[i].pi = 0;
////	}
////	vector<int> getNewsFeed(int userId) {
////		int i = Acid(userId);
////
////		vector<pair<int, int>>Ans;
////		for (auto &f : Ac[i].foll) {
////			for (auto &p : Ac[f].post) {
////				if (p.first) Ans.push_back(p);
////			}
////		}
////		sort(Ans.begin(), Ans.end(), [](pair<int, int>a, pair<int, int>b) {return a.first > b.first; });
////		if (Ans.size() > 10) Ans.resize(10);
////
////		vector<int>Ans2;
////		for (auto &p : Ans) Ans2.push_back(p.second);
////		return Ans2;
////	}
////	void follow(int followerId, int followeeId) {
////		int i = Acid(followerId), j = Acid(followeeId);
////
////		for (auto &x : Ac[i].foll) 
////			if (x == j) return;
////		Ac[i].foll.push_back(j);
////	}
////	void unfollow(int followerId, int followeeId) {
////		auto i1 = id2a.find(followerId); auto i2 = id2a.find(followeeId);
////		if (i1 == id2a.end() || i2 == id2a.end()) return;
////		int i = i1->second, j = i2->second;
////		if (i == j) return;
////
////		for (auto &x : Ac[i].foll) {
////			if (x == j) {
////				x = Ac[i].foll.back();
////				Ac[i].foll.pop_back();
////				return;
////			}
////		}
////	}
////};
//
//int main() {
//    //freopen("in.txt", "rt", stdin); freopen("outwjio.txt", "wt", stdout);
//	//Twitter az;
//	//az.postTweet(1, 5);
//	//az.getNewsFeed(1);
//	//az.follow(1, 2);
//	//az.postTweet(2, 6);
//	//az.getNewsFeed(1);
//	//az.unfollow(1, 2);
//	//cout<<"\nAns=" << az.getNewsFeed(1)[0];
//	system("pause");
//	return 0;
//} 