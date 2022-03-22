//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N, Q, P_sum[100001];
//
//int main() {
//    fast_io;
//    cin >> N;
//    vector<int> music(N+1);
//    for (int i = 1; i <= N; i++) {
//        cin >> music[i];
//        if (i == 1) continue;
//        if (music[i-1] > music[i]) P_sum[i] = P_sum[i-1] + 1;
//        else P_sum[i] = P_sum[i-1];
//    }
//    cin >> Q;
//    for (int i = 1; i <= Q; i++) {
//        int s, e; cin >> s >> e;
//        cout << P_sum[e] - P_sum[s] << '\n';
//    }
//}