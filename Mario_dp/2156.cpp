//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//const int MAX = 10001;
//int n, a[MAX], dp[MAX];
//
//int main() {
//    fast_io;
//    cin >> n;
//    for (int i = 1; i <= n; i++) cin >> a[i];
//
//    dp[0] = 0;
//    dp[1] = a[1];
//    dp[2] = a[1] + a[2];
//
//    for (int i = 3; i <= n; i++) {
//        dp[i] = max(dp[i], dp[i-1]);
//        dp[i] = max(dp[i], max(dp[i-3] + a[i-1] + a[i], dp[i-2] + a[i]));
//    }
//    cout << dp[n];
//}
///*
// * i��°�ܱ��� ���� �� ���� �� �ִ� �ִ� ��
// * i��° ���� ���� ���
// * dp[i] = max(dp[i-3] + a[i-1] + a[i], dp[i-2] + a[i])
// * i��° ���� ������ ���� ���� ��
// * dp[i] = max(dp[i], dp[i-1])
// */