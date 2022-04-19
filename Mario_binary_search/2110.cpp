//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N, M;
//// 가장 가까운 두 공유기 사이 최대 거리가 mid일 때
//// 가능한 공유기 개수에 따라 이분 탐색 진행
//int main() {
//    fast_io;
//    cin >> N >> M;
//    vector<int> home(N);
//
//    for (int i = 0; i < N; i++) {
//        cin >> home[i];
//    }
//    sort(all(home));
//
//    int l = 1, r = home[N - 1] - home[0], mid;
//    int ans = 0;
//    while (l <= r) {
//        //인접한 두 공유기 사이 거리
//        mid = (l + r) / 2;
//        int c = 1, cur = home[0];
//        for (int i = 1; i < N; i++) {
//            if (home[i] - cur >= mid) {
//                c++;
//                cur = home[i];
//            }
//        }
//        if (c >= M) {
//            ans = max(ans, mid);
//            l = mid + 1;
//        }
//        else r = mid - 1;
//    }
//    cout << ans;
//}