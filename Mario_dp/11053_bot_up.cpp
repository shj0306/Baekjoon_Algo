//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//
///*
// * �ε��� i���� ���� j�� ���� arr[i] > arr[j], �����ϴ� �κ� ������ ���̰� ���� �� ���̸� �����ϴ� j
// *  dp[i] = dp[j]+1�� ���ش�.
// */
//
//int arr[1001], dp[1001], res;
//
//int main() {
//    fast_io;
//    int n; cin >> n;
//
//    for (int i = 0; i < n; i++) cin >> arr[i];
//    dp[0] = 0; dp[1] = 1;
//    for (int i = 0; i < n; i++) {
//        int cur = 0;
//        for (int j = 0; j < i; j++) {
//            if (arr[i] > arr[j]) cur = max(cur, dp[j]);
//        }
//        dp[i] = cur + 1;
//        res = max(res, dp[i]);
//    }
//    cout << res;
//}