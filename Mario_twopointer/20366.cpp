//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int n;
//bool checked[601];
//
//int main() {
//    fast_io;
//    cin >> n;
//    vector<int> snow(n);
//    for (int i = 0; i < n; i++) cin >> snow[i];
//
//    sort(all(snow));
//
//    int h1, h2, res = 1e9;
//    for (int i = 0; i < n; i++) {
//        for (int j = i + 1; j < n; j++) {
//            h1 = snow[i] + snow[j];
//            checked[j] = true;
//            int l = i + 1, r = n-1;
//            while(l < r) {
//                if (checked[l]) l++;
//                else if (checked[r]) r--;
//                else {
//                    h2 = snow[l] + snow[r];
//                    res = min(res, abs(h1-h2));
//                    if (h1 < h2) r--;
//                    else l++;
//                }
//            }
//            checked[j] = false;
//        }
//    }
//    cout << res;
//}