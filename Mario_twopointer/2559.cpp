//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N, K;
//
//int main() {
//    fast_io;
//    cin >> N >> K;
//    vector<int> pSum(N+1);
//    for (int i = 1; i <= N; i++) {
//        int val; cin >> val;
//        pSum[i] = pSum[i-1] + val;
//    }
//
//    int res = -1e8;
//    for (int i = K; i <= N; i++) {
//        res = max(res, pSum[i] - pSum[i-K]);
//    }
//    cout << res;
//}