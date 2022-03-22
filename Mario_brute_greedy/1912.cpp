//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//const int MAX = 100001;
//int N;
//int arr[MAX];
//int dp[MAX];
//
//int main() {
//    fast_io;
//    cin >> N;
//    for (int i = 0; i < N; i++) cin >> arr[i];
//    dp[0] = arr[0];
//    for (int i = 1; i < N; i++) dp[i] = max(arr[i], dp[i-1] + arr[i]);
//    sort(begin(dp), begin(dp) + N, greater<>());
//    cout << dp[0] << '\n';
//}
//////연속된 몇 개의 수를 선택해서 얻을 수 있는 최대합
//////dp[idx] : idx 번째까지 봤을 때 가장 큰 경우
//////dp[idx] = max(dp[idx-1]+arr[idx], arr[idx])
