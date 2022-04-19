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
//    vector<int> doll(N);
//
//    for (int i = 0; i < N; i++) {
//        cin >> doll[i];
//    }
//
//    int l = 0, r = 0, cnt = 0, res = N+1;
//    while(r <= N) {
//        if (cnt < K) {
//            if (r == N) break;
//            if (doll[r++] == 1) cnt++;
//        }else {
//            res = min(res, r - l);
//            if (doll[l++] == 1) cnt--;
//        }
//    }
//    cout << (res == N+1 ? -1 : res) << '\n';
//}