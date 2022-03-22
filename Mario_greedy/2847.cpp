//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//vector<int> score;
//int main() {
//    fast_io;
//    int N, ans = 0; cin >> N;
//    score = vector<int>(N);
//    for (int i = 0; i < N; i++) cin >> score[i];
//    int now = score[N-1];
//    for (int i = N-2; i >= 0; i--) {
//        if (score[i] >= now) {
//            ans += score[i] - now + 1;
//            score[i] = now - 1;
//        }
//        now = score[i];
//    }
//    cout << ans << '\n';
//}