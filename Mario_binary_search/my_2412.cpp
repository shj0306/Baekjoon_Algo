//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//const int MAX = 50000;
//const int INF = 1e9;
//int N, T;
//vector<pii> vec;
//bool visited[MAX];
//
//int bfs() {
//    queue<pii> q;
//    q.push({0,0});
//    while(!q.empty()) {
//        auto [idx, cur_cnt] = q.front();
//        q.pop();
//        if (vec[idx].second == T) return cur_cnt;
//        for (int i = idx-1; i >= 0; i--) {
//            if (abs(vec[i].first - vec[idx].first) > 2) break;
//            if (!visited[i] && abs(vec[i].second - vec[idx].second) <= 2) {
//                visited[i] = true;
//                q.push({i, cur_cnt+1});
//            }
//        }
//        for (int i = idx+1; i <= N; i++) {
//            if (abs(vec[i].first - vec[idx].first) > 2) break;
//            if (!visited[i] && abs(vec[i].second - vec[idx].second) <= 2) {
//                visited[i] = true;
//                q.push({i, cur_cnt+1});
//            }
//        }
//    }
//    return -1;
//}
//
//int main() {
//    fast_io;
//    cin >> N >> T;
//    vec.emplace_back(0,0);
//    for (int i = 0; i < N; i++) {
//        int x, y; cin >> x >> y;
//        vec.emplace_back(x,y);
//    }
//    sort(all(vec));
//    cout << bfs();
//}