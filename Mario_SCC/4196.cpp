//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//const int MAX = 100000;
//int T, N, M, cnt, SN, sn[MAX];
//bool finished[MAX];
//int dfsn[MAX];
//vector<int> adj[MAX];
//vector<vector<int>> SCC;
//stack<int> S;
//
//int dfs(int cur) {
//    dfsn[cur] = ++cnt;
//    S.push(cur);
//
//    int result = dfsn[cur];
//    for (int nxt : adj[cur]) {
//        if (dfsn[nxt] == 0) result = min(result, dfs(nxt));
//        else if (!finished[nxt]) result = min(result, dfsn[nxt]);
//    }
//
//    if (result == dfsn[cur]) {
//        vector<int> scc;
//        while(true) {
//            int t = S.top();
//            S.pop();
//            finished[t] = true;
//            scc.push_back(t);
//            sn[t] = SN;
//            if (t == cur) break;
//        }
//        SCC.push_back(scc);
//        SN++;
//    }
//
//    return result;
//}
//
//int main() {
//    fast_io;
//    cin >> T;
//    while(T--) {
//        cin >> N >> M;
//        for (int i = 0; i < N; i++) adj[i].clear();
//        for (int i = 0; i < M; i++) {
//            int u, v;
//            cin >> u >> v;
//            adj[u-1].push_back(v-1);
//        }
//
//        cnt = SN = 0;
//        memset(dfsn,0,sizeof(dfsn));
//        memset(sn,0,sizeof(sn));
//        memset(finished, false, sizeof(finished));
//        for (int i = 0; i < N; i++)
//            if (dfsn[i] == 0) dfs(i);
//
//        int Outdegree[MAX] = {0};
//        for (int i = 0; i < N; i++) {
//            // 간선 i->j에 대해, i와 j가 다른 SCC에 속하면 j가 속한 SCC의 outdegree++
//            for (int j : adj[i]) {
//                if (sn[i] != sn[j]) Outdegree[sn[j]]++;
//            }
//        }
//        int res = 0;
//        for (int i = 0; i < SN; i++) {
//            if (Outdegree[i] == 0) res++;
//        }
//        cout << res;
//    }
//}