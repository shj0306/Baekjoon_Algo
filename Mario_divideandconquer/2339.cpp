/*
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> slate;
int n;
int check_row(int sr, int sc, int er, int ec, int row) {
    if (row == sr || row == er) return 0; //잘랐을 때 2조각이 되지 않는 경우
    for (int i = sc; i <= ec; i++) {
        if (slate[row][i] == 2) return 0;
    }
    return 1;
}
int check_col(int sr, int sc, int er, int ec, int col) {
    if (col == sc || col == ec) return 0; //잘랐을 때 2조각이 되지 않는 경우
    for (int i = sr; i <= er; i++) {
        if (slate[i][col] == 2) return 0;
    }
    return 1;
}
int cut_slate(int sr, int sc, int er, int ec, int rc) {

    int j_cnt = 0; int imp_cnt = 0; //보석 개수, 불순물 개수
    for (int i = sr; i <= er; i++) {
        for (int j = sc; j <= ec; j++) {
            if (slate[i][j] == 1) imp_cnt++;
            else if (slate[i][j] == 2) j_cnt++;
        }
    }
    if (j_cnt == 1 && imp_cnt == 0) return 1;
    else if (j_cnt == 1 && imp_cnt == 1) return 0;
    else if (j_cnt >= 2 && imp_cnt == 0) return 0;
    else if (j_cnt == 0) return 0;
    //이 이외의 경우는 더 나눠 봐야 안다.
    int res = 0;
    if (rc != 1) { //가로로 자르기
        for (int i = sr; i <= er; i++) {
            for (int j = sc; j <= ec; j++) {
                if (slate[i][j] == 1) {
                    if (check_row(sr, sc, er, ec, i)) {//가로로 자를 수 있는 지 검사
                        int val = cut_slate(sr, sc, i - 1, ec, 1);
                        if (val) res += val * cut_slate(i + 1, sc, er, ec, 1);
                    }
                }
            }
        }
    }
    if(rc != 0) { //세로로 자르기
        for (int i = sr; i <= er; i++) {
            for (int j = sc; j <= ec; j++) {
                if (slate[i][j] == 1) {
                    if (check_col(sr, sc, er, ec, j)) {//세로로 자를 수 있는 지 검사
                        int val = cut_slate(sr, sc, er, j - 1, 0);
                        if (val) res += val * cut_slate(sr, j + 1, er, ec, 0);
                    }
                }
            }
        }
    }
    return res;
}

int main() {
    cin >> n;
    slate = vector<vector<int>>(n + 1, vector<int>(n + 1));
    int j_cnt = 0, ans = 0;
    vector<pair<int,int>> imp;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> slate[i][j];
            if (slate[i][j] == 1) imp.emplace_back(i,j);
            else if (slate[i][j] == 2) j_cnt++;
        }
    }
    if (j_cnt == 1 && imp.empty()) cout << 1 << '\n';
    ans = cut_slate(1,1,n,n,-1);
    ans = (ans > 0) ? ans : -1;
    cout << ans << '\n';
    return 0;
}
*/
