#include <bits/stdc++.h>
#include <unordered_map>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
int N, R, M, K;
const int INF = 1e9;
string city;
map<string, int> city_list; //도시 리스트
vector<string> travel_list; //여행할 도시 리스트
string trans, city1, city2;
double cost, dist1[101][101], dist2[101][101];

void init() {
    for (int i = 1; i <= 100; i++) {
        for (int j = 1; j <= 100; j++) {
            dist1[i][j] = INF;
            dist2[i][j] = INF;
        }
    }
}

double floyd(double dist[101][101]) {

    for (int k = 1; k <= N; k++) {
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= N; j++) {
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }

    double res = 0;
    for (int i = 1; i < M; i++) {
        int c1 = city_list[travel_list[i]];
        int c2 = city_list[travel_list[i+1]];

        res += dist[c1][c2];
    }
    return res;
}

int main() {
    fast_io;
    cin >> N >> R;
    init();

    for (int i = 1; i <= N; i++) {
        cin >> city;
        city_list[city] = i;
    }
    cin >> M;
    travel_list.resize(M+1);
    for (int i = 1; i <= M; i++) {
        cin >> travel_list[i];
    }
    cin >> K;

    for (int i = 1; i <= K; i++) {
        cin >> trans >> city1 >> city2 >> cost;
        int c1 = city_list[city1];
        int c2 = city_list[city2];

        dist1[c1][c2] = min(dist1[c1][c2], cost);
        dist1[c2][c1] = min(dist1[c2][c1], cost);

        if (trans == "Mugunghwa" || trans == "ITX-Cheongchun"
        || trans == "ITX-Saemaeul") {
            dist2[c1][c2] = 0;
            dist2[c2][c1] = 0;
        }else if (trans == "S-Train" || trans == "V-Train") {
            dist2[c1][c2] = min(dist2[c1][c2], cost / 2);
            dist2[c2][c1] = min(dist2[c2][c1], cost / 2);
        }else {
            dist2[c1][c2] = min(dist2[c1][c2], cost);
            dist2[c2][c1] = min(dist2[c2][c1], cost);
        }
    }

    double travel_cost = floyd(dist1); //내일로 티켓 안사고 했을 때
    double tomorrow_cost = floyd(dist2) + R; //내일로 티켓 샀을 때

    if (tomorrow_cost < travel_cost) cout << "Yes";
    else cout << "No";
}