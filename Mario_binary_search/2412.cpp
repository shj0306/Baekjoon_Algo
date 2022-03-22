//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//#define f first
//#define s second
//using namespace std;
//const int MAX = 50001;
//int N, T;
//vector<pair<int, int> > point;
//bool visited[MAX];
//
//int bfs()
//{
//    queue<pair<int, int>> q;
//    q.push({0,0});
//    visited[0] = true;
//
//    while (!q.empty()) {
//        auto [idx, cnt] = q.front();
//        q.pop();
//
//        if (point[idx].second == T) return cnt;
//
//        for (int i = idx - 1; i > 0; i--) {
//            if (abs(point[i].first - point[idx].first) > 2)    break;
//            if (!visited[i] && abs(point[i].second - point[idx].second) <= 2) {
//                visited[i] = true;
//                q.push({i,cnt+1});
//            }
//        }
//        for (int i = idx + 1; i <= N; i++) {
//            if (abs(point[i].first - point[idx].first) > 2)    break;
//            if (!visited[i] && abs(point[i].second - point[idx].second) <= 2) {
//                visited[i] = true;
//                q.push({i,cnt+1});
//            }
//        }
//    }
//    return -1;
//}
//
//int main()
//{
//    int x, y;
//    cin >> N >> T;
//    point.emplace_back(0, 0);
//    for (int i = 0; i < N; i++) {
//        cin >> x >> y;
//        point.emplace_back(x, y);
//    }
//    sort(all(point));
//    cout << bfs();
//    return 0;
//}
//
////출처: https://ksj14.tistory.com/entry/BaekJoon2412-암벽-등반 [:: ADVANCE ::]