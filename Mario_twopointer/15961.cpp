//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int n,d,k,c;
//int num[3001];
//int sushi[3003000];
//
//int main() {
//    fast_io;
//    cin >> n >> d >> k >> c;
//
//    for (int i = 0; i < n; i++) cin >> sushi[i];
//    for (int i = 0; i < k-1; i++) sushi[n+i] = sushi[i];
//
//    int res = 0, cnt = 0;
//    for (int i = 0; i < n; i++) {
//        if (i) {
//            if (num[sushi[i-1]] == 1) cnt--;
//            num[sushi[i-1]]--;
//            if (num[sushi[i+k-1]] == 0) cnt++;
//            num[sushi[i+k-1]]++;
//        }else {
//            for (int j = i; j < i + k; j++) {
//                if (num[sushi[j]] == 0) cnt++;
//                num[sushi[j]]++;
//            }
//        }
//        if (num[c] == 0) cnt++;
//        num[c]++;
//
//        res = max(res, cnt);
//    }
//    cout << res;
//}