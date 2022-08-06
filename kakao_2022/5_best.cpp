#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#define MAX_STATE 17
using namespace std;
struct Point{
    int cur,sheep,wolves,state;
};
vector<int> adj[20];
vector<int> Info;
//// bit_masking, bfs
//이미 방문한 노드도 상태가 다르다면 방문하되, 양이나 늑대의 숫자가 늘어나지 않는다.
bool visited[17][1<<MAX_STATE];

int bfs() {
    queue<Point> q;
    q.push({0,1,0,1});
    visited[0][1] = true;
    int ret = 0;

    while(!q.empty()) {
        Point curr = q.front();
        q.pop();
        ret = max(ret, curr.sheep);
        for (int nxt : adj[curr.cur]) {
            int ns = 0;
            int nw = 0;
            if (!Info[nxt] && !(curr.state & (1<<nxt))) ns = 1;
            if (Info[nxt] && !(curr.state & (1<<nxt))) nw = 1;
            if (Info[nxt] && curr.sheep <= curr.wolves + nw) continue;
            int n_state = curr.state | (1 << nxt);
            if (visited[nxt][n_state]) continue;
            visited[nxt][n_state] = true;
            q.push({nxt, curr.sheep+ns,curr.wolves+nw,n_state});
        }
    }
    return ret;
}

int solution(vector<int> info, vector<vector<int>> edges) {
    Info = info;
    int num = 0;
    for(auto eg : edges){
        adj[eg[0]].push_back(eg[1]);
        adj[eg[1]].push_back(eg[0]);
    }
    int answer = bfs();
    return answer;
}