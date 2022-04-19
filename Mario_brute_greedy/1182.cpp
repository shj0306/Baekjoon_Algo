//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N, S, arr[20], cnt;
//
//void solve(int idx, int res) {
//
//    if (idx == N) return;
//    if (res + arr[idx] == S) cnt++;
//
//    solve(idx+1, res);
//    solve(idx+1, res + arr[idx]);
//}
//
//int main() {
//    fast_io;
//    cin >> N >> S;
//    for (int i = 0; i < N; i++) cin >> arr[i];
//    sort(begin(arr),begin(arr)+N);
//    solve(0, 0);
//    cout << cnt;
//}