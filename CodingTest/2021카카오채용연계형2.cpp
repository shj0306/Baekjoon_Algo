/*
#include <bits/stdc++.h>
using namespace std;
typedef vector<bool> vb;
typedef vector<string> vs;
struct point {
    int row;
    int col;
    int dist;
};
vector<int> dx, dy;
queue<point> q;
bool bfs(int id, int row, int col,vector<vs> places, vector<vb> visited) {
    q.push({row,col,0});
    while (!q.empty()) {
        point cur = q.front();
        q.pop();
        for (int i = 0; i < 4; i++) {
            int nr = cur.row + dy[i];
            int nc = cur.col + dx[i];
            if (nr < 0 || nr >= 5 || nc < 0 || nc >= 5) continue;
            if (visited[nr][nc]) continue;
            if (places[id][nr][nc] == 'X') continue;
            if (places[id][nr][nc] == 'P') {
                while(!q.empty()) q.pop();
                if (cur.dist + 1 <= 2) return false;
                else return true;
            }
            else {
                visited[nr][nc] = true;
                q.push({nr,nc,cur.dist+1});
            }
        }
    }
    return true;
}
vector<int> solution(vector<vs> places) {
    vector<int> answer; q = queue<point>();
    dx = {1,-1,0,0}; dy = {0,0,1,-1};
    for (int i = 0; i < places.size(); i++) {
        bool is_possible = true;
        vector<vb> visited(5,vb(5,false));
        for (int j = 0; j < places[i].size(); j++) {
            for (int k = 0; k < places[i][j].size(); k++) {
                if (places[i][j][k] == 'P') {
                    visited[j][k] = true;
                    if (!bfs(i,j,k,places,visited)) {
                        is_possible = false;
                        answer.push_back(0);
                        break;
                    }
                }
            }
            if (!is_possible) break;
        }
        if (is_possible) answer.push_back(1);
    }
    return answer;
}*/
