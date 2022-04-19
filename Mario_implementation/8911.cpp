/*
#include <bits/stdc++.h>
using namespace std;
int dx[] = {0,-1,0,1}; //북서남동
int dy[] = {1,0,-1,0};
//0->3->2->1->0
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        string cmd;
        int min_x = 0, max_x = 0;
        int min_y = 0, max_y = 0;
        int x = 0, y = 0;
        cin >> cmd;
        int dir = 0;
        for (char c : cmd) {
            if (c == 'F') {
                x += dx[dir]; y += dy[dir];
                max_x = max(max_x, x);
                min_x = min(min_x, x);
                max_y = max(max_y, y);
                min_y = min(min_y, y);
            }else if (c == 'B') {
                x -= dx[dir]; y -= dy[dir];
                max_x = max(max_x, x);
                min_x = min(min_x, x);
                max_y = max(max_y, y);
                min_y = min(min_y, y);
            }else if (c == 'L') dir = ++dir % 4;
            else dir = (dir+3) % 4;
        }
        cout << (max_x-min_x)*(max_y-min_y) << '\n';
    }
}*/
