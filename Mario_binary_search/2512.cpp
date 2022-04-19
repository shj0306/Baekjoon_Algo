//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N, total, M;
//vector<int> v;
//
//int main() {
//    fast_io;
//    cin >> N;
//    v.resize(N);
//
//    for (int i = 0; i < N; i++) {
//        cin >> v[i];
//        total += v[i];
//    }
//    sort(all(v));
//    cin >> M;
//    if (M >= total) { //주어진 예산으로 모두 배정가능하면
//        cout << v[N-1] << '\n';
//        return 0;
//    }
//
//    int l = 1, r = M - (N-1), mid;
//    int res = 1;
//    while(l <= r) {
//        //상한액 (=mid를 초과할 수 없다)
//        mid = (l + r) / 2;
//        //해당 상한액일 때 예산 배정이 가능하면?
//        int money = 0;
//        for (int i = 0; i < N; i++)
//            money += (v[i] < mid) ? v[i] : mid;
//        if (M >= money) {
//            res = max(res, mid);
//            l = mid + 1;
//        }else r = mid - 1;
//    }
//    cout << res;
//}