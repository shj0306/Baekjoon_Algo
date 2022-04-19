//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//#define INF 1e12
//typedef long long LL;
//using namespace std;
//
//int main() {
//    int T; cin >> T;
//    for (int t = 1; t <= T; t++) {
//        int N, Q; cin >> N >> Q;
//        vector<int> E(N), S(N);
//        vector<int> U(Q), V(Q);
//        vector<vector<LL>> D(N, vector<LL>(N));
//        for (int i = 0; i < N; i++) cin >> E[i] >> S[i];
//
//        for (int i = 0; i < N; i++) {
//            for (int j = 0; j < N; j++) {
//                cin >> D[i][j];
//                if (D[i][j] == -1) D[i][j] = INF;
//            }
//        }
//
//        for (int i = 0; i < Q; i++) cin >> U[i] >> V[i];
//
//        //모든 도시간의 최단거리 구하기
//        for (int k = 0; k < N; k++) {
//            for (int i = 0; i < N; i++) {
//                for (int j = 0; j < N; j++) {
//                    D[i][j] = min(D[i][j], D[i][k] + D[k][j]);
//                }
//            }
//        }
//
//        vector<vector<double>> X(N, vector<double>(N, INF));
//
//        //i번 째 말로 i->j의 최단 시간 구하기
//        for (int i = 0; i < N; i++) {
//            for (int j = 0; j < N; j++) {
//                if (E[i] < D[i][j]) continue;
//                else X[i][j] = (double)D[i][j] / S[i];
//            }
//        }
//        for (int k = 0; k < N; k++) {
//            for (int i = 0; i < N; i++) {
//                for (int j = 0; j < N; j++) {
//                    X[i][j] = min(X[i][j], X[i][k] + X[k][j]);
//                }
//            }
//        }
//
//        cout << "Case #" << t << ": ";
//        for (int i = 0; i < Q; i++)
//            printf("%.6lf ", X[U[i]-1][V[i]-1]);
//        cout << '\n';
//    }
//}