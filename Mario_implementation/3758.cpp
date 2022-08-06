/*
#include <bits/stdc++.h>
using namespace std;
struct kcpc {
    int team;int score;
    int submit;int final;
};
bool cmp(kcpc x, kcpc y) {
    if (x.score > y.score) return x.score > y.score;
    else if (x.score == y.score && x.submit < y.submit) return x.submit < y.submit;
    else if (x.score == y.score && x.submit == y.submit && x.final < y.final) return x.final < y.final;
    return x.score > y.score;
}
void solve() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, k, t, m;
    cin >> n >> k >> t >> m;
    map<int, map<int, int>> a; //팀 문제 최고점수
    map<int, pair<int, pair<int,int>>> b;
    vector<kcpc> v;
    for (int i = 0; i < m; i++) {
        int team;
        int problem;
        int score;
        cin >> team >> problem >> score;

        if (a[team][problem]) { //해당 팀이 이미 문제를 풀었었다면
            b[team].first -= a[team][problem];
            a[team][problem] = max(a[team][problem], score);
            b[team].first += a[team][problem];
        }else {
            b[team].first += score;
            a[team][problem] = score;
        }
        b[team].second.first++;
        b[team].second.second = i + 1;
    }
    for (auto it = b.begin(); it != b.end(); it++)
        v.push_back({it->first, it->second.first, it->second.second.first, it->second.second.second});
    sort(begin(v), end(v), cmp);
    int team_rank = 1;
    for (int i = 0; i < v.size(); i++) {
        if (v[i].team == t) {
            cout << team_rank << '\n';
            return;
        }
        team_rank++;
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}*/
