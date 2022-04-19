//#include <bits/stdc++.h>
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//const int MAX = 500000;
//int N, M, S, P,dfsn[MAX], cnt, SN, sn[MAX];
//bool finished[MAX];
//vector<int> adj[MAX];
//stack<int> stk;
//int coin[MAX];
//bool has_rest[MAX];
//vector<int> sAdj[MAX];// 이 SCC와 인접한 SCC들을 담고 있는 리스트
//int sStart; // 시작점을 포함하는 SCC의 번호
//int sCash[MAX];// 이 SCC의 현금 액수 총합
//int sOutdegree[MAX];// 이 SCC의 outdegree
//bool sHasRest[MAX];// 이 SCC가 레스토랑을 포함하는가?
//int sMax[MAX]; //각 SCC 결과값
//bool sCal[MAX]; // 시작점에서 이 SCC에 도달할 수 있는가?
//
//int dfs(int cur) {
//    dfsn[cur] = ++cnt;
//    stk.push(cur);
//
//    int result = dfsn[cur];
//    for (int nxt : adj[cur]) {
//        if (dfsn[nxt] == 0) result = min(result, dfs(nxt));
//        else if (!finished[nxt]) result = min(result, dfsn[nxt]);
//    }
//
//    if (result == dfsn[cur]) {
//        while(true) {
//            int t = stk.top();
//            stk.pop();
//            finished[t] = true;
//            sn[t] = SN;
//            if (t == cur) break;
//        }
//        SN++;
//    }
//
//    return result;
//}
//
//int main() {
//    fast_io;
//    cin >> N >> M;
//
//    for (int i = 0; i < M; i++) {
//        int u, v;
//        cin >> u >> v;
//        adj[u-1].push_back(v-1);
//    }
//
//    for (int i = 0; i < N; i++) {
//        if (dfsn[i] == 0) dfs(i);
//    }
//
//    for (int i = 0; i < N; i++) cin >> coin[i];
//    cin >> S >> P;
//    S--;
//    for (int i = 0; i < P; i++) {
//        int num; cin >> num;
//        has_rest[num-1] = true;
//    }
//
//    //SCC를 하나의 정점으로 하는 그래프를 다시 만든다.
//    for (int i = 0; i < N; i++) {
//        int si = sn[i];
//        sCash[si] += coin[i];
//        if (has_rest[i]) sHasRest[si] = true;
//        if (i == S) sStart = si;
//
//        //sAdj 리스트 채움
//        for (int j : adj[i]) {
//            int sj = sn[j];
//            if (si == sj) continue;
//            sAdj[si].push_back(sj);
//            sOutdegree[sj]++;
//        }
//    }
//
//    //위상정렬 부분
//    queue<int> Q;
//
//    for (int i = 0; i < SN; i++) {
//        sMax[i] = sCash[i]; //각 SCC에서 얻을 수 있는 금액으로 초기화
//        if (i == sStart) sCal[i] = true; //시작지점이 포함된 SCC
//        if (sOutdegree[i] == 0) Q.push(i); //진입 차수가 0인 SCC를 큐에 넣음.
//    }
//
//    while(!Q.empty()) {
//        int curr = Q.front();
//        Q.pop();
//        for (int nxt : sAdj[curr]) {
//            if (sCal[curr]) { //시작점에서 이 SCC에 도달가능해야만 nxt의 정보 갱신
//                sMax[nxt] = max(sMax[nxt], sMax[curr] + sCash[nxt]);
//                sCal[nxt] = true;
//            }
//            if (--sOutdegree[nxt] == 0) Q.push(nxt);
//        }
//    }
//
//    //레스토랑이 존재하면서 시작지점에서 도착가능한 SCC에 대해서 최댓값 비교
//    int result = 0;
//    for (int i = 0; i < SN; i++) {
//        if (sHasRest[i] && sCal[i]) result = max(result, sMax[i]);
//    }
//    cout << result;
//}
