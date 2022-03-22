//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//
//int main() {
//    fast_io;
//    int N, M; cin >> N;
//    vector<int> v(N);
//    long long sum = 0;
//    for (int i = 0; i < N; i++) {
//        cin >> v[i];
//        sum += v[i];
//    }
//    cin >> M;
//    sort(all(v));
//    if (sum <= M) {
//        cout << v[v.size()-1] << '\n';
//        return 0;
//    }
//    int st = 1, en = M;
//    int ans = 1;
//    while(st <= en) {
//        int mid = (st + en) / 2; //상한액 후보
//        long long money = 0;
//        for (auto val : v) money += min(val, mid);
//        if (money > M) {
//            en = mid - 1;
//        }else {
//            ans = max(ans, mid);
//            st = mid + 1;
//        }
//    }
//    cout << ans;
//}