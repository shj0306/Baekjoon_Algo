//#include <bits/stdc++.h>
//
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int, int>;
//using ll = long long;
//int N, M;
//int checked[9];
//
//void NandM2(int k) {
//    if (k == M + 1) {
//        for (int i = 1; i <= M; i++) {
//            if (checked[i]) cout << checked[i] << ' ';
//        }
//        cout << '\n';
//        return;
//    }
//    for (int i = checked[k - 1] + 1; i <= N; i++) {
//        checked[k] = i;
//        NandM2(k + 1);
//        checked[k] = 0;
//    }
//}
//
//int main() {
//    fast_io;
//    cin >> N >> M;
//    NandM2(1);
//}