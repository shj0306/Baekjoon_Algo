//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//const int MAX = 1e5+1;
//int N, T, res;
//vector<int> v;
//bool visited[MAX], finished[MAX];
//
//void dfs(int cur) {
//    visited[cur] = true;
//    int nxt = v[cur];
//    if (visited[nxt]) {
//        if (!finished[nxt]) {
//            for (int temp = nxt; temp != cur; temp = v[temp]) res++;
//            res++;
//        }
//    }else dfs(nxt);
//    finished[cur] = true;
//}
//
//int main() {
//    fast_io;
//    cin >> T;
//    while(T--) {
//        cin >> N;
//        v.resize(N+1);
//        memset(visited, false, sizeof(visited));
//        memset(finished, false, sizeof(finished));
//        res = 0;
//        for (int i = 1; i <= N; i++) cin >> v[i];
//        for (int i = 1; i <= N; i++) {
//            if (!visited[i]) dfs(i);
//        }
//        cout << N - res << '\n';
//    }
//}