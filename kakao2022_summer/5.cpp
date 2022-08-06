#include <bits/stdc++.h>
using namespace std;
using pii = pair<int,int>;
using ll = long long;

int R, C;
int dr[] = {1,0,-1,0};
int dc[] = {0,1,0,-1};
vector<vector<int>> answer;

void rotate() {
    int src = answer[0][0];
    int r = 0;
    int c = 0;
    int k = 0;
    while (k < 4) {
        int nr = r + dr[k];
        int nc = c + dc[k];
        if (nr == 0 && nc == 0) break;
        if (0 <= nr && nr < R && 0 <= nc && nc < C) {
            //시계방향으로 옮김.
            answer[r][c] = answer[nr][nc];
            r = nr;
            c = nc;
        } else k++; //방향을 바꿔준다.
    }
    answer[0][1] = src;
}

void shiftRow() {
    vector<int> tmp = answer[R-1];
    for (int i = R-1; i >= 1; i--) {
        answer[i] = answer[i-1];
    }
    answer[0] = tmp;
}

vector<vector<int>> solution(vector<vector<int>> rc, vector<string> operations) {
    R = (int)rc.size();
    C = (int)rc[0].size();
    answer = rc;

    for (auto &cmd : operations) {
        if (cmd == "Rotate") {
            rotate();
        }else shiftRow();
    }
    return answer;
}

int main() {
    vector<vector<int>> ans = solution({{1, 2, 3},{4, 5, 6},{7, 8, 9}},
                                       {"Rotate", "ShiftRow"});

    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j] << ' ';
        cout << '\n';
    }
}