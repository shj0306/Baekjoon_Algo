//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//const int MAX = 100001;
//int N, M, max_cost;
//int fac_1, fac_2;
//vector<vector<pii>> bridge;
//bool visited[MAX];
//
//bool possible(int weight) {
//    queue<int> q;
//    q.push(fac_1);
//    visited[fac_1] = true;
//    while(!q.empty()) {
//        int cur = q.front();
//        q.pop();
//        if (cur == fac_2) return true;
//        for (auto [nxt, w] : bridge[cur]) {
//            if (!visited[nxt] && weight <= w) {
//                visited[nxt] = true;
//                q.push(nxt);
//            }
//        }
//    }
//    return false;
//}
//
//int main() {
//    fast_io;
//    cin >> N >> M;
//    bridge = vector<vector<pii>> (N+1);
//    for (int i = 0; i < M; i++) {
//        int a,b,c;
//        cin >> a >> b >> c; //a섬과 b섬 사이 중량제한 c인 다리
//        bridge[a].emplace_back(b,c);
//        bridge[b].emplace_back(a,c);
//        max_cost = max(max_cost, c);
//    }
//
//    cin >> fac_1 >> fac_2;
//
//    int lo = 1, hi = max_cost, ans = 1;
//    while(lo <= hi) {
//        int mid = (lo+hi) / 2; //물품 중량
//        memset(visited, false, sizeof(visited));
//        if (possible(mid)) {
//            ans = max(ans, mid);
//            lo = mid + 1;
//        }else hi = mid - 1;
//    }
//    cout << ans;
//}
//// bfs + binary_search