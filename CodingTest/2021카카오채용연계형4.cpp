/*
#include <bits/stdc++.h>
#define INF 1e9
using namespace std;
typedef pair<int,int> pii;
typedef tuple<int,int,int> tiii;
vector<int> trap;

//상태 state에 i번 비트가 켜져있는지를 반환하는 함수
bool bitmask(int state, int idx) {
    return (1 << trap[idx]) & state;
}

int solution(int n, int start, int end, vector<vector<int>> roads, vector<int> traps) {
    int max_size = pow(2,traps.size());
    trap = vector<int>(1010);
    vector<vector<int>> d(n+1, vector<int>(max_size));
    vector<pii> adj[1010]; //정방향
    vector<pii> radj[1010]; //역방향

    for (auto & road : roads) {
        int u = road[0];
        int v = road[1];
        int val = road[2];
        adj[u].emplace_back(v,val);
        radj[v].emplace_back(u,val);
    }
    fill(trap.begin()+1, trap.begin() + n+1, -1);
    for (int i = 0; i < traps.size(); i++) trap[traps[i]] = i;
    for (int i = 1; i <= n; i++) fill(d[i].begin(), d[i].end(), INF);
    d[start][0] = 0; //init state
    //가중치가 작은 원소를 앞으로 내세운다.
    priority_queue<tiii, vector<tiii>, greater<tiii>> pq;
    pq.push({d[start][0], start, 0});
    while(!pq.empty()) {
        int val, idx, state;
        tie(val, idx, state) = pq.top();
        pq.pop();

        if (idx == end) return val;
        if (d[idx][state] != val) continue;

        for (auto p : adj[idx]) { //정방향 간선
            int nxt = p.first;
            int dist = p.second;
            int rev = 0;
            if (trap[idx] != -1 && bitmask(state, idx)) rev ^= 1; //이미 idx번 트랩을 밝았다면 rev를 뒤집는다.
            if (trap[nxt] != -1 && bitmask(state, nxt)) rev ^= 1;
            if (rev) continue;
            int nxt_state = state;
            if (trap[nxt] != -1) nxt_state ^= (1 << trap[nxt]);
            if (d[nxt][nxt_state] > dist + val) {
                d[nxt][nxt_state] = dist + val;
                pq.push({d[nxt][nxt_state], nxt, nxt_state});
            }
        }
        for(auto p : radj[idx]){ // 역방향 간선에 대한 확인
            int nxt = p.first; // 간선으로 연결된 다음 방
            int dist = p.second;
            int rev = 0;
            if(trap[idx] != -1 && bitmask(state, idx)) rev ^= 1; // 현재 idx번 trap을 밟은 상태라면 rev 상태를 뒤집음
            if(trap[nxt] != -1 && bitmask(state, nxt)) rev ^= 1; // 현재 nxt번 trap을 밟은 상태라면 rev 상태를 뒤집음
            if(!rev) continue; // 역방향 간선을 보고 있으므로 trap을 0개 or 2개 밟은 상황일 경우 넘어감
            int nxt_state = state;
            if(trap[nxt] != -1) nxt_state ^= (1 << trap[nxt]);
            if(d[nxt][nxt_state] > dist + val){
                d[nxt][nxt_state] = dist + val;
                pq.push({d[nxt][nxt_state],nxt,nxt_state});
            }
        }
    }
    return -1; //impossible
}
int main() {
    solution(4,1,4,{{1, 2, 1}, {3, 2, 1}, {2, 4, 1}},{2, 3});
}*/
