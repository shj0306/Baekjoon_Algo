//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//
////SN : scc 개수, sn[i] : i가 속한 scc의 번호
//int V, E, cnt, dfsn[10000], SN, sn[10000];
//vector<int> adj[10000];
//bool finished[10000];
//stack<int> S;
//vector<vector<int>> SCC;
//
////자신의 결과값을 리턴하는 dfs함수
//int dfs(int cur) {
//    dfsn[cur] = ++cnt;
//    S.push(cur);
//
//    //자신의 dfsn, 자식들의 결과나 dfsn 중 가장 작은 번호를 result에 저장
//    int result = dfsn[cur];
//    for (int nxt : adj[cur]) {
//        //아직 방문하지 않은 이웃
//        if (dfsn[nxt] == 0) result = min(result, dfs(nxt));
//        //방문은 했으나 아직 SCC로 추출되지 않은 이웃
//        else if (!finished[nxt]) result = min(result, dfsn[nxt]);
//    }
//
//    //자신, 자신의 자손들이 도달 가능한 제일 높은 정점이 자신일 경우 SCC 추출
//    if (result == dfsn[cur]) {
//        vector<int> currSCC;
//        while(true) {
//            int t = S.top();
//            S.pop();
//            currSCC.push_back(t);
//            finished[t] = true;
//            sn[t] = SN;
//            if (t == cur) break;
//        }
//        sort(all(currSCC));
//        //SCC 추출
//        SCC.push_back(currSCC);
//        SN++;
//    }
//    return result;
//}
//
//int main() {
//    fast_io;
//    cin >> V >> E;
//    for (int i = 0; i < E; i++) {
//        int a, b;
//        cin >> a >> b;
//        adj[a-1].push_back(b-1);
//    }
//
//    //dfs를 하면서 SCC 추출
//    for (int i = 0; i < V; i++) {
//        if (dfsn[i] == 0) dfs(i);
//    }
//    sort(all(SCC));
//
//    //SCC 개수
//    cout << SN << '\n';
//
//    for (auto& currSCC : SCC) {
//        for (int curr : currSCC)
//            cout << curr + 1 << ' ';
//        puts("-1");
//    }
//}