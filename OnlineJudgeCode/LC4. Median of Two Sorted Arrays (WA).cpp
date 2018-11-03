//
//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//class Solution {
//public:
//	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
//		vector<int> x, y;
//		if (nums1.size() <= nums2.size()) {
//			x = nums1;
//			y = nums2; 
//		}
//		else {
//			x = nums2;
//			y = nums1;
//		}
//		x.insert(x.begin(), 0);
//		y.insert(y.begin(), 0);
//
//		bool isOdd = (nums1.size() + nums2.size()) % 2;
//		int total = (nums1.size() + nums2.size());
//		int mx, nx, ny, start = ((x.size() == 1) ? 0 : 1), end = x.size() - 1;
//
//#define Emin(x1,y1) (((x.size() == 1 || x1 > x.size() - 1) && (y.size() == 1 || y1 > y.size() - 1)) ? 0 : ((x.size() == 1 || x1 > x.size() - 1) ? y[y1] : ((y.size() == 1 || y1 > y.size() - 1) ? x[x1] : min(x[x1], y[y1])))) 
//#define Emax(x1,y1) (((x.size() == 1 || x1 > x.size() - 1) && (y.size() == 1 || y1 > y.size() - 1)) ? 0 : ((x.size() == 1 || x1 > x.size() - 1) ? y[y1] : ((y.size() == 1 || y1 > y.size() - 1) ? x[x1] : max(x[x1], y[y1])))) 
//		if (total == 0)return 0;
//
//		while (1) {
//			// get nx
//			if ((x.size()==1)) {
//				nx = 0;
//			}else if(start > end){
//				nx = x.size() - 1;
//			}
//			else if ((end - start + 1) % 2) {
//				nx = (end - start + 1 - 1) / 2 + 1 + (start - 1); //the odd one give to the front
//			}
//			else {
//				nx = (end - start + 1) / 2 + (start - 1);
//			}
//
//			// get ny
//			if (isOdd) {
//				if (y.size() == 1) { // no elements in y
//					ny = 0;
//				}
//				else if((x.size() -1)% 2){
//					ny = (total - 1) / 2 - ((nx%2)?(nx-1):nx);
//					//nx   x.size()-nx
//					//ny   y.size()-ny
//					//nx+ny = x.size()-nx + y.size()-ny
//				}
//				else{
//					ny = (total - 1) / 2 - nx + 1;
//				}
//			}
//			else {
//				if (y.size() == 1) { // no elements in y
//					ny = 0;
//				}
//				else {
//					ny = total / 2 - nx;
//				}
//			}
//
//			// binery-search
//			if ( ny+1 <= (y.size()-1) && x[nx] > y[ny+1]) {
//				end = nx - 1;
//			}
//			else if (nx + 1 <= (x.size()-1) && y[ny] > x[nx + 1]) {
//				start = nx + 1;
//			}
//			else {
//				if (isOdd) {
//					if ((nx + ny) > (total - nx - ny)) {
//						return Emax(nx, ny);
//
//					}else{
//						return Emin(nx+1, ny+1);
//
//					}
//				}
//				else {
//					return  (Emax(nx, ny) + Emin(nx + 1, ny + 1)) / 2.0;
//				}
//			}
//		}
//	}
//}ans2;
//
//
//int main4() {
//	vector<int> a = {100001}, b = {100000};
//
//	cout << ans2.findMedianSortedArrays(a,b) << endl;
//
//	system("pause");
//	return 0;
//}	