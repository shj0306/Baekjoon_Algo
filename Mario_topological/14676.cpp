//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//const int MAX = 1e5+1;
//int N, M, K, indegree[MAX], state[MAX]; //특정 건물의 상태
//vector<vector<int>> adj;
//
//int main() {
//    fast_io;
//    cin >> N >> M >> K;
//    adj.resize(N+1);
//
//    for (int i = 0; i < M; i++) {
//        int b1, b2;
//        cin >> b1 >> b2;
//        adj[b1].push_back(b2);
//        indegree[b2]++;
//    }
//
//    for (int i = 0; i < K; i++) {
//        int type, num;
//        cin >> type >> num;
//
//        if (type == 1) { //build
//            if (indegree[num] > 0) {
//                cout << "Lier!" << '\n';
//                return 0;
//            }else {
//                state[num]++;
//                if (state[num] == 1) {
//                    for (int nxt : adj[num]) indegree[nxt]--;
//                }
//            }
//        }
//        if (type == 2) { //destroy
//            if (state[num] == 0) {
//                cout << "Lier!" << '\n';
//                return 0;
//            }else {
//                if (--state[num] == 0) {
//                    for (int nxt : adj[num]) {
//                       indegree[nxt]++;
//                    }
//                }
//            }
//        }
//    }
//    cout << "King-God-Emperor" << '\n';
//}