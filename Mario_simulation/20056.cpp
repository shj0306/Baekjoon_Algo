#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int, int>;
using ll = long long;
int N, M, K;
int dy[] = {-1, -1, 0, 1, 1, 1, 0, -1};
int dx[] = {0, 1, 1, 1, 0, -1, -1, -1};

struct Info {
    int r, c, m, s, d;
};

struct Info2 {
    int m,s,d;
};

vector<Info2> dragon[51][51];
vector<Info> fireball;

//파이어볼 자신의 방향 속력으로 이동시키기
void move_fireball() {

    //기존에 있던 파이어볼 삭제
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            dragon[i][j].clear();
        }
    }

    //새로 이동하는 위치에 파이어볼을 넣어준다.
    for (auto & [y,x,m,s,d] : fireball) {
        int nx = (x + dx[d] * s) % N;
        int ny = (y + dy[d] * s) % N;

        if (nx <= 0) nx += N;
        if (ny <= 0) ny += N;

        dragon[ny][nx].push_back({m,s,d});
        x = nx; y = ny;
    }
}

bool is_possible(int d1, int d2) {
    return (d1 % 2 && d2 % 2) || (d1 % 2 == 0 && d2 % 2 == 0);
}

//2개 이상이 들어있는 곳 파이어볼 합치고 4곳으로 쪼갠다.
//1개 있는 곳은 그냥 넣어준다.
void process_fireball() {

    vector<Info> temp;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (dragon[i][j].empty()) continue;
            if (dragon[i][j].size() == 1) {
                auto [m,s,d] = dragon[i][j][0];
                temp.push_back({i,j, m, s, d});
            }else {
                bool same = true; //파이어볼의 방향이 모두 홀수거나 짝수인지
                int prev_dir = -1;
                int total_m = 0, total_s = 0;

                for (auto[m,s,d]: dragon[i][j]) {

                    total_m += m;
                    total_s += s;

                    if (!same) continue;
                    if (prev_dir == -1) prev_dir = d;
                    else if (is_possible(prev_dir, d)) prev_dir = d;
                    else same = false;
                }

                //질량이 0인 파이어볼은 소멸됨.

                int new_m = total_m / 5;
                int new_s = total_s / dragon[i][j].size();

                if (new_m) {
                    if (same) { //방향이 같다면
                        for (int dir = 0; dir < 8; dir += 2)
                            temp.push_back({i, j, new_m, new_s, dir});
                    } else { //다르다면
                        for (int dir = 1; dir < 8; dir += 2)
                            temp.push_back({i, j, new_m, new_s, dir});
                    }
                }
            }
        }
    }
    fireball = temp;
}

//남아있는 파이어볼 질량의 합 출력
void print() {

    int ans = 0;
    for (int i = 0; i < fireball.size(); i++)
        ans += fireball[i].m;
    cout << ans;
}

int main() {
    fast_io;
    cin >> N >> M >> K;

    for (int i = 0; i < M; i++) {
        int r, c, m, s, d;
        cin >> r >> c >> m >> s >> d;
        fireball.push_back({r, c, m, s, d});
    }

    for (int i = 0; i < K; i++) {
        move_fireball();
        process_fireball();
    }
    print();
}

//https://yabmoons.tistory.com/600