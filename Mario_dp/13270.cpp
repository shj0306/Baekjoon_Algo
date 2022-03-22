//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//const int INF = 1e9;
//int main() {
//    fast_io;
//    int N; cin >> N;
//    vector<int> min_chic(N+1, INF);
//    vector<int> max_chic(N+1);
//
//    min_chic[0] = 0;
//    int pprev = 1, prev = 2;
//
//    while(prev <= N) {
//        for (int i = prev; i <= N; i++) {
//            min_chic[i] = min(min_chic[i], min_chic[i-prev] + pprev);
//            max_chic[i] = max(max_chic[i], max_chic[i-prev] + pprev);
//        }
//        int nxt = prev + pprev;
//        pprev = prev; prev = nxt;
//    }
//
//    cout << min_chic[N] << ' ' << max_chic[N];
//}