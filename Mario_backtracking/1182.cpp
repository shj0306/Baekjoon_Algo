//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//#define f first
//#define s second;
//
//vector<int> v;
//int N, S, cnt;
//
//void back_track(int idx, int sum, int cn) {
//    if (idx == N) {
//        if (sum == S && cn) cnt++;
//        return;
//    }
//    back_track(idx+1, sum, cn);
//    back_track(idx+1, sum + v[idx], cn+1);
//}
//
//int main() {
//    fast_io;
//    cin >> N >> S;
//    v = vector<int>(N);
//    for (int i = 0; i < N; i++) cin >> v[i];
//
//    sort(all(v));
//
//    back_track(0, 0, 0);
//    cout << cnt;
//}