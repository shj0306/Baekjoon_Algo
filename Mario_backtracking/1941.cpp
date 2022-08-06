#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
char arr[5][5];
int visited[5][5], check[5][5], tried_cnt, ans;
int dr[] = {1,-1,0,0};
int dc[] = {0,0,1,-1};
vector<pii> tmp;

bool is_in(int r, int c) {
    return r >= 0 && r < 5 && c >= 0 && c < 5;
}

//선택한 7명의 여학생들이 가로 세로로 인접해있는 지 체크해주는 함수
void is_possible(int r, int c) {
    check[r][c] = 1;
    for (int d = 0; d < 4; d++) {
        int nr = r + dr[d];
        int nc = c + dc[d];
        if (!is_in(nr, nc) || check[nr][nc])  continue;

        bool possi = false;
        for (auto [row, col] : tmp) {
            if (row == nr && col == nc) {
                possi = true;
                break;
            }
        }
        if (possi) {
            check[nr][nc] = 1;
            is_possible(nr,nc);
        }
    }
}

//25명의 여학생들중 7명의 학생들을 선택해주는 함수
void select_students(int idx, int cnt, int s_cnt) {

    if (idx > 25) return;
    if (cnt == 7) {
        if (s_cnt < 4) return;
        memset(check, 0, sizeof(check));
        auto [row, col] = tmp[0];
        is_possible(row, col);
        for (auto [r, c] : tmp) {
            if (!check[r][c]) return;
        }
        ans++;
        return;
    }

    int r = idx / 5;
    int c = idx % 5;

    if (arr[r][c] == 'S') {
        visited[r][c] = 1;
        tmp.emplace_back(r,c);
        select_students(idx+1, cnt + 1, s_cnt + 1);
        visited[r][c] = 0;
        tmp.pop_back();
        select_students(idx+1, cnt, s_cnt);
    }
    else {
        visited[r][c] = 1;
        tmp.emplace_back(r,c);
        select_students(idx+1, cnt + 1, s_cnt);
        visited[r][c] = 0;
        tmp.pop_back();
        select_students(idx+1, cnt, s_cnt);
    }
}


int main() {
    fast_io;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> arr[i][j];
        }
    }

    select_students(0,0,0);
    cout << ans;
}