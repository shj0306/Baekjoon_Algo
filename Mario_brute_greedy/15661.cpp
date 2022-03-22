//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//#define f first
//#define s second;
//const int INF = 1e9+7;
//int N, team[21][21];
//bool check[21];
//int team1, team2, res = INF;
//
//void solve(int n, int cnt, int idx) {
//    if (n == cnt) {
//        for (int i = 1; i <= N; i++) {
//            for (int j = 1; j <= N; j++) {
//                if (i == j) continue;
//                if (check[i] && check[j]) {
//                    team1 += team[i][j];
//                }
//            }
//        }
//        for (int i = 1; i <= N; i++) {
//            for (int j = 1; j <= N; j++) {
//                if (i == j) continue;
//                if (!check[i] && !check[j]) {
//                    team2 += team[i][j];
//                }
//            }
//        }
//        res = min(res, abs(team1 - team2));
//        team1 = team2 = 0;
//        return;
//    }
//
//    for (int i = idx; i <= N; i++) {
//        if (!check[i]) {
//            check[i] = true;
//            solve(n, cnt+1, i);
//            check[i] = false;
//        }
//    }
//}
//
//int main() {
//    fast_io;
//    cin >> N;
//
//    for (int i = 1; i <= N; i++) {
//        for (int j = 1; j <= N; j++) {
//            cin >> team[i][j];
//        }
//    }
//
//    for (int nu = 1; nu <= N / 2; nu++) {
//        solve(nu, 0, 1);
//        memset(check, false, sizeof(check));
//    }
//    cout << res;
//}