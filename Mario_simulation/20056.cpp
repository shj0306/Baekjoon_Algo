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

//���̾ �ڽ��� ���� �ӷ����� �̵���Ű��
void move_fireball() {

    //������ �ִ� ���̾ ����
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            dragon[i][j].clear();
        }
    }

    //���� �̵��ϴ� ��ġ�� ���̾�� �־��ش�.
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

//2�� �̻��� ����ִ� �� ���̾ ��ġ�� 4������ �ɰ���.
//1�� �ִ� ���� �׳� �־��ش�.
void process_fireball() {

    vector<Info> temp;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (dragon[i][j].empty()) continue;
            if (dragon[i][j].size() == 1) {
                auto [m,s,d] = dragon[i][j][0];
                temp.push_back({i,j, m, s, d});
            }else {
                bool same = true; //���̾�� ������ ��� Ȧ���ų� ¦������
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

                //������ 0�� ���̾�� �Ҹ��.

                int new_m = total_m / 5;
                int new_s = total_s / dragon[i][j].size();

                if (new_m) {
                    if (same) { //������ ���ٸ�
                        for (int dir = 0; dir < 8; dir += 2)
                            temp.push_back({i, j, new_m, new_s, dir});
                    } else { //�ٸ��ٸ�
                        for (int dir = 1; dir < 8; dir += 2)
                            temp.push_back({i, j, new_m, new_s, dir});
                    }
                }
            }
        }
    }
    fireball = temp;
}

//�����ִ� ���̾ ������ �� ���
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