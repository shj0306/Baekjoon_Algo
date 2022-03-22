//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//const int MAX = 2e5+1;
//int N, K, arr[MAX];
//ll res = 0;
//int main() {
//    fast_io;
//    cin >> N >> K;
//    map<int, int> MAP;
//    for (int i = 1; i <= N; i++) {
//        cin >> arr[i];
//        arr[i] += arr[i-1];
//    }
//
//    for (int i = 1; i <= N; i++) {
//        if (arr[i] == K) res++;
//        res += MAP[arr[i] - K]; //j ~ i구간합이 K를 만족하는 구간 개수
//        MAP[arr[i]]++;
//    }
//    cout << res;
//}