/*
#include <iostream>
#include <string>
#include <cmath>
#define MAX_N 2000
#define MAX_M 2000
using namespace std;
int N,M;
const int MOD = 1e9 + 7;

char map[MAX_N][MAX_M];
bool nocount[MAX_N][MAX_M] ={false,}; //다른 색끼리 인접한 경우 true
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};

long long fpow(int n) {
    long long x;
    if (n == 1) return 2;
    else {
        x = fpow(n / 2);
        if (n % 2 == 0)
            return x * x % MOD;
        else
            return x * x * 2 % MOD;
    }
}

int main() {
    cin >> N >> M;
    long long cnt = 0;

    for (int i = 0; i < N; i++) {
        string colors;
        cin >> colors;
        for (int j = 0; j < M; j++) {
            map[i][j] = colors[j];
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++){
            char cur = map[i][j];
            for (int k = 0; k < 4; k++) {
                int _x = i + dx[k];
                int _y = j + dy[k];

                if (_x < 0 || _y < 0 || _x >= N || _y >= M || nocount[_x][_y]) continue;
                if (cur != map[_x][_y]) { //인접한 격자의 색이 다른 경우
                    nocount[i][j] = true;
                    nocount[_x][_y] = true;
                }
            }
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (!nocount[i][j]) cnt++;
        }
    }

    if (cnt) {
        long long ans = fpow(cnt);
        cout << ans << endl;
    }else {
        cout << 1 <<endl;
    }

    return 0;
}
*/
