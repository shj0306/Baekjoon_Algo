//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int n;
//int cnt[20001];
//
//int main() {
//    fast_io;
//    cin >> n;
//    vector<int> v(n);
//    for (int i = 0; i < n; i++) {
//        cin >> v[i];
//        cnt[10000+v[i]]++;
//    }
//    sort(all(v));
//
//    ll res = 0;
//    for (int i = 0; i < n-2; i++) {
//        int val = v[i];
//        int l = i+1, r = n-1;
//        while(l < r) {
//            int sum = v[l] + v[r];
//            if (sum == -val) {
//                if (v[l] == v[r]) res += r - l;
//                else res += cnt[10000 + v[r]];
//                l++;
//            }else if (sum < -val) l++;
//            else r--;
//        }
//    }
//    cout << res;
//}