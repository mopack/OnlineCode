// Need ReThink
//#include <bits/stdc++.h>
//using namespace std;
//bool gauss(vector<vector<double>>&A, vector<double>&B, int N) {
//	for (int k = 0, i, j, s; k<N; k++) {
//		for (s = k, i = k + 1; i<N; i++)
//			if (fabs(A[i][k])>fabs(A[s][k]))s = i;
//		if (fabs(A[s][k])<1e-8)return 0;
//		if (s != k) {
//			swap(B[s], B[k]);
//			for (i = k; i<N; i++)swap(A[s][i], A[k][i]);
//		}
//		for (j = k + 1; j<N; j++) {
//			double t = -A[j][k] / A[k][k];
//			B[j] += B[k] * t;
//			for (i = k + 1; i<N; ++i)A[j][i] += t*A[k][i];
//		}
//	}
//
//	for (int i = N - 1; i >= 0; i--) {
//		B[i] /= A[i][i];
//		for (int j = 0; j<i; ++j)B[j] -= A[j][i] * B[i];
//	}
//	return 1;
//}
//
//int main() {
//	int W, H, S, N;
//	while (cin >> W >> H >> S) {
//		N = W * H;
//		vector<vector<double>>A(N, vector<double>(N, 0));
//		vector<double>B(N, 1);
//		for (int i = 0; i < N; i++) A[i][i] = 1;
//
//		vector<int>Send(N, -1);
//		for (int i = 0; i < S; i++) {
//			int u, v;
//			cin >> u >> v;
//			Send[u - 1] = v - 1;
//		}
//		for (int i = 0; i < N - 1; i++) {
//			for (int d = 1; d <= 6; d++) {
//				int j = i + d;
//				if (j > N - 1) j = N * 2 - 2 - j;
//				if (Send[j]!=-1) j = Send[j];
//				A[i][j] -= 1.0 / 6;
//			}
//		}
//		gauss(A, B, N);
//		printf("%.10f\n", B[0] - 1);
//	}
//	return 0;
//}