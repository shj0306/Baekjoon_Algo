//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//const int MAX = 1e5;
//int N, K, dist[MAX+1];
//
//int bfs() {
//    queue<int> q;
//    fill(dist, dist+MAX+1, MAX+1);
//    q.push(N);
//    dist[N] = 0;
//    while(!q.empty()) {
//        int cur = q.front();
//        if (cur == K) return dist[cur];
//        q.pop();
//        if (cur * 2 <= MAX) {
//            if (dist[cur*2] > dist[cur] + 1) {
//                dist[cur*2] = dist[cur] + 1;
//                q.push(cur*2);
//            }
//        }
//        if (cur + 1 <= MAX) {
//            if (dist[cur+1] > dist[cur] + 1) {
//                dist[cur+1] = dist[cur] + 1;
//                q.push(cur+1);
//            }
//        }
//        if (cur - 1 >= 0) {
//            if (dist[cur-1] > dist[cur] + 1) {
//                dist[cur-1] = dist[cur] + 1;
//                q.push(cur-1);
//            }
//        }
//    }
//    return -1;
//}
//
//int main() {
//    fast_io;
//    cin >> N >> K;
//    cout << bfs();
//}