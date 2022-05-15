#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
const int INF = 1e9;

struct Info{
    int x, y, d, idx;
};

bool cmp(pii a, pii b) {
    if (a.second == b.second) return a.first < b.first;
    return a.second < b.second;
}

int N, T;
int check[50001];
vector<pii> points;
/*
 * Algorithm : BFS
 *
 * 시간 초과 났던 이유와 해결방법: 기존 코드는 |a - x| ≤ 2이고 |b - y| ≤ 2 조건을 고려하지 않고,
 * 모든 좌표들을 보면서 bfs를 진행해서 시간초과가 났다.
 * 다른 분들의 코드를 참고해 수정한 코드는 y좌표 기준 오름차순 정렬을 해준 다음,
 * 현재 인덱스를 기준으로 양방향으로 조건에 부합할 때까지만 반복문을 실행하여 시간을 단축시켰다.
 */

int bfs() {
    queue<Info> q;
    q.push({0,0,0, 0});

    while(!q.empty()) {
        auto [cur_x, cur_y, dist, idx] = q.front();
        q.pop();

        if (cur_y == T) return dist;

        for (int i = idx; i < N; i++) {
            auto [nx, ny] = points[i];

            if (!check[i]) {
                if (abs(cur_x - nx) <= 2 && abs(cur_y-ny) <= 2) {
                    check[i] = 1;
                    q.push({nx, ny, dist+1, i});
                }else if (abs(cur_x - nx) > 2 && abs(cur_y - ny) > 2) break;
            }
        }

        for (int i = idx; i >= 0; i--) {
            auto [nx, ny] = points[i];

            if (!check[i]) {
                if (abs(cur_x - nx) <= 2 && abs(cur_y-ny) <= 2) {
                    check[i] = 1;
                    q.push({nx, ny, dist+1, i});
                }else if (abs(cur_x - nx) > 2 && abs(cur_y - ny) > 2) break;
            }
        }
    }

    return -1;
}

int main() {
    fast_io;
    cin >> N >> T;
    points.resize(N);

    for (int i = 0; i < N; i++) {
        cin >> points[i].first >> points[i].second;
    }

    //y좌표 기준 오름차순 정렬
    sort(all(points), cmp);

    cout << bfs();
}