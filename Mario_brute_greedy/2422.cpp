//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//
//int N, M;
//bool comb[201][201];
//
//int main() {
//    fast_io;
//    cin >> N >> M;
//    int res = 0;
//
//    for (int i = 0; i < M; i++) {
//        int ice1, ice2;
//        cin >> ice1 >> ice2;
//        comb[ice1][ice2] = true;
//        comb[ice2][ice1] = true;
//    }
//
//    for (int i = 1; i <= N; i++) {
//        for (int j = i+1; j <= N; j++) {
//            if (comb[i][j]) continue;
//            for (int k = j+1; k <= N; k++) {
//                if (comb[i][k] || comb[j][k]) continue;
//                res++;
//            }
//        }
//    }
//    cout << res;
//}