/*
#include <iostream>
#include <string>
#include <algorithm>
#include <queue>

#define MAX 11
using namespace std;

typedef struct Point {
    int ry; int rx;
    int by; int bx;
    int cnt;
} point;

char map[MAX][MAX];
bool visited[MAX][MAX][MAX][MAX] = {false,};

queue<point> q;

const int dy[4] = {1, -1, 0, 0};
const int dx[4] = {0, 0, 1, -1};

bool bgoal, agoal = false;
int N, M, cnt;
int start_rx, start_ry, start_bx, start_by;

void input() {

    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        string str;

        cin >> str;
        for (int j = 0; j < M; j++) {

            map[i][j] = str[j];
            if (map[i][j] == 'R') {
                start_rx = j;
                start_ry = i;
            }
            if (map[i][j] == 'B') {
                start_bx = j;
                start_by = i;
            }
        }
    }
}

int process() {
    while (!q.empty()) {
        point p = q.front();
        q.pop();

        if (p.cnt > 10) {
            return -1;
        }

        if (agoal && !bgoal) {
            return p.cnt;
        } else if (bgoal) {
            return -1;
        }

        for (int i = 0; i < 4; i++) {
            int rx = p.rx;
            int ry = p.ry;
            int bx = p.bx;
            int by = p.by;

            while (true) {
                if (map[ry][rx] != '#' && map[ry][rx] != 'O') {
                    rx += dx[i], ry += dy[i];
                }
                else {
                    if (map[ry][rx] == '#') {
                        rx -= dx[i], ry -= dy[i];
                    }
                    if (map[ry][rx] == 'O') {
                        agoal = true;
                    }
                    break;
                }
            }
            while (true) {
                if (map[by][bx] != '#' && map[by][bx] != 'O') {
                    by += dy[i], bx += dx[i];
                }
                else {
                    if (map[by][bx] == '#') {
                        by -= dy[i], bx -= dx[i];
                    }
                    if (map[by][bx] == 'O') {
                        bgoal = true;
                    }
                    break;
                }
            }

            if (rx == bx && ry == by) {
                if (map[ry][rx] != 'O') {
                    int red_dist = abs(rx - p.rx)
                                   + abs(ry - p.ry);
                    int blue_dist = abs(bx - p.bx)
                                    + abs(by - p.by);

                    if (red_dist > blue_dist) {
                        rx -= dx[i];
                        ry -= dy[i];
                    } else {
                        bx -= dx[i];
                        by -= dy[i];
                    }
                }
            }

            if (!visited[ry][rx][by][bx]) {
                visited[ry][rx][by][bx] = true;

                q.push({ry, rx, by, bx, p.cnt + 1});
            }
        }
    }
    return -1;
}

int main(void) {
    input();

    point start = {start_ry, start_rx, start_by, start_bx, 0};

    visited[start.ry][start.rx][start.by][start.bx] = true;
    q.push(start);

    cnt = process();

    cout << cnt << endl;
}
*/
