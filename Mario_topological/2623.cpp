//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N, M, num, val, prv, indegree[1001];
//vector<vector<int>> adj;
//
//int main() {
//    fast_io;
//    cin >> N >> M;
//    adj.resize(N+1);
//
//    for (int i = 0; i < M; i++) {
//        cin >> num;
//        for (int j = 0; j < num; j++) {
//            cin >> val;
//            if (j) {
//                adj[prv].push_back(val);
//                indegree[val]++;
//            }
//            prv = val;
//        }
//    }
//
//    queue<int> q;
//    for (int i = 1; i <= N; i++) {
//        if (indegree[i] == 0) q.push(i);
//    }
//
//    vector<int> order;
//    while(!q.empty()) {
//        int cur = q.front();
//        q.pop();
//        order.push_back(cur);
//        for (int nxt : adj[cur]) {
//            if (--indegree[nxt] == 0) q.push(nxt);
//        }
//    }
//
//    if (order.size() == N) {
//        for (int ord : order) cout << ord << '\n';
//    }else cout << 0;
//}