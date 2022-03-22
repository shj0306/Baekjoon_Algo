//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//const int MAX = 10001;
//
//vector<int> V[MAX];
//int T[MAX], indegree[MAX], dist[MAX];
//
//int main() {
//    fast_io;
//    int n; cin >> n;
//    for (int i = 1; i <= n; i++) {
//        int t, cnt;
//        cin >> t >> cnt;
//        T[i] = t;
//        for (int j = 0; j < cnt; j++) {
//            int num; cin >> num;
//            V[i].push_back(num);
//            indegree[i]++;
//        }
//    }
//
//    memset(dist,-1,sizeof(dist));
//    for (int i = 1; i <= n; i++) {
//        if (indegree[i] == 0) dist[i] = T[i];
//        else {
//            int max_time = 0;
//            for (auto pre : V[i]) max_time = max(max_time, dist[pre]);
//            dist[i] = max_time + T[i];
//        }
//    }
//    int res = 0;
//    for (int i = 1; i <= n; i++) res = max(res, dist[i]);
//    cout << res;
//}