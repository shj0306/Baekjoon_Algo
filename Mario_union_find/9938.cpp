/*
#include <bits/stdc++.h>
#include <unordered_map>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
const int MAX = 300001;

int n,l; //술 개수, 서랍 개수
int p[MAX];
bool drawer[MAX];

int find(int d) {
    if (p[d] == d) return d;
    return p[d] = find(p[d]);
}

void union_set(int d1, int d2) {
    int r1 = find(d1);
    int r2 = find(d2);
    if (r1 == r2) return;
    if (!drawer[r1]) p[r2] = r1;
    else p[r1] = r2;
}
int main() {
    fast_io;
    cin >> n >> l;

    for (int i = 1; i <= l; i++) p[i] = i;
    for (int i = 1; i <= n; i++) {
        int d1, d2;
        cin >> d1 >> d2;
        if (!drawer[d1]) {
            drawer[d1] = true;
            union_set(d1,d2);
        }else if (!drawer[d2]) {
            drawer[d2] = true;
            union_set(d1,d2);
        }else if (!drawer[find(d1)]){
            drawer[find(d1)] = true;
            union_set(d1,d2);
        }else if (!drawer[find(d2)]) {
            drawer[find(d2)] = true;
            union_set(d1,d2);
        }else {
            union_set(d1,d2);
            cout << "SMECE" << '\n';
            continue;
        }
        cout << "LADICA" << '\n';
    }
    return 0;
}
*/
