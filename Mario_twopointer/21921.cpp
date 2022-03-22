//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int n, x;
//vector<int> blog;
//
//int main() {
//    fast_io;
//    cin >> n >> x;
//    blog.resize(n+1);
//    for (int i = 1; i <= n; i++) {
//        cin >> blog[i];
//        blog[i] += blog[i-1];
//    }
//
//    int res = 0, cnt = 0;
//    for (int i = x; i <= n; i++) {
//        if (res < blog[i] - blog[i-x]) {
//            res = blog[i] - blog[i-x];
//            cnt = 1;
//        }else if (res == blog[i] - blog[i-x]) cnt++;
//    }
//
//    if (res) cout << res << '\n' << cnt;
//    else cout << "SAD";
//}