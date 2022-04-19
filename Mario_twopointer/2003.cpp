//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//const int MAX = 10001;
//int N, M, arr[MAX];
//
//int main() {
//    fast_io;
//    cin >> N >> M;
//
//    for (int i = 1; i <= N; i++) {
//        cin >> arr[i];
//    }
//
//    int l = 1, r = 1, sum = 0, res = 0;
//    while(r <= N+1) {
//        if (sum < M) {
//            if (r == N+1) break;
//            sum += arr[r++];
//        }else {
//            if (sum == M) res++;
//            sum -= arr[l++];
//        }
//    }
//
//    cout << res << '\n';
//}