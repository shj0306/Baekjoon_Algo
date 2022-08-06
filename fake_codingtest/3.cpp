//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N, M, num, arr[101];
//
//int main() {
//    fast_io;
//    cin >> N >> M;
//
//    for (int i = 1; i <= N; i++) {
//        for (int j = 1; j <= M; j++) {
//            cin >> num;
//            arr[i] += num;
//        }
//    }
//
//    for (int i = 0; i < 2; i++) {
//        int r1, r2;
//        cin >> r1 >> r2;
//        for (int j = r1; j <= r2; j++) {
//            if (arr[j]) arr[j]--;
//        }
//    }
//
//    int ans = 0;
//    for (int i = 1; i <= N; i++) {
//        ans += arr[i];
//    }
//
//    cout << ans;
//}
