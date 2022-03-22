//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//
//int main() {
//    fast_io;
//    int N, M; cin >> N >> M;
//    vector<int> tree(N);
//    for (int i = 0; i < N; i++) {
//        cin >> tree[i];
//    }
//    int st = 0, en = 1e9;
//    int ans = 0;
//    while(st <= en) {
//        int mid = (st+en) / 2; //절단기 높이 지정
//        long long len = 0;
//        for (auto val : tree) {
//            if (val > mid) len += val - mid;
//        }
//        if (len < M) en = mid - 1;
//        else {
//            ans = max(ans, mid);
//            st = mid + 1;
//        }
//    }
//    cout << ans;
//}