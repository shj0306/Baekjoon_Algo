//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//const int INF = 2147483647;
//int N;
//ll max_val;
//struct Info {
//    ll s, e, d;
//};
//vector<Info> v;
//
//ll check(ll mid) {
//    ll res = 0;
//    for (int i = 0; i < N; i++) {
//        ll val = min(v[i].e, mid) - v[i].s;
//        res += (val < 0 ? 0 : val / v[i].d + 1);
//    }
//    return res;
//}
//
//int main() {
//    fast_io;
//    cin >> N;
//    v.resize(N);
//
//    for (int i = 0; i < N; i++) {
//        cin >> v[i].s >> v[i].e >> v[i].d;
//        max_val = max(max_val, v[i].e);
//    }
//
//    ll l = 1, r = max_val, mid;
//    ll ans = 0;
//    while(l <= r) {
//        mid = (l + r) / 2;
//        if (check(mid) % 2) { //[1,mid]������ Ȧ�������
//            ans = mid;
//            r = mid - 1;
//        }else {//¦�������
//            l = mid + 1;
//        }
//    }
//    if (ans) {
//        cout << ans << ' ' << check(ans) - check(ans-1) << '\n';
//    }
//    else cout << "NOTHING" << '\n';
//}
//// https://kibbomi.tistory.com/205 ����
//// l : ������ ���� ���Ѽ� r : ������ ���� ���Ѽ�
//// mid = (l + r) / 2
//// �� �� [1,mid] ������ ���� ���� Ȧ����� ������ ���� ���� �� �ۿ� ����
//// ���� : Ȧ���� �ϳ��̱� ������
//// �׷� ������� �̺�Ž���� �����ϸ� �ȴ�.
