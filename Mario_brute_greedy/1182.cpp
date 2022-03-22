//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//
//int N, S;
//vector<int> arr;
//
//int solve(int idx, int sum, int cnt) {
//    if (idx == N) return cnt && sum == S;
//    return solve(idx+1, sum, cnt) + solve(idx+1, sum+arr[idx], cnt + 1);
//}
//
//int main() {
//    fast_io;
//    cin >> N >> S;
//    arr = vector<int>(N);
//    for (int i = 0; i < N; i++) cin >> arr[i];
//    sort(all(arr));
//    cout << solve(0, 0, 0) << '\n';
//}