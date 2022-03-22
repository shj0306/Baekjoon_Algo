/*
#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
const int MAX = 100001;
long long N, M;
bool flag[MAX];
pair<long long, long long> p[MAX];
vector<pair<int, int>> spicy;

int find(int d) {
    if (p[d].first == d) return d;
    return p[d].first = find(p[d].first);
}

void union_set(int d1, int d2) {
    int r1 = find(d1);
    int r2 = find(d2);
    if (r1 == r2) return;
    p[r1].second += p[r2].second;
    p[r2].first = r1;
}

int main() {
    fast_io;
    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        int f, s;
        cin >> f >> s;
        p[i] = {i, f};
        spicy.emplace_back(s, i);
    }

    sort(all(spicy));

    for (pair<int,int> a : spicy) {
        flag[a.second] = true;
        if (a.second != 0 && flag[a.second-1]) { union_set(a.second,a.second-1); }
        if (a.second != N - 1 && flag[a.second+1]) { union_set(a.second, a.second + 1); }
        if (p[find(a.second)].second >= M) {
            cout << a.first << '\n';
            break;
        }
    }
}*/
