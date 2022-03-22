//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int n,s;
//
//int main() {
//    fast_io;
//    cin >> n >> s;
//    vector<int> v(n);
//
//    for (int i = 0; i < n; i++) cin >> v[i];
//
//    int l = 0, r = 0, sum = 0, res = 100001;
//    //더 더해야 하는 데 더할 게 없을 때 종료
//    while(true) {
//        if (sum < s) {
//            if (r == n) break;
//            sum += v[r++];
//        }
//        else {
//            res = min(res, r - l);
//            sum -= v[l++];
//        }
//    }
//    cout << (res == 100001 ? 0 : res) << '\n';
//}