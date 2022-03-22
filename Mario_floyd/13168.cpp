//#include <bits/stdc++.h>
//#include <unordered_map>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//const int INF = 1e9;
//
//struct Info {
//    int nxt, type, cost;
//};
//
//int N, R, M, K, sz;
//float dist1[101][101], dist2[101][101];
//vector<int> travel;
//vector<Info> adj[101];
//unordered_map<string, int> trans, city;
//
//float floyd(float dist[101][101]) {
//
//    for (int k = 1; k <= sz; k++) {
//        for (int i = 1; i <= sz; i++) {
//            for (int j = 1; j <= sz; j++) {
//                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
//            }
//        }
//    }
//    float res = 0;
//    for (int i = 0; i < travel.size()-1; i++)
//        res += dist[travel[i]][travel[i+1]];
//    return res;
//}
//
//int main() {
//    fast_io;
//    cin >> N >> R;
//
//    trans["Subway"] = 1; trans["Bus"] = 2;
//    trans["Taxi"] = 3; trans["Airplane"] = 4;
//    trans["KTX"] = 5; trans["S-Train"] = 6;
//    trans["V-Train"] = 7; trans["ITX-Saemaeul"] = 8;
//    trans["ITX-Cheongchun"] = 9; trans["Mugunghwa"] = 10;
//
//    int idx = 1;
//    for (int i = 1; i <= N; i++) {
//        string str; cin >> str;
//        if (city.find(str) == city.end()) {
//            city[str] = idx;
//            idx++;
//        }
//    }
//    sz = idx-1;
//    cin >> M;
//    for (int i = 0; i < M; i++) {
//        string str; cin >> str;
//        travel.push_back(city[str]);
//    }
//
//    for (int i = 1; i <= N; i++) {
//        for (int j = 1; j <= N; j++) {
//            if (i == j) {
//                dist1[i][j] = 0;
//                dist2[i][j] = 0;
//            }else{
//                dist1[i][j] = INF;
//                dist2[i][j] = INF;
//            }
//        }
//    }
//
//    cin >> K;
//    for (int i = 0; i < K; i++) {
//        string type, u, v;
//        float cost;
//        cin >> type >> u >> v >> cost;
//        int city1 = city[u], city2 = city[v];
//
//        if (type == "Mugunghwa" || type == "ITX-Saemaeul" || type == "ITX-Cheongchun") {
//            dist1[city1][city2] = min(dist1[city1][city2], cost);
//            dist1[city2][city1] = min(dist1[city2][city1], cost);
//            dist2[city1][city2] = 0;
//            dist2[city2][city1] = 0;
//        }else if (type == "S-Train" || type == "V-Train") {
//            dist1[city1][city2] = min(dist1[city1][city2], cost);
//            dist1[city2][city1] = min(dist1[city2][city1], cost);
//            dist2[city1][city2] = min(dist2[city1][city2], cost / 2);
//            dist2[city2][city1] = min(dist2[city2][city1], cost / 2);
//        }else {
//            dist1[city1][city2] = min(dist1[city1][city2], cost);
//            dist1[city2][city1] = min(dist1[city2][city1], cost);
//            dist2[city1][city2] = min(dist2[city1][city2], cost);
//            dist2[city2][city1] = min(dist2[city2][city1], cost);
//        }
//    }
//
//    float cost1 = floyd(dist1); //티켓을 사지 않을 때 최소 비용
//    float cost2 = floyd(dist2) + R; //티켓을 살 때 최소 비용
//
//    cout << (cost2 < cost1 ? "Yes" : "No") << '\n';
//}