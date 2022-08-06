#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
const int MAX = 501;
int N, M, u, v, P[MAX];
vector<int> treeSet;
//https://loosie.tistory.com/460
//입력받으면서 하지말고 전부 유니온파인트를 수행한다음 연산을 수행한다.

int find(int r) {
    if (r == P[r]) return r;
    return P[r] = find(P[r]);
}

void union_set(int v1, int v2) {
    int r1 = find(v1);
    int r2 = find(v2);

    if (r1 == r2) P[r1] = 0;
    else if (r1 < r2) P[r2] = r1;
    else P[r1] = r2;
}

int main() {
    fast_io;
    for (int t = 1; ; t++) {
        cin >> N >> M;
        if (N == 0 && M == 0) break;
        for (int i = 1; i <= N; i++) P[i] = i;

        for (int i = 1; i <= M; i++) {
            cin >> u >> v;
            union_set(u,v);
        }

        for (int i = 1; i <= N; i++) {
            int root = find(i);
            if (root == i) treeSet.push_back(i);
        }

        int sz = (int)treeSet.size();
        cout << "Case " << t << ": ";
        if (sz == 0) cout << "No trees." << '\n';
        else if (sz == 1) cout <<"There is one tree." << '\n';
        else cout << "A forest of " << sz << " trees." << '\n';

        treeSet.clear();
    }
}