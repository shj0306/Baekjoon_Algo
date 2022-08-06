#include <bits/stdc++.h>
using namespace std;

int v[1010][1010];

int solution(vector<vector<int>> board, vector<vector<int>> skill) {
    int answer = 0;
    int r = (int)board.size();
    int c = (int)board[0].size();

    for (auto& sk : skill) {
        int type = sk[0], r1 = sk[1], c1 = sk[2],
                r2 = sk[3], c2 = sk[4], degree = sk[5];
        if (type == 1) degree = -degree;
        v[r1][c1] += degree;
        v[r1][c2+1] -= degree;
        v[r2+1][c1] -= degree;
        v[r2+1][c2+1] += degree;
    }

    for (int i = 1; i < r; i++) {
        for (int j = 0; j < c; j++) {
            v[i][j] += v[i-1][j];
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 1; j < c; j++) {
            v[i][j] += v[i][j-1];
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (board[i][j] + v[i][j]) answer++;
        }
    }

    return answer;
}