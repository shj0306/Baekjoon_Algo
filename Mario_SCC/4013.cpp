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
//vector<int> sAdj[MAX];// �� SCC�� ������ SCC���� ��� �ִ� ����Ʈ
//int sStart; // �������� �����ϴ� SCC�� ��ȣ
//int sCash[MAX];// �� SCC�� ���� �׼� ����
//int sOutdegree[MAX];// �� SCC�� outdegree
//bool sHasRest[MAX];// �� SCC�� ��������� �����ϴ°�?
//int sMax[MAX]; //�� SCC �����
//bool sCal[MAX]; // ���������� �� SCC�� ������ �� �ִ°�?
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
//    //SCC�� �ϳ��� �������� �ϴ� �׷����� �ٽ� �����.
//    for (int i = 0; i < N; i++) {
//        int si = sn[i];
//        sCash[si] += coin[i];
//        if (has_rest[i]) sHasRest[si] = true;
//        if (i == S) sStart = si;
//
//        //sAdj ����Ʈ ä��
//        for (int j : adj[i]) {
//            int sj = sn[j];
//            if (si == sj) continue;
//            sAdj[si].push_back(sj);
//            sOutdegree[sj]++;
//        }
//    }
//
//    //�������� �κ�
//    queue<int> Q;
//
//    for (int i = 0; i < SN; i++) {
//        sMax[i] = sCash[i]; //�� SCC���� ���� �� �ִ� �ݾ����� �ʱ�ȭ
//        if (i == sStart) sCal[i] = true; //���������� ���Ե� SCC
//        if (sOutdegree[i] == 0) Q.push(i); //���� ������ 0�� SCC�� ť�� ����.
//    }
//
//    while(!Q.empty()) {
//        int curr = Q.front();
//        Q.pop();
//        for (int nxt : sAdj[curr]) {
//            if (sCal[curr]) { //���������� �� SCC�� ���ް����ؾ߸� nxt�� ���� ����
//                sMax[nxt] = max(sMax[nxt], sMax[curr] + sCash[nxt]);
//                sCal[nxt] = true;
//            }
//            if (--sOutdegree[nxt] == 0) Q.push(nxt);
//        }
//    }
//
//    //��������� �����ϸ鼭 ������������ ���������� SCC�� ���ؼ� �ִ� ��
//    int result = 0;
//    for (int i = 0; i < SN; i++) {
//        if (sHasRest[i] && sCal[i]) result = max(result, sMax[i]);
//    }
//    cout << result;
//}
