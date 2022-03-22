//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//
//int n; vector<int> rope;
//
//int main() {
//    fast_io;
//    cin >> n;
//    rope.resize(n);
//    for (int i = 0; i < n; i++) cin >> rope[i];
//    sort(all(rope), greater<>());
//
//    int res = 0; //가장 튼튼한 로프
//
//    for (int i = 0; i < n; i++) {
//        if (res < rope[i] * (i+1)) res = rope[i] * (i+1);
//    }
//    cout << res;
//}