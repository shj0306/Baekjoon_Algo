#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
int N, M, p[10001],S,E;

struct A {
    int a,b,w;
    //내림차순 정렬
    bool operator<(const A &o) const {
        return w > o.w;
    }
}a[100001];

int find_root(int x) {
    if (p[x] == x) return x;
    return p[x] = find_root(p[x]);
}

void union_set(int x, int y) {
    int r1 = find_root(x);
    int r2 = find_root(y);
    p[r1] = r2;
}

int main() {
    fast_io;
    cin >> N >> M;

    for (int i = 1; i <= N; i++) {
        p[i] = i;
    }
    for (int i = 0; i < M; i++) {
        cin >> a[i].a >> a[i].b >> a[i].w;
    }

    cin >> S >> E;
    //중량제한 기준 내림차순 정렬
    sort(a, a + M);

    for (int i = 0;;i++) {
        union_set(a[i].a, a[i].b);
        if (find_root(S) == find_root(E)) {
            cout << a[i].w;
            return 0;
        }
    }
}
