#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
const int NM  = 50005;

int N, M, gateN, summitN;
int gates[NM], visit[NM], summits[NM], isSummit[NM];
vector<pii> con[NM];

int ansV = 1e9, ansSummit;

void BFS(int S, int lim) {
    queue<int> q;
    q.push(S);
    visit[S] = 1;
    while(!q.empty()) {
        int x = q.front();
        q.pop();

        if (isSummit[x]) continue; //���� ��尡 ���츮�� Ž�� ����

        for (auto [y,c] : con[x]) {
            // ������ �Ѿ�� �����̸� ����
            if (c > lim) continue;
            if (visit[y]) continue;
            visit[y] = 1;
            q.push(y);
        }
    }
}

void input() {
    cin >> N >> M >> gateN >> summitN;

    for (int i = 1; i <= M; i++) {
        int x, y, c;
        cin >> x >> y >> c;
        con[x].emplace_back(y,c);
        con[y].emplace_back(x,c);
    }
    for (int i = 1; i <= gateN; i++) {
        cin >> gates[i];
    }
    for (int i = 1; i <= summitN; i++) {
        cin >> summits[i];
        isSummit[summits[i]] = 1;
    }

    sort(summits+1, summits+1+summitN);
}

int check(int lim) {
    for (int i = 1; i <= N; i++) visit[i] = 0;
    for (int i = 1; i <= gateN; i++) {
        if (visit[gates[i]]) continue;
        BFS(gates[i], lim); //���Ա����� ������ ���� ã��
    }

    for (int i = 1; i <= summitN; i++) {
        if (visit[summits[i]]) {
            ansV = lim;
            ansSummit = summits[i];
            return 1;
        }
    }

    return 0;
}

void solve() {
    int l = 1, r = 1e9, mid;
    while(l < r) {
        mid = (l + r) / 2;

        //mid�� ������ ���� �� ���� ������ ���츮�� �ִٸ�
        if (check(mid)) {
            r = mid - 1;
        }else {
            l = mid + 1;
        }
    }

    cout << ansSummit << ' ' << ansV;
}

int main() {
    fast_io;
    input();
    solve();
}
