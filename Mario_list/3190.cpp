/*
#include <bits/stdc++.h>
using namespace std;

int dy[] = {1,0,-1,0};
int dx[] = {0,1,0,-1};

int main() {
    int n, k, t = 0, l;
    cin >> n >> k;
    vector<vector<int>> v(n, vector<int>(n, 0));

    for (int i = 0; i < k; i++) {
        int row, col;
        cin >> row >> col;
        v[row-1][col-1] = 1;
    }
    cin >> l; //방향 변환 횟수
    vector<pair<int,char>> dir(l);
    for (int i = 0; i < l; i++) {
        cin >> dir[i].first >> dir[i].second;
    }

    int d = 0; int head = 0, tail = 0;
    int idx = 0; //방향 전환 인덱스
    deque<pair<int,int>> snake;
    map<pair<int,int>, int> memory; //뱀이 자신의 몸과 부딪히는 지
    snake.emplace_back(0,0);//head=tail

    while(true) {//게임이 끝날 때까지 루프
        int head_row = snake.front().first + dx[d];
        int head_col = snake.front().second + dy[d];
        snake.push_front({head_row,head_col}); //머리 이동
        t++; //time
        if (head_row >= n || head_col >= n || head_row < 0 || head_col < 0) break;
        if (memory[{head_row,head_col}]) break;
        memory[{head_row, head_col}] = 1;
        if (v[head_row][head_col] == 0) {
            memory[{snake.back().first, snake.back().second}] = 0;
            snake.pop_back();
        }
        else v[head_row][head_col] = 0;
        if (idx < l) {
            if (t == dir[idx].first) {
                if (dir[idx].second == 'D') { //right
                    if (d == 3) {
                        d = 0;
                    }else d++;
                }else {//left
                    if (d == 0) {
                        d = 3;
                    }else d--;
                }
                idx++;
            }
        }
    }
    cout << t << '\n';
}*/
