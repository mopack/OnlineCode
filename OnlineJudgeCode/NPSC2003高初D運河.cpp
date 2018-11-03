//#include <iostream>
//#include <cstdlib>
//
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//#define min(a,b) (((a) < (b)) ? (a) : (b))
//
//using namespace std;
//
//int na, nb, ansn;
//
//struct point {
//	double x, y;
//}a[51],b[51];
//
//struct Line {
//	double x1, y1, x2, y2; // (x1,y1) in a; (x2, y2) in b
//	Line(point u, point v) {
//		x1 = u.x; x2 = v.x; y1 = u.y; y2 = v.y;
//	}
//	Line() {
//
//	}
//}ans[2];
//
//
//double m(Line t){
//	if (t.x1 == t.x2) {
//		return DBL_MAX;
//	}
//	else {
//		return (t.y2 - t.y1) / (t.x2 - t.x1);
//	}
//}
//int compm(Line u, point v) { // either side
//	if (u.y1 == u.y2) {
//		if (v.y > u.y1) {
//			return 1;
//		}
//		else if (v.y < u.y1) {
//			return -1;
//		}else{
//			return 0;
//		}
//	}
//	else {
//		// parameterlize the Line u
//		double xdy = (u.x1 - u.x2) / (u.y1 - u.y2);
//		double xonu = (v.y - u.y2) * xdy + u.x2;
//
//		if (xonu > v.x) {
//			return 1;
//		}else if(xonu < v.x){
//			return -1;
//		}
//		else {
//			return 0;
//		}
//	}
//}
//bool sameLine(Line u, Line v) {
//	return (m(u) == m(v));
//}
//
//double distV(point x, point y) {
//	double t, re;
//	t = (x.x - y.x);
//	re = t*t;
//	t = x.y - y.y;
//	re += t*t;
//	return sqrt(re);
//}
//
//double dist(Line ans0, Line ans1) {
//	// cout dist
//
//	// for two parallel lins:
//	//    ax + by + c1 = 0
//	//    ax + by + c2 = 0
//	// the distance:
//	//    d = | c1 - c2 | / sqrt(a ^ 2 + b ^ 2)
//
//	// dx y + -dy x + c = 0
//	// ans0's 1 & ans1's 1 (in a)
//	double dx1 = (ans0.x1 - ans1.x1);
//	double dy1 = (ans0.y1 - ans1.y1);
//	// ans0's 2 & ans1's 2 (in b)
//	double dx2 = (ans0.x2 - ans1.x2);
//	double dy2 = (ans0.y2 - ans1.y2);
//
//	double dist1, dist2, c, c2;
//
//	// try line a parallel close to b
//	c = -dx1*ans0.y1 + dy1*ans0.x1;
//
//	//   for ans0.2
//	c2 = -dx1*ans0.y2 + dy1*ans0.x2;
//	dist1 = abs(c2 - c) / sqrt(dx1*dx1 + dy1*dy1);
//
//	//   for ans1.2
//	c2 = -dx1*ans1.y2 + dy1*ans1.x2;
//	dist1 = min(dist1, abs(c2 - c) / sqrt(dx1*dx1 + dy1*dy1));
//
//
//	//try line b parallel close to a
//	c = -dx2*ans0.y2 + dy2*ans0.x2;
//
//	//   for ans0.1
//	c2 = -dx2*ans0.y1 + dy2*ans0.x1;
//	dist2 = abs(c2 - c) / sqrt(dx2*dx2 + dy2*dy2);
//
//	//   for ans1.1
//	c2 = -dx2*ans1.y1 + dy2*ans1.x1;
//	dist2 = min(dist2, abs(c2 - c) / sqrt(dx2*dx2 + dy2*dy2));
//
//	return max(dist1, dist2);
//}
//int main() {
//	freopen("pd.in", "rt",stdin); freopen("pd.out","wt",stdout);
//	// FILE *fi = fopen("pd.in","rt"), *fo = fopen("pd.out", "wt);
//	// fstream fi, fo;
//
//	int count = 0, ct = -1;
//	while (cin >> na >> nb) {
//		count++;
//		if (count == ct) {
//			cout << "**" << endl;
//		}
//		if (na == 0 && nb == 0)break;
//
//		ansn = 0;
//		bool sameline = 0;
//
//		// input 
//		for (int i = 1; i <= na; i++) {
//			cin >> a[i].x >> a[i].y;
//			if (count == ct) {
//				cout << a[i].x << ' ' << a[i].y << endl;
//			}
//		}
//		for (int i = 1; i <= nb; i++) {
//			cin >> b[i].x >> b[i].y;
//			if (count == ct) {
//				cout << b[i].x << ' ' << b[i].y << endl;
//			}
//		}
//		if (count == ct) {
//			cout << "**" << endl;
//		}
//		
//		if (na == 1 && nb == 1) {
//			printf("%.3lf\n", distV(a[1], b[1]));
//			continue;
//		}
//		else if (na == 1) {
//			double d1 = distV(a[1], b[1]); // smallest
//			double d2 = distV(a[1], b[2]); // second small
//			int i1 = 1, i2 = 2;
//
//			if (d1 > d2) {
//				swap(d1, d2);
//				swap(i1, i2);
//			}
//
//			for (int i = 3; i <= nb; i++) {
//				double d3 = distV(a[1], b[i]);
//				if (d3 < d1) {
//					i1 = i; d1 = d3;
//				}else if(d3 < d2){
//					i2 = i; d2 = d3;
//				}
//			}
//
//
//			// for two parallel lins:
//			//    ax + by + c1 = 0
//			//    ax + by + c2 = 0
//			// the distance:
//			//    d = | c1 - c2 | / sqrt(a ^ 2 + b ^ 2)
//			
//			// dx y + -dy x + c = 0
//			double dx = b[i1].x - b[i2].x;
//			double dy = b[i1].y - b[i2].y;
//			double c = -dx * b[i1].y + dy*b[i1].x;
//			double c2 = -dx * a[1].y + dy*a[1].x;
//
//			double dis1 = abs(c - c2) / sqrt(dx*dx + dy*dy);
//			double dis2 = distV(b[i1], b[i2]);
//			double dis = sqrt(dis1*dis1 + dis2*dis2);
//			printf("%.3lf\n", dis);
//			continue;
//		}
//		else if (nb == 1) {
//			double d1 = distV(a[1], b[1]); // smallest
//			double d2 = distV(a[2], b[1]); // second small
//			int i1 = 1, i2 = 2;
//
//			if (d1 > d2) {
//				swap(d1, d2);
//				swap(i1, i2);
//			}
//
//			for (int i = 3; i <= na; i++) {
//				double d3 = distV(a[i], b[1]);
//				if (d3 < d1) {
//					i1 = i; d1 = d3;
//				}
//				else if (d3 < d2) {
//					i2 = i; d2 = d3;
//				}
//			}
//
//
//			// for two parallel lins:
//			//    ax + by + c1 = 0
//			//    ax + by + c2 = 0
//			// the distance:
//			//    d = | c1 - c2 | / sqrt(a ^ 2 + b ^ 2)
//
//			// dx y + -dy x + c = 0
//			double dx = a[i1].x - a[i2].x;
//			double dy = a[i1].y - a[i2].y;
//			double c = -dx * a[i1].y + dy*a[i1].x;
//			double c2 = -dx * b[1].y + dy*b[1].x;
//
//			double dis1 = abs(c - c2) / sqrt(dx*dx + dy*dy);
//			double dis2 = distV(a[i1], a[i2]);
//			double dis = sqrt(dis1*dis1 + dis2*dis2);
//			printf("%.3lf\n", dis);
//			continue;
//		}
//
//		// chose a town in a & a town in b, and check if other cities are at either side
//		for (int ia = 1; ia <= na; ia++) {
//			for (int ib = 1; ib <= nb; ib++) {
//				int aside = -10, bside = -10;
//				Line ori(a[ia], b[ib]);
//
//
//				for (int ka = 1; ka <= na; ka++) {
//					if (ka != ia) {
//						int c = compm(ori, a[ka]);
//						//printf("a%d b%d as line, test(a%d)=%d\n", ia, ib, ka, c);
//						if (aside == -10 || aside == 0) {
//							aside = c;
//						}
//						else if (aside + c == 0) {
//							// the Line ori is not the river bank Line
//							//cout << "go to nextline\n";
//							goto nextLine;
//						}
//					}
//				}
//
//
//				for (int kb = 1; kb <= nb; kb++) {
//					if (kb != ib) {
//						int c = compm(ori, b[kb]);
//						//printf("a%d b%d as line, test(b%d)=%d\n", ia, ib, kb , c);
//
//						if (bside == -10 || bside ==0 ) {
//							bside = c;
//						}
//						else if (bside + c == 0) {
//							// the Line ori is not the river bank Line
//							//cout << "go to nextline\n";
//							goto nextLine;
//						}
//					}
//				}
//
//				// side by side
//				if (aside == 0 && bside ==0){
//					sameline = 1;
//					goto ending;
//				}
//				else if ((aside + bside == 0) || aside == 0 || bside == 0) {
//					
//					if (ansn == 0) {
//						ans[ansn++] = ori;
//						//printf("a%d b%d as ans[0]\n",ia,ib);
//					}
//					else if (ansn == 1) {
//						ans[ansn++] = ori;
//						//printf("a%d b%d as ans[1]\n", ia, ib);
//					}else{
//						double orid = dist(ans[0], ans[1]);
//						double with0 = dist(ori, ans[0]);
//						double with1 = dist(ori, ans[1]);
//
//						if (with0 > with1) {
//							if (with0 > orid) {
//								ans[1] = ori;
//								//printf("a%d b%d as ans[1]\n", ia, ib);
//							}
//						}else{
//							if (with1 > orid) {
//								ans[0] = ori;
//								//printf("a%d b%d as ans[0]\n", ia, ib);
//							}
//
//						}
//					}
//				}
//
//				//cout << endl;
//
//			nextLine:;
//			}
//		}
//
//	ending:;
//		if (sameline) {
//			int maxai = 1, minai = 1, maxbi = 1, minbi = 1;
//			double maxa = a[1].y, maxb = b[1].y, mina = a[1].y, minb = b[1].y;
//
//			if (a[1].y == b[1].y) {
//				maxa = a[1].x, maxb = b[1].x, mina = a[1].x, minb = b[1].x;
//
//				for (int i = 2; i <= na; i++) {
//					if (a[i].x > maxa) {
//						maxa = a[i].x;
//						maxai = i;
//					}
//					if (a[i].x < mina) {
//						mina = a[i].x;
//						minai = i;
//					}
//				}
//
//				for (int i = 2; i <= nb; i++) {
//					if (b[i].x > maxb) {
//						maxb = b[i].x;
//						maxbi = i;
//					}
//					if (a[i].x < minb) {
//						minb = a[i].x;
//						minbi = i;
//					}
//				}
//			}else{
//				maxa = a[1].y, maxb = b[1].y, mina = a[1].y, minb = b[1].y;
//
//				for (int i = 2; i <= na; i++) {
//					if (a[i].y > maxa) {
//						maxa = a[i].y;
//						maxai = i;
//					}
//					if (a[i].y < mina) {
//						mina = a[i].y;
//						minai = i;
//					}
//				}
//
//				for (int i = 2; i <= nb; i++) {
//					if (b[i].y > maxb) {
//						maxb = b[i].y;
//						maxbi = i;
//					}
//					if (a[i].y < minb) {
//						minb = a[i].y;
//						minbi = i;
//					}
//				}
//			}
//
//			if (mina > maxb) {
//				printf("%.3lf\n", distV(a[minai], b[maxbi]));
//			}
//			else if (minb > maxa) {
//				printf("%.3lf\n", distV(a[maxai], b[minbi]));
//			}
//			else {
//				cout << "IMPOSSIBLE\n";
//			}
//
//		}
//		else if (ansn == 2) {
//			printf("%.3lf\n", dist(ans[0], ans[1]));
//		}else {
//			cout << "IMPOSSIBLE\n";
//		}
//	}
//	return 0;
//}