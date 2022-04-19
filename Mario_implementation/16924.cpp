/*
#include <bits/stdc++.h>
using namespace std;
struct CROSS {
    int top;
    int bottom;
    int right;
    int left;
};
//tuple을 활용하자
struct LOC {
    int row;
    int col;
    int len;
};
char cross[101][101];
int checked[101][101]; //십자가로 채울 수 있는 지 여부
int row, col;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
vector<LOC> loc;

void check_cross(int r, int c, int num);
void make_cross(int r, int c);

int main() {
    cin >> row >> col;
    for (int i = 1; i <= row; i++)
        for (int j = 1; j <= col; j++)
            cin >> cross[i][j];

    for (int i = 1; i <= row; i++)
        for (int j = 1; j <= col; j++)
            if (cross[i][j] == '*') make_cross(i, j);

    for (int i = 1; i <= row; i++)
        for (int j = 1; j <= col; j++) {
            if (cross[i][j] == '*' && !checked[i][j]) {
                cout << -1 <<'\n';
                return 0;
            }
        }

    cout << loc.size() << '\n';
    for (auto &l : loc) cout << l.row << " " << l.col << " " << l.len << '\n';
}
void make_cross(int r, int c) {
    CROSS cross1 = {0, 0, 0, 0};
    for (int j = c + 1; j <= col; j++) {
        if (cross[r][j] == '*') cross1.right++;
        else break;
    }
    for (int j = c - 1; j >= 1; j--) {
        if (cross[r][j] == '*') cross1.left++;
        else break;
    }
    for (int j = r - 1; j >= 1; j--) {
        if (cross[j][c] == '*') cross1.top++;
        else break;
    }
    for (int j = r + 1; j <= row; j++) {
        if (cross[j][c] == '*') cross1.bottom++;
        else break;
    }
    int num = min(min(cross1.top, cross1.bottom),min(cross1.left, cross1.right));
    if (num) {
        loc.push_back({r,c,num});
        check_cross(r,c,num);
    }
}

void check_cross(int r, int c, int num) {
    for (int j = 0; j <= num; j++)
        checked[r][c+j] = 1;
    for (int j = 0; j <= num; j++)
        checked[r][c-j] = 1;
    for (int j = 0; j <= num; j++)
        checked[r-j][c] = 1;
    for (int j = 0; j <= num; j++)
        checked[r+j][c] = 1;
}*/
