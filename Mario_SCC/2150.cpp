//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//
////SN : scc ����, sn[i] : i�� ���� scc�� ��ȣ
//int V, E, cnt, dfsn[10000], SN, sn[10000];
//vector<int> adj[10000];
//bool finished[10000];
//stack<int> S;
//vector<vector<int>> SCC;
//
////�ڽ��� ������� �����ϴ� dfs�Լ�
//int dfs(int cur) {
//    dfsn[cur] = ++cnt;
//    S.push(cur);
//
//    //�ڽ��� dfsn, �ڽĵ��� ����� dfsn �� ���� ���� ��ȣ�� result�� ����
//    int result = dfsn[cur];
//    for (int nxt : adj[cur]) {
//        //���� �湮���� ���� �̿�
//        if (dfsn[nxt] == 0) result = min(result, dfs(nxt));
//        //�湮�� ������ ���� SCC�� ������� ���� �̿�
//        else if (!finished[nxt]) result = min(result, dfsn[nxt]);
//    }
//
//    //�ڽ�, �ڽ��� �ڼյ��� ���� ������ ���� ���� ������ �ڽ��� ��� SCC ����
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
//        //SCC ����
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
//    //dfs�� �ϸ鼭 SCC ����
//    for (int i = 0; i < V; i++) {
//        if (dfsn[i] == 0) dfs(i);
//    }
//    sort(all(SCC));
//
//    //SCC ����
//    cout << SN << '\n';
//
//    for (auto& currSCC : SCC) {
//        for (int curr : currSCC)
//            cout << curr + 1 << ' ';
//        puts("-1");
//    }
//}